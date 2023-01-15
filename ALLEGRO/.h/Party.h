#ifndef PARTY_h
#define PARTY_h

#include "Global.h"
#include "Plateau.h"
#include "Player.h"
#include "Button.h"

typedef struct
{
    int player_count;
    int player_turn;
    int player_turn_step;
    PLATEAU plateau;
    PLAYER players[PLAYER_MAX_COUNT];
    BUTTON buttons[BUTTONS_SETPART_COUNT];
    GC_MANAGER* pManager;
}PARTY;

void Party_Init(PARTY* pParty, int player_count, GC_MANAGER* pManager);

void Party_Next_Turn(PARTY* pParty);

void Party_Buttons_Update_Event(PARTY* pParty);
void Party_Buttons_Exe(PARTY* pParty);

void Party_Plateau_Draw(PARTY* pParty);
void Party_Buttons_Draw(PARTY* pParty);
void Party_Player_Draw(PARTY* pParty);

#endif