#ifndef PART_h
#define PART_h

#include "Gc.h"
#include "Global.h"
#include "utils.h"
#include "Button.h"

typedef struct
{
    BUTTON button;
    Vector2Int position_on_plateau;
    int rotation; 
    char isExtra;
    int treasure;
    int logicPath[3][3];
    char filePath[50];
    int angle;
    //GC_BUTTON* pButton;
}PART;

void Part_Init(PART* pPart, char sprite_filePath[50], Vector2Int _position_on_plateau, char _isExtra, GC_MANAGER* pManager, int _logicPath[3][3], int angle);
void Part_Draw(PART* pPart, GC_SPRITE treasure_sprite [24]);
void Part_Update_Event(PART* pPart);
void Part_Treasure (PART* pPart, GC_SPRITE treasure_sprite [24]);

#endif