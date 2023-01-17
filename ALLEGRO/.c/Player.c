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
    pPlayer->nb_treasure = 0;
}

void Player_Draw(PLAYER* pPlayer)
{
    Vector2Int pixel_pos = PlateauPosition2PixelPosition(pPlayer->position_on_plateau);
    pPlayer->sprite.gc_properties.gc_space.POSITION_X = pixel_pos.x;
    pPlayer->sprite.gc_properties.gc_space.POSITION_Y = pixel_pos.y;
    
    GC_SPRITE_DRAW(&pPlayer->sprite);
}

int Get_PathFinding(PLAYER* pPlayer, PART* pPart_New, PLATEAU* pPlateau)
{
    Vector2Int sp = pPlayer->position_on_plateau;
    sp.x = sp.x * 3 + 1;
    sp.y = sp.y * 3 + 1;

    Vector2Int ep = pPart_New->position_on_plateau;
    ep.x = ep.x * 3 + 1;
    ep.y = ep.y * 3 + 1;

    int walls[PLATEAU_LOGIC_PATH_W][PLATEAU_LOGIC_PATH_W];
    int distances[PLATEAU_LOGIC_PATH_W][PLATEAU_LOGIC_PATH_W];
    int ways[100][2];

    for (int plt_X = 0; plt_X < PLATEAU_W; plt_X++)
    {
        for (int plt_Y = 0; plt_Y < PLATEAU_H; plt_Y++)
        {
            for (int lp_X = 0; lp_X < 3; lp_X++)
            {
                for (int lp_Y = 0; lp_Y < 3; lp_Y++)
                {
                    walls[plt_X * 3 + lp_X][plt_Y * 3 + lp_Y] = pPlateau->parts[plt_X][plt_Y].logicPath[lp_X][lp_Y];
                    distances[plt_X * 3 + lp_X][plt_Y * 3 + lp_Y] = ND;
                }
            }
        }
    }

    Algo_PathFinding(walls, distances, sp.x, sp.y, ep.x, ep.y, ways);

    int path_size;
    for (path_size = 0; path_size < 100; path_size++)
	{	
		if (ways[path_size][0] == ND && ways[path_size][1] == ND)
		{
			//printf("\nDistance=%d", path_size);
			break;
		}
	}

	/*Console_Draw_Tableau(walls, "[WALLS]");
	Console_Draw_Tableau(distances, "[DISTANCES]");
	Console_Draw_Way(ways);*/

    if (path_size >= 2)
    {
        return 1;
    }

    return 0;
}

int Player_Deplacement(PLAYER* pPlayer, PART* pPart_New, PLATEAU* pPlateau)
{
    if (!pPart_New || !pPlayer)
    {
        return 0;
    }
    
    if (pPart_New->position_on_plateau.x != pPlayer->position_on_plateau.x || pPart_New->position_on_plateau.y != pPlayer->position_on_plateau.y)
    {
        if (Get_PathFinding(pPlayer, pPart_New, pPlateau) == 0)
        {
            printf("\nVous ne pouvez pas aller sur cette case");
            return 0;
        }
    }
    
    pPlayer->position_on_plateau = pPart_New->position_on_plateau;

    return 1;
}

void Treasure_draw (PLAYER* pPlayer, GC_SPRITE* pTresor)
{
    pTresor->gc_properties.gc_space.POSITION_X = 1535;
    pTresor->gc_properties.gc_space.POSITION_Y = 210;
    GC_SPRITE_DRAW(pTresor);

    pPlayer->sprite.gc_properties.gc_space.POSITION_X = 1300;
    pPlayer->sprite.gc_properties.gc_space.POSITION_Y = 200;
    GC_SPRITE_DRAW(&pPlayer->sprite);
}

int Player_Check_Treasure_Victory(PLAYER* pPlayer, PLATEAU* pPlateau, int nb_player)
{
    if (pPlateau->parts[pPlayer->position_on_plateau.x][pPlayer->position_on_plateau.y].treasure == pPlayer->liste_treasure[pPlayer->nb_treasure])
    {
        printf("\nTresor recupere !");
        if (pPlayer->nb_treasure < 24 / nb_player)
        {
            pPlayer->nb_treasure++;
        }
        pPlateau->parts[pPlayer->position_on_plateau.x][pPlayer->position_on_plateau.y].treasure = -1;
    }

    if ((pPlayer->nb_treasure >= 1) && (pPlayer->position_on_plateau.x == pPlayer->position_start.x) && (pPlayer->position_on_plateau.y == pPlayer->position_start.y))
    {
        return 1;
    }

    return 0;
}
