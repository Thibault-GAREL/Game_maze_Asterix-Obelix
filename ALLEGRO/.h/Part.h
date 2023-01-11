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
    GC_BUTTON* pButton;
}PART;

void Part_Init(PART* pPart, const char* sprite_filePath, Vector2Int _position_on_plateau, char _isExtra, GC_MANAGER* pManager);
void Part_Draw(PART* pPart);
void Part_Update_Event(PART* pPart);

#endif