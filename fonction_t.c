//
// Created by garel on 21/12/2022.
//

#include "fonction_t.h"

/*char adresse_tuile_fixe[50][50] = {".\\Import\\tuile_1.png",
                                   ".\\Import\\tuile_3.png",
                                   ".\\Import\\tuile_5.png",
                                   ".\\Import\\tuile_7.png",
                                   ".\\Import\\tuile_15.png",
                                   ".\\Import\\tuile_17.png",
                                   ".\\Import\\tuile_19.png",
                                   ".\\Import\\tuile_21.png",
                                   ".\\Import\\tuile_29.png",
                                   ".\\Import\\tuile_31.png",
                                   ".\\Import\\tuile_33.png",
                                   ".\\Import\\tuile_35.png",
                                   ".\\Import\\tuile_43.png",
                                   ".\\Import\\tuile_45.png",
                                   ".\\Import\\tuile_47.png",
                                   ".\\Import\\tuile_49.png"};

char adresse_tuile_mobile[50][50] = {".\\Import\\tuile_2.png",
                                     ".\\Import\\tuile_4.png",
                                     ".\\Import\\tuile_6.png",
                                     ".\\Import\\tuile_8.png",
                                     ".\\Import\\tuile_9.png",
                                     ".\\Import\\tuile_10.png",
                                     ".\\Import\\tuile_11.png",
                                     ".\\Import\\tuile_12.png",
                                     ".\\Import\\tuile_13.png",
                                     ".\\Import\\tuile_14.png",
                                     ".\\Import\\tuile_16.png",
                                     ".\\Import\\tuile_18.png",
                                     ".\\Import\\tuile_20.png",
                                     ".\\Import\\tuile_22.png",
                                     ".\\Import\\tuile_23.png",
                                     ".\\Import\\tuile_24.png",
                                     ".\\Import\\tuile_25.png",
                                     ".\\Import\\tuile_26.png",
                                     ".\\Import\\tuile_27.png",
                                     ".\\Import\\tuile_28.png",
                                     ".\\Import\\tuile_30.png",
                                     ".\\Import\\tuile_32.png",
                                     ".\\Import\\tuile_34.png",
                                     ".\\Import\\tuile_36.png",
                                     ".\\Import\\tuile_37.png",
                                     ".\\Import\\tuile_38.png",
                                     ".\\Import\\tuile_39.png",
                                     ".\\Import\\tuile_40.png",
                                     ".\\Import\\tuile_41.png",
                                     ".\\Import\\tuile_42.png",
                                     ".\\Import\\tuile_44.png",
                                     ".\\Import\\tuile_46.png",
                                     ".\\Import\\tuile_48.png",
                                     ".\\Import\\tuile_50.png"};*/

char adresse_tuile_fixe[50][50] = {"..\\Import\\tuile_1.png",
                                   "..\\Import\\tuile_3.png",
                                   "..\\Import\\tuile_5.png",
                                   "..\\Import\\tuile_7.png",
                                   "..\\Import\\tuile_15.png",
                                   "..\\Import\\tuile_17.png",
                                   "..\\Import\\tuile_19.png",
                                   "..\\Import\\tuile_21.png",
                                   "..\\Import\\tuile_29.png",
                                   "..\\Import\\tuile_31.png",
                                   "..\\Import\\tuile_33.png",
                                   "..\\Import\\tuile_35.png",
                                   "..\\Import\\tuile_43.png",
                                   "..\\Import\\tuile_45.png",
                                   "..\\Import\\tuile_47.png",
                                   "..\\Import\\tuile_49.png"
};

char adresse_tuile_mobile[50][50] = {"..\\Import\\tuile_2.png",
                                     "..\\Import\\tuile_4.png",
                                     "..\\Import\\tuile_6.png",
                                     "..\\Import\\tuile_8.png",
                                     "..\\Import\\tuile_9.png",
                                     "..\\Import\\tuile_10.png",
                                     "..\\Import\\tuile_11.png",
                                     "..\\Import\\tuile_12.png",
                                     "..\\Import\\tuile_13.png",
                                     "..\\Import\\tuile_14.png",
                                     "..\\Import\\tuile_16.png",
                                     "..\\Import\\tuile_18.png",
                                     "..\\Import\\tuile_20.png",
                                     "..\\Import\\tuile_22.png",
                                     "..\\Import\\tuile_23.png",
                                     "..\\Import\\tuile_24.png",
                                     "..\\Import\\tuile_25.png",
                                     "..\\Import\\tuile_26.png",
                                     "..\\Import\\tuile_27.png",
                                     "..\\Import\\tuile_28.png",
                                     "..\\Import\\tuile_30.png",
                                     "..\\Import\\tuile_32.png",
                                     "..\\Import\\tuile_34.png",
                                     "..\\Import\\tuile_36.png",
                                     "..\\Import\\tuile_37.png",
                                     "..\\Import\\tuile_38.png",
                                     "..\\Import\\tuile_39.png",
                                     "..\\Import\\tuile_40.png",
                                     "..\\Import\\tuile_41.png",
                                     "..\\Import\\tuile_42.png",
                                     "..\\Import\\tuile_44.png",
                                     "..\\Import\\tuile_46.png",
                                     "..\\Import\\tuile_48.png",
                                     "..\\Import\\tuile_50.png"
};

int* random_sans_remise(int tab_index[MOVABLE_PARTS])
{
    int k, j, a = 0;

    for (int i = 0; i < MOVABLE_PARTS; i++)
    {
        tab_index[i] = i;
    }

    srand(time(NULL));

    for (int i = 0; i < 50; ++i)
    {
        k = rand() % MOVABLE_PARTS;
        j = rand() % MOVABLE_PARTS;
        a = tab_index[k];
        tab_index[k] = tab_index[j];
        tab_index[j] = a;
    }

    return tab_index;
}

void initalisation_affichage_plateau(int tab_index[MOVABLE_PARTS], GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W], GC_SPRITE* const pExtra_piece)
{
    int compteur_1 = 0;
    int compteur_2 = 0;

    //Remplacer cette partie par 2*2 boucles for de pas=2 et départ 1 (pièces fixes) et 0 (pièces mobile)
    for (int h = 0; h < PLATEAU_W; ++h)
    {
        for (int w = 0; w < PLATEAU_H; ++w)
        {
            if (h % 2 == 0 && w % 2 == 0)
            {
                GC_SPRITE_INIT(&tab_plateau[h][w], adresse_tuile_fixe[compteur_1++]);
                tab_plateau[h][w].gc_properties.gc_space.POSITION_X = PART_W * w + PLATEAU_OFFSET_X;
                tab_plateau[h][w].gc_properties.gc_space.POSITION_Y = PART_H * h + PLATEAU_OFFSET_Y;
                GC_SPRITE_DRAW(&tab_plateau[h][w]);
            }
            else
            {
                GC_SPRITE_INIT(&tab_plateau[h][w], adresse_tuile_mobile[tab_index[compteur_2++]]); // mettre 1 nb random ici
                tab_plateau[h][w].gc_properties.gc_space.POSITION_X = PART_W * w + PLATEAU_OFFSET_X;
                tab_plateau[h][w].gc_properties.gc_space.POSITION_Y = PART_H * h + PLATEAU_OFFSET_Y;
                tab_plateau[h][w].gc_properties.gc_space.ROTATION_Z = (PIE / 2) * (rand() % 4); // mettre pie/2 pour l'angle -> radian
                GC_SPRITE_DRAW(&tab_plateau[h][w]);
            }
        }
    }

    GC_SPRITE_INIT(pExtra_piece, adresse_tuile_mobile[tab_index[MOVABLE_PARTS - 1]]);
    pExtra_piece->gc_properties.gc_space.POSITION_Y = PART_H * 8;
    GC_SPRITE_DRAW(pExtra_piece);
}


void decal_ligne(GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W], GC_SPRITE *pExtra_piece, int ln, bool direct_sens)
{

}

void decal_colonne(GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W], GC_SPRITE* const pExtra_piece, const int col, const bool direct_sens)
{
    GC_SPRITE buffer_part = *pExtra_piece;

    if (direct_sens)
    {
        *pExtra_piece = tab_plateau[PLATEAU_H-1][col];

        for (int y = 1; y < PLATEAU_W; y ++)
        {
            tab_plateau[PLATEAU_H-y][col] = tab_plateau[PLATEAU_H-y-1][col];
        }

        tab_plateau[0][col] = buffer_part;
    }
}

void UPDATE_Part_Position_DRAW_Plateau(GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W], GC_SPRITE* const pExtra_piece)
{
    for (int h = 0; h < PLATEAU_W; ++h)
    {
        for (int w = 0; w < PLATEAU_H; ++w)
        {
            tab_plateau[h][w].gc_properties.gc_space.POSITION_X = PART_W * w + PLATEAU_OFFSET_X;
            tab_plateau[h][w].gc_properties.gc_space.POSITION_Y = PART_H * h + PLATEAU_OFFSET_Y;
            GC_SPRITE_DRAW(&tab_plateau[h][w]);
        }
    }

    pExtra_piece->gc_properties.gc_space.POSITION_X = EXTRA_PART_POS_X;
    pExtra_piece->gc_properties.gc_space.POSITION_Y = EXTRA_PART_POS_Y;
    GC_SPRITE_DRAW(pExtra_piece);
}

void Clear_Diplay(GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W], GC_SPRITE* const pExtra_piece, GC_SPRITE tab_buttons_sprite[TAB_BUTTONS_SIDE][TAB_BUTTONS_SIDE])
{
    al_clear_to_color(al_map_rgb(0,0,0));

    //Faire une boucle 'for' lorsqu'il y aura plusieurs bouttons
    GC_SPRITE_DRAW(&tab_buttons_sprite[0][0]); 

    UPDATE_Part_Position_DRAW_Plateau(tab_plateau, pExtra_piece);
}