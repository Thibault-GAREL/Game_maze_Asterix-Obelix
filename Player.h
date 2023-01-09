#ifndef PLAYER_h
#define PLAYER_h

#include "Gc.h"
#include "Global.h"
#include "Part.h"
#include "utils.h"

typedef struct
{
    GC_SPRITE sprite;
    Vector2Int position_on_plateau;
    char* name;
}PLAYER;

void Player_Init(PLAYER* pPlayer, int id, char* name);
void Player_Draw(PLAYER* pPlayer);
void Player_Deplacement(PLAYER* pPlayer, PART* pPart_New);

#endif