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

    for (int i = 0; i < pParty->player_count; i++)
    {
        Player_Init(&pParty->players[i], i, "");
        pParty->players[i].position_on_plateau.x = players_start_pos[i][0];
        pParty->players[i].position_on_plateau.y = players_start_pos[i][1];
    }

    for (int i = 0; i < BUTTONS_SETPART_COUNT; i++)
    {
        Button_Init(&pParty->buttons[i], i, pManager, BUTTON_PATH);
    }

    Buttons_Init(pParty);

    pParty->pManager = pManager;
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

void Party_Buttons_Exe(PARTY* pParty)
{
    int i = 0;

    for (int j = 0; j < 3 ; j++)
    {
        if (pParty->buttons[i++].gc_button.state == GC_BUTTON_STATE_RELEASED)
        {
            Shift_Column(&pParty->plateau, j * 2 + 1, true);
            pParty->player_turn_step = 1;
            return;
        }
    }

    for (int j = 0; j < 3 ; j++)
    {
        if (pParty->buttons[i++].gc_button.state == GC_BUTTON_STATE_RELEASED)
        {
            Shift_Column(&pParty->plateau, j * 2 + 1, false); 
            pParty->player_turn_step = 1;
            return;
        }
    }

    for (int j = 0; j < 3 ; j++)
    {
        if (pParty->buttons[i++].gc_button.state == GC_BUTTON_STATE_RELEASED)
        {
            Shift_Line(&pParty->plateau, j * 2 + 1, true); 
            pParty->player_turn_step = 1;
            return;
        }
    }

    for (int j = 0; j < 3 ; j++)
    {
        if (pParty->buttons[i++].gc_button.state == GC_BUTTON_STATE_RELEASED)
        {
            Shift_Line(&pParty->plateau, j * 2 + 1, false);
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
    Plateau_Draw(&pParty->plateau);
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
