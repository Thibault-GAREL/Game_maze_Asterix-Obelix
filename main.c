#include "fonction_t.h"
#include "Party.h"

// gcc -g -Wall main_t.c Gc.c fonction_t.c Menu.c Plateau.c Player.c Part.c -lallegro -lallegro_image -lallegro_font -oProject; .\Project.exe
//gcc -g -Wall main_t.c Gc.c fonction_t.c Menu.c Plateau.c Player.c Part.c utils.c Party.c -lallegro -lallegro_image -lallegro_font -lallegro_ttf -oProject

int SelectMenu=0; //permet de valider la sélection dans le menu

void Switch_Part_Loop(GC_MANAGER* pManager, PARTY* pParty);
void Deplacement_Player_Loop(GC_MANAGER* pManager, PARTY* pParty);
void Draw_Clear_Plateau_Player(PARTY* pParty);
void Update_Event(GC_MANAGER* pManager);

int main() {

    GC_MANAGER manager;
    GC_MANAGER_CREATE(&manager, 1000, 1000);

    TextMenu textMenu;
    MenuInit(&textMenu);

    while (SelectMenu==0) {
        Update_Event(&manager);
         
        //MenuDisplay(&textMenu);

        if (manager.event.type == ALLEGRO_EVENT_KEY_DOWN) // si clavier selon touche appuyée,
        { 
            switch (manager.event.keyboard.keycode) {
                case ALLEGRO_KEY_PAD_1 : 
                SelectMenu = 1;
                break;
                case ALLEGRO_KEY_PAD_2 : 
                SelectMenu = 2;
                break;
                case ALLEGRO_KEY_PAD_3 : 
                SelectMenu = 3;
                break;
            }
        }
    }
    
    printf("\nSelMenu=%d", SelectMenu);
    
    PARTY party;
    Party_Init(&party, 4, &manager);

    while (1)
    {           
        Switch_Part_Loop(&manager, &party);
        Deplacement_Player_Loop(&manager, &party);
    }

    GC_MANAGER_DESTROY(&manager);
    return 0;
}

void Switch_Part_Loop(GC_MANAGER* pManager, PARTY* pParty)
{
    while (!pParty->player_turn_step)
    {
        Update_Event(pManager);

        Party_Buttons_Update_Event(pParty);
        Party_Buttons_Exe(pParty);

        Draw_Clear_Plateau_Player(pParty);
        Party_Buttons_Draw(pParty);
        al_flip_display();
    }
    pParty->player_turn_step = 0;
}

void Deplacement_Player_Loop(GC_MANAGER* pManager, PARTY* pParty)
{
    PART* pPart_target = 0;
    while (!pPart_target || &pParty->plateau.parts[pParty->players[pParty->player_turn].position_on_plateau.x][pParty->players[pParty->player_turn].position_on_plateau.y] == pPart_target)
    {
        Update_Event(pManager);
        pPart_target = Plateau_Get_Part_Click(&pParty->plateau);

        /*if (pPart_target->position_on_plateau.x == pParty->players[pParty->player_turn].position_on_plateau.x && pPart_target->position_on_plateau.y == pParty->players[pParty->player_turn].position_on_plateau.y)
        {
            pPart_target = 0;
        }*/
    }

    Player_Deplacement(&pParty->players[pParty->player_turn], pPart_target);
    Party_Next_Turn(pParty);
    Draw_Clear_Plateau_Player(pParty);
}

void Draw_Clear_Plateau_Player(PARTY* pParty)
{
    ALLEGRO_COLOR blk = al_map_rgb(0,0,0);
    al_clear_to_color(blk);
    Party_Plateau_Draw(pParty);
    Party_Player_Draw(pParty);
}

void Update_Event(GC_MANAGER* pManager)
{
    GC_MANAGER_UPDATE_EVENT(pManager);

    if (pManager->event.display.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
    {
        exit(0);
    }
}
