//
// Created by garel on 21/12/2022.
//

#include "fonction_t.h"


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



