#include "../.h/Player.h"

char* players_sprite_filePath[PLAYER_MAX_COUNT] = {FILE_ACCESS ".\\Import\\Dessin_asterix_Image_Centre_Small.png", 
                            FILE_ACCESS ".\\Import\\Dessin_Idefix_Image_Small.png",
                            FILE_ACCESS ".\\Import\\Dessin_obelix_Image_Small.png", 
                            FILE_ACCESS ".\\Import\\Dessin_Panoramix_Small.png"};

char* adresse_treasure[25] = {FILE_ACCESS ".\\Import\\Dessin_bague d'émeraude.png",
                                    FILE_ACCESS ".\\Import\\Dessin_bouclier_romain.png",
                                    FILE_ACCESS ".\\Import\\Dessin_byjoux.png",
                                    FILE_ACCESS ".\\Import\\Dessin_casque.png",
                                    FILE_ACCESS ".\\Import\\Dessin_casque_romain.png",
                                    FILE_ACCESS ".\\Import\\Dessin_Chaudron.png",
                                    FILE_ACCESS ".\\Import\\Dessin_clef.png",
                                    FILE_ACCESS ".\\Import\\Dessin_coffre.png",
                                    FILE_ACCESS ".\\Import\\Dessin_couronne_de_laurier.png",
                                    FILE_ACCESS ".\\Import\\Dessin_diamand.png",
                                    FILE_ACCESS ".\\Import\\Dessin_epee.png",
                                    FILE_ACCESS ".\\Import\\Dessin_fouet.png",
                                    FILE_ACCESS ".\\Import\\Dessin_Gourde.png",
                                    FILE_ACCESS ".\\Import\\Dessin_louche.png",
                                    FILE_ACCESS ".\\Import\\Dessin_Menhir.png",
                                    FILE_ACCESS ".\\Import\\Dessin_oeil.png",
                                    FILE_ACCESS ".\\Import\\Dessin_Os.png",
                                    FILE_ACCESS ".\\Import\\Dessin_Papyrusse.png",
                                    FILE_ACCESS ".\\Import\\Dessin_Pharaon.png",
                                    FILE_ACCESS ".\\Import\\Dessin_Poisson_Frai.png",
                                    FILE_ACCESS ".\\Import\\Dessin_sac_de_piece.png",
                                    FILE_ACCESS ".\\Import\\Dessin_sanglier.png",
                                    FILE_ACCESS ".\\Import\\Dessin_Sercophage.png",
                                    FILE_ACCESS ".\\Import\\Dessin_Serpe.png"};


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


    /*GC_SPRITE treasure;
    GC_SPRITE_INIT(&treasure, adresse_treasure [0]); //
    printf("%d", pPlayer->liste_treasure[pPlayer->nb_treasure]);
    treasure.gc_properties.gc_space.POSITION_X = 1500;
    treasure.gc_properties.gc_space.POSITION_Y = 200;
    GC_SPRITE_DRAW(&treasure);

    if (pPlayer->pPart)
    {   
        //pPlayer->sprite.gc_properties.gc_space.POSITION_X = pPlayer->pPart->button.sprite.gc_properties.gc_space.POSITION_X;
        //pPlayer->sprite.gc_properties.gc_space.POSITION_Y = pPlayer->pPart->button.sprite.gc_properties.gc_space.POSITION_Y;
    }*/
    
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
			printf("\nDistance=%d", path_size);
			break;
		}
	}

	Console_Draw_Tableau(walls, "[WALLS]");
	Console_Draw_Tableau(distances, "[DISTANCES]");
	Console_Draw_Way(ways);

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

