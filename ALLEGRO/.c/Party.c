#include "../.h/Party.h"

int players_start_pos[4][2] = {{0, 0}, {PLATEAU_W_MAX_I, PLATEAU_H_MAX_I}, {0, PLATEAU_H_MAX_I}, {PLATEAU_W_MAX_I, 0}};

void Buttons_Init(PARTY* pParty)
{
    int i = 0;

    for (int j = 0; j < 3 ; j++)
    {
        Button_Set_Space(&pParty->buttons[i++], j * 2 * PART_W + PART_W + PLATEAU_OFFSET_X , 0, 0);
    }
    
    for (int j = 0; j < 3 ; j++)
    {
        Button_Set_Space(&pParty->buttons[i++], j * 2 * PART_W + PART_W + PLATEAU_OFFSET_X, PLATEAU_H_MAX_I * PART_H + PART_H + PLATEAU_OFFSET_Y, PI);
    }
    
    for (int j = 0; j < 3 ; j++)
    {
        Button_Set_Space(&pParty->buttons[i++], 0, j * 2 * PART_H + PART_H + PLATEAU_OFFSET_Y, -PI/2);
    }
    
    for (int j = 0; j < 3 ; j++)
    {
        Button_Set_Space(&pParty->buttons[i++], PLATEAU_W_MAX_I * PART_W + PART_W + PLATEAU_OFFSET_X, j * 2 * PART_H + PART_H + PLATEAU_OFFSET_Y, PI/2);
    }

    Button_Set_Space(&pParty->buttons[i++], EXTRA_PART_POS_X - PART_W, EXTRA_PART_POS_Y, PI);
    Button_Set_Space(&pParty->buttons[i], EXTRA_PART_POS_X + PART_W, EXTRA_PART_POS_Y, PI);
}

void Party_Init(PARTY* pParty, int player_count, GC_MANAGER* pManager) 
{
    pParty->player_count = player_count;
    pParty->player_turn = 0;
    pParty->player_turn_step = 0;
    Plateau_Init(&pParty->plateau, pManager);

    for (int i = 0; i < pParty->player_count; i++) {
        Player_Init(&pParty->players[i], i, "");
        pParty->players[i].position_on_plateau.x = players_start_pos[i][0];
        pParty->players[i].position_on_plateau.y = players_start_pos[i][1];
    }

    char* adresse_treasure[25] = {FILE_ACCESS ".\\Import\\Dessin_bague d'émeraude.png",
                                  FILE_ACCESS ".\\Import\\Dessin_bouclier_romain.png",
                                  FILE_ACCESS ".\\Import\\Dessin_byjoux.png",
                                  FILE_ACCESS ".\\Import\\Dessin_casque.png",
                                  FILE_ACCESS ".\\Import\\Dessin_casque_romain.png",
                                  FILE_ACCESS ".\\Import\\Dessin_Chaudron.png",
                                  FILE_ACCESS ".\\Import\\Dessin_clef.png",
                                  FILE_ACCESS ".\\Import\\Dessin_coffre.png",
                                  FILE_ACCESS ".\\Import\\Dessin_couronne_de_laurier.png",
                                  FILE_ACCESS ".\\Import\\Dessin_diamand.png",
                                  FILE_ACCESS ".\\Import\\Dessin_epee.png",
                                  FILE_ACCESS ".\\Import\\Dessin_fouet.png",
                                  FILE_ACCESS ".\\Import\\Dessin_Gourde.png",
                                  FILE_ACCESS ".\\Import\\Dessin_louche.png",
                                  FILE_ACCESS ".\\Import\\Dessin_Menhir.png",
                                  FILE_ACCESS ".\\Import\\Dessin_oeil.png",
                                  FILE_ACCESS ".\\Import\\Dessin_Os.png",
                                  FILE_ACCESS ".\\Import\\Dessin_Papyrusse.png",
                                  FILE_ACCESS ".\\Import\\Dessin_Pharaon.png",
                                  FILE_ACCESS ".\\Import\\Dessin_Poisson_Frai.png",
                                  FILE_ACCESS ".\\Import\\Dessin_sac_de_piece.png",
                                  FILE_ACCESS ".\\Import\\Dessin_sanglier.png",
                                  FILE_ACCESS ".\\Import\\Dessin_Sercophage.png",
                                  FILE_ACCESS ".\\Import\\Dessin_Serpe.png"};

    for (int i = 0; i < 24; ++i) 
    {
        GC_SPRITE_INIT(&pParty->treasure_sprite[i], adresse_treasure[i]);
    }

    for (int i = 0; i < BUTTONS_SETPART_COUNT; i++) 
    {
        Button_Init(&pParty->buttons[i], i, pManager, BUTTON_PATH);
    }

    Buttons_Init(pParty);

    pParty->pManager = pManager;

    int tab_treasure[24];
    for (int i = 0; i < 24; ++i) {
        tab_treasure[i] = i;
    }

    for (int i = 0; i < BUTTONS_SETPART_COUNT - 2; i++)
    {
        Button_Init(&pParty->buttons[i], i, pManager, BUTTON_PATH);
    }
    Button_Init(&pParty->buttons[BUTTONS_SETPART_COUNT - 2], 0, pManager, BUTTON_ROTA_POSI);
    Button_Init(&pParty->buttons[BUTTONS_SETPART_COUNT - 1], 0, pManager, BUTTON_ROTA_NEGA);

    Buttons_Init(pParty);

    pParty->pManager = pManager;



    Random_LessDiscount(tab_treasure, 24, 50);

    for (int i = 0; i < player_count; ++i) 
    {
        for (int j = 0; j < 24 / player_count; ++j) 
        {
            pParty->players[i].liste_treasure[j] = tab_treasure[j + i * 24 / player_count];
        }
    }


    int tab_treasure_sur_plateau[24];
    for (int i = 0; i < 24; ++i) {
        tab_treasure_sur_plateau[i] = i;
    }
    Random_LessDiscount(tab_treasure_sur_plateau, 24, 50);

    int compteur = 0;
    int compteur1 = 0;
    for (int x = 0; x < PLATEAU_W; x++) 
    {
        for (int y = 0; y < PLATEAU_H; y++) 
        {
            if ((x == 0 && y == 0) || (x == 0 && y == 6) || (x == 6 && y == 0) || (x == 6 && y == 6)) 
            {
                continue;
            }
            if ((x % 2 || y % 2)!=1) 
            {
                pParty->plateau.parts[x][y].treasure = tab_treasure_sur_plateau[12 + compteur++];
                //printf("\ntresor_fixe=%d (%d;%d)", 12 + compteur - 1, x, y);
            }
        }
    }

    int compteur2 = 0;

    while (compteur2 < 12)
    {
        int x = rand() % 7;
        int y = rand() % 7;
        if (pParty->plateau.parts[x][y].treasure == -1 && !(x == 0 && y == 0) && !(x == 6 && y == 6) && !(x == 0 && y == 6) && !(x == 6 && y == 0))
        {
            pParty->plateau.parts[x][y].treasure = tab_treasure_sur_plateau[compteur2++];
            //printf("\ntresor_mobile=%d (%d;%d)", compteur2 - 1, x, y);
        }
    }
}

void Party_Next_Turn(PARTY* pParty)
{
    if (++pParty->player_turn >= pParty->player_count)
    {
        pParty->player_turn = 0;
    }
}

void Party_Buttons_Update_Event(PARTY* pParty)
{
    for (int i = 0; i < BUTTONS_SETPART_COUNT; i++)
    {
        GC_BUTTON_UPDATE_EVENT(&pParty->buttons[i].gc_button);
    }
}

void Update_Player_Position(PARTY* pParty, int line, int column, bool direct_sens)
{
    for (int i = 0; i < pParty->player_count; i++)
    {
        Vector2Int* player_pos = &pParty->players[i].position_on_plateau;

        if (player_pos->x == column)
        {
            player_pos->y -= 1 - 2 * direct_sens;
            player_pos->y -= 7 * (player_pos->y > PLATEAU_H_MAX_I);
            player_pos->y += 7 * (player_pos->y < 0);
        }

        else if (player_pos->y == line)
        {
            player_pos->x -= 1 - 2 * direct_sens;
            player_pos->x -= 7 * (player_pos->x > PLATEAU_W_MAX_I);
            player_pos->x += 7 * (player_pos->x < 0);
        }
        if (pParty->players [i].liste_treasure[pParty->players[pParty->player_turn].nb_treasure]==pParty->plateau.parts[player_pos->x][player_pos->y].treasure) {
            printf ("Win");
        }

    }
}

void Party_Buttons_Exe(PARTY* pParty)
{
    int i = 0;

    for (int j = 0; j < 3 ; j++)
    {
        if (pParty->buttons[i++].gc_button.state == GC_BUTTON_STATE_RELEASED)
        {
            Shift_Column(&pParty->plateau, j * 2 + 1, true);
            Update_Player_Position(pParty, -1, j * 2 + 1, true);
            pParty->player_turn_step = 1;
            return;
        }
    }

    for (int j = 0; j < 3 ; j++)
    {
        if (pParty->buttons[i++].gc_button.state == GC_BUTTON_STATE_RELEASED)
        {
            Shift_Column(&pParty->plateau, j * 2 + 1, false); 
            Update_Player_Position(pParty, -1, j * 2 + 1, false);
            pParty->player_turn_step = 1;
            return;
        }
    }

    for (int j = 0; j < 3 ; j++)
    {
        if (pParty->buttons[i++].gc_button.state == GC_BUTTON_STATE_RELEASED)
        {
            Shift_Line(&pParty->plateau, j * 2 + 1, true); 
            Update_Player_Position(pParty, j * 2 + 1, -1, true);
            pParty->player_turn_step = 1;
            return;
        }
    }

    for (int j = 0; j < 3 ; j++)
    {
        if (pParty->buttons[i++].gc_button.state == GC_BUTTON_STATE_RELEASED)
        {
            Shift_Line(&pParty->plateau, j * 2 + 1, false);
            Update_Player_Position(pParty, j * 2 + 1, -1, false);
            pParty->player_turn_step = 1;
            return;
        }
    }

    if (pParty->buttons[i++].gc_button.state == GC_BUTTON_STATE_RELEASED)
    {
        Rotate_Part(&pParty->plateau, 1); 
        return;
    }

    if (pParty->buttons[i++].gc_button.state == GC_BUTTON_STATE_RELEASED)
    {
        Rotate_Part(&pParty->plateau, -1);
        return;
    }
}

void Party_Plateau_Draw(PARTY* pParty)
{
    Plateau_Draw(&pParty->plateau, pParty->treasure_sprite);
}

void Party_Buttons_Draw(PARTY* pParty)
{
    for (int i = 0; i < BUTTONS_SETPART_COUNT; i++)
    {
       Button_Draw(&pParty->buttons[i]);
    }
}

void Party_Player_Draw(PARTY* pParty)
{
    for (int i = 0; i < pParty->player_count; i++)
    {
        Player_Draw(&pParty->players[i]);
        //printf("\n player[%d] (x=%d, y=%d) ", i, pParty->players[i].pPart->position_on_plateau.x, pParty->players[i].pPart->position_on_plateau.y);
    }
}
