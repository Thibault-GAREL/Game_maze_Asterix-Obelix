//
// Created by garel on 21/12/2022.
//

#include "fonction_t.h"

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

void random_sans_remise (int tab_index [50]){
    int k, j, a = 0;

    srand(time(NULL));

    for (int i = 0; i < 50; ++i) {
        k = rand() % 34;
        j = rand() % 34;
        a = tab_index[k];
        tab_index[k] = tab_index[j];
        tab_index[j] = a;
    }
}

void initalisation_affichage_plateau (int tab_index [50], GC_SPRITE tab_plateau [7] [7]) {
    int compteur_1 = 0;
    int compteur_2 = 0;

    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (i % 2 == 0 && j % 2 == 0) {
                GC_SPRITE_INIT(&tab_plateau[i][j], adresse_tuile_fixe[compteur_1]);
                tab_plateau[i][j].gc_properties.gc_space.POSITION_X = 95 * j + 95;
                tab_plateau[i][j].gc_properties.gc_space.POSITION_Y = 95 * i + 95;
                GC_SPRITE_DRAW(&tab_plateau[i][j]);
                ++compteur_1;
            } else {
                GC_SPRITE_INIT(&tab_plateau[i][j],adresse_tuile_mobile[tab_index[compteur_2]]);  // mettre 1 nb random ici
                tab_plateau[i][j].gc_properties.gc_space.POSITION_X = 95 * j + 95;
                tab_plateau[i][j].gc_properties.gc_space.POSITION_Y = 95 * i + 95;
                tab_plateau[i][j].gc_properties.gc_space.ROTATION_Z = (3.14 / 2) * (rand() % 4); //mettre 90 degrée pour l'angle
                GC_SPRITE_DRAW(&tab_plateau[i][j]);
                ++compteur_2;
            }
        }
    }
}



