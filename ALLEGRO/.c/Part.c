#include "../.h/Part.h"

void Part_Init(PART* pPart, const char* sprite_filePath, Vector2Int _position_on_plateau, char _isExtra, GC_MANAGER* pManager)
{
    Button_Init(&pPart->button, 0, pManager, sprite_filePath);
    pPart->position_on_plateau = _position_on_plateau;
    pPart->rotation = 0;
    pPart->isExtra = _isExtra;

    /*for (int i = 0; i < PLAYER_MAX_COUNT; i++)
    {
        pPart->pPlayers[i] = NULL;
    }*/
}

void Part_Draw(PART* pPart)
{   
    Vector2Int sprite_positon;

    if (!pPart->isExtra)
    {
        sprite_positon = PlateauPosition2PixelPosition(pPart->position_on_plateau);
    }
    else
    {
        Set_Vector2Int(&sprite_positon, EXTRA_PART_POS_X, EXTRA_PART_POS_Y);
    }

    Button_Set_Space(&pPart->button, sprite_positon.x, sprite_positon.y, pPart->rotation * PI / 2);
    Button_Draw(&pPart->button);
}

void Part_Update_Event(PART* pPart)
{
    Button_Update_Event(&pPart->button);
}