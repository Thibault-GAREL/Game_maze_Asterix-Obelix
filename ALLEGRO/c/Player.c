#include "../.h/Player.h"

char* players_sprite_filePath[PLAYER_MAX_COUNT] = {FILE_ACCESS ".\\Import\\Dessin_asterix_Image_Centre_Small.png", 
                            FILE_ACCESS ".\\Import\\Dessin_Idefix_Image_Small.png",
                            FILE_ACCESS ".\\Import\\Dessin_obelix_Image_Small.png", 
                            FILE_ACCESS ".\\Import\\Dessin_Panoramix_Small.png"};


void Player_Init(PLAYER* pPlayer, int id, char* name)
{
    GC_SPRITE_INIT(&pPlayer->sprite, players_sprite_filePath[id]);
    //pPlayer->pPart = NULL;
    pPlayer->position_on_plateau.x = 0;
    pPlayer->position_on_plateau.y = 0;
    pPlayer->name = name;
}

void Player_Draw(PLAYER* pPlayer)
{
    Vector2Int pixel_pos = PlateauPosition2PixelPosition(pPlayer->position_on_plateau);
    pPlayer->sprite.gc_properties.gc_space.POSITION_X = pixel_pos.x;
    pPlayer->sprite.gc_properties.gc_space.POSITION_Y = pixel_pos.y;

    /*if (pPlayer->pPart)
    {   
        //pPlayer->sprite.gc_properties.gc_space.POSITION_X = pPlayer->pPart->button.sprite.gc_properties.gc_space.POSITION_X;
        //pPlayer->sprite.gc_properties.gc_space.POSITION_Y = pPlayer->pPart->button.sprite.gc_properties.gc_space.POSITION_Y;
    }*/
    
    GC_SPRITE_DRAW(&pPlayer->sprite);
}

void Player_Deplacement(PLAYER* pPlayer, PART* pPart_New)
{
    /*if (!pPlayer->pPart)
    {
        fprintf(stderr, "\n[FAIL] {Player_Deplacement} Player has'nt part");
        return;
    }*/

    if (!pPart_New || !pPlayer)
    {
        return;
    }
    
    pPlayer->position_on_plateau = pPart_New->position_on_plateau;
}
