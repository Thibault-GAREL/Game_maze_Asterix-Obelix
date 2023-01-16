#include "../.h/Part.h"

void Part_Init(PART* pPart, char sprite_filePath[50], Vector2Int _position_on_plateau, char _isExtra, GC_MANAGER* pManager, int _logicPath[3][3], int angle)
{
    Button_Init(&pPart->button, 0, pManager, sprite_filePath);
    pPart->position_on_plateau = _position_on_plateau;
    pPart->rotation = 0;
    pPart->isExtra = _isExtra;
    pPart->treasure = -1;

    for (int i = 0; i < 50; i++)
    {
        pPart->filePath[i] = sprite_filePath[i];
    }
    
    pPart->angle = angle;

    /*for (int i = 0; i < PLAYER_MAX_COUNT; i++)
    {
        pPart->pPlayers[i] = NULL;
    }*/

    for (int x = 0; x < 3; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            pPart->logicPath[x][y] = _logicPath[x][y];
        }
    }

    for (int i = 0; i < angle; i++)
    {
        Rotate_Tableau2(pPart->logicPath);
    }

    //printf("\n%d", pPart->logicPath[0][0]);
    //printf("%d",   pPart->logicPath[1][0]);
    //printf("%d",   pPart->logicPath[2][0]);
    //printf("\n%d", pPart->logicPath[0][1]);
    //printf("%d",   pPart->logicPath[1][1]);
    //printf("%d",   pPart->logicPath[2][1]);
    //printf("\n%d", pPart->logicPath[0][2]);
    //printf("%d",   pPart->logicPath[1][2]);
    //printf("%d",   pPart->logicPath[2][2]);
    //printf("(1) [%d;%d] Index{part=%d} \n", pPart->position_on_plateau.x, pPart->position_on_plateau.y, Vector2Int2Index(&pPart->position_on_plateau));
}

void Part_Draw(PART* pPart, GC_SPRITE treasure_sprite [24])
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
    
    if (pPart->treasure != -1)
    {
        Part_Draw_Treasure (pPart, treasure_sprite);
    }
}

void Part_Update_Event(PART* pPart)
{
    Button_Update_Event(&pPart->button);
}

void Part_Draw_Treasure (PART* pPart,  GC_SPRITE treasure_sprite [24])
{

    GC_SPRITE treasure;

    treasure = treasure_sprite [pPart->treasure];
    treasure.gc_properties.gc_space.POSITION_X = pPart->button.sprite.gc_properties.gc_space.POSITION_X;
    treasure.gc_properties.gc_space.POSITION_Y = pPart->button.sprite.gc_properties.gc_space.POSITION_Y;
    
    GC_SPRITE_DRAW(&treasure);
}
