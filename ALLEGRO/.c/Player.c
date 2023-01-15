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


    GC_SPRITE treasure;
    GC_SPRITE_INIT(&treasure, adresse_treasure [pPlayer->players[i].liste_treasure[0]]);        //pPlayer.liste_treasure[0]
    treasure.gc_properties.gc_space.POSITION_X = 1500;
    treasure.gc_properties.gc_space.POSITION_Y = 200;
    GC_SPRITE_DRAW(&treasure);

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
