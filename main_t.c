#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Gc.h"

int main () {
    int compteur_1 = 0;
    int compteur_2 = 0;

    bool bouton_1_horizontale_descendant = false;
    bool bouton_2_horizontale_descendant = false;
    bool bouton_3_horizontale_descendant = false;

    bool bouton_1_horizontale_montant = false;
    bool bouton_2_horizontale_montant = false;
    bool bouton_3_horizontale_montant = false;

    srand (time(NULL));

    char adresse_tuile_fixe [50] [50] = {"..\\Import\\tuile_1.png",
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

    char adresse_tuile_mobile [50] [50] = {"..\\Import\\tuile_2.png",
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

    if (!GC_INIT_ALLEGRO())
    {
        return -1;
    }


    ALLEGRO_DISPLAY* display;
    if ((display = al_create_display(1000, 1080)) == NULL)
    {
        printf("<ERROR> Impossible to create diplay");
        return -1;
    }
    GC_SPRITE tab_plateau [7] [7] = {0};

    int k, j, a =0;  int tab_index [50] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33};
    for (int i = 0; i < 50; ++i) {
        k=rand()%34;
        j=rand()%34;
        a = tab_index [k];
        tab_index [k]=tab_index[j];
        tab_index[j] = a;
    }
    for (int i = 0; i < 34; ++i) {
        printf("%d, \n", tab_index [i]);
    }

    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (i%2 == 0 && j%2 == 0){
                GC_SPRITE_INIT(&tab_plateau[i][j], adresse_tuile_fixe[compteur_1]);
                tab_plateau[i][j].gc_properties.gc_space.POSITION_X = 95 * j;
                tab_plateau[i][j].gc_properties.gc_space.POSITION_Y = 95 * i;
                GC_SPRITE_DRAW(tab_plateau[i][j]);
                ++compteur_1;
            }
            else{
                GC_SPRITE_INIT(&tab_plateau[i][j], adresse_tuile_mobile[tab_index [compteur_2]]);  // mettre 1 nb random ici
                tab_plateau[i][j].gc_properties.gc_space.POSITION_X = 95 * j;
                tab_plateau[i][j].gc_properties.gc_space.POSITION_Y = 95 * i;
                tab_plateau[i][j].gc_properties.gc_space.ROTATION_Z = rand()%4*90; //mettre 90 degrée pour l'angle
                GC_SPRITE_DRAW(tab_plateau  [i][j]);
                ++compteur_2;
            }
        }
    }

    //if (/*bouton 1 horizontale dessandant*/){
        /*GC_SPRITE_INIT(&tab_plateau[i][j], adresse_tuile_fixe[compteur_1]);  // sans initialisation ==> économe

        tab_plateau[i][j].gc_properties.gc_space.POSITION_X = 95 * j;
        tab_plateau[i][j].gc_properties.gc_space.POSITION_Y = 95 * i;
        GC_SPRITE_DRAW(tab_plateau[i][j]);*/
    //}
    //if (/*bouton 2 horizontale dessandant*/){}
    //if (/*bouton 3 horizontale dessandant*/){}
    //if (/*bouton 1 horizontale montant*/){}
    //if (/*bouton 2 horizontale montant*/){}
    //if (/*bouton 3 horizontale montant*/){}
    //if (/*bouton 1 verticale dessandant*/){}
    //if (/*bouton 2 verticale dessandant*/){}
    //if (/*bouton 3 vericale dessandant*/){}
    //if (/*bouton 1 verticale montant*/){}
    //if (/*bouton 2 verticale montant*/){}
    //if (/*bouton 3 vericale montant*/){}

    for (;;) {
        al_flip_display();   // mettre à jour : à mettre le + possible à jour
    }

    al_rest(100);
    al_destroy_display(display);  // détruire à la fin

    return 0;
}

/*char adresse_tuile [50] [50] = {"..\\Import\\tuile_1.png",
                                    "..\\Import\\tuile_2.png",
                                    "..\\Import\\tuile_3.png",
                                    "..\\Import\\tuile_4.png",
                                    "..\\Import\\tuile_5.png",
                                    "..\\Import\\tuile_6.png",
                                    "..\\Import\\tuile_7.png",
                                    "..\\Import\\tuile_8.png",
                                    "..\\Import\\tuile_9.png",
                                    "..\\Import\\tuile_10.png",
                                    "..\\Import\\tuile_11.png",
                                    "..\\Import\\tuile_12.png",
                                    "..\\Import\\tuile_13.png",
                                    "..\\Import\\tuile_14.png",
                                    "..\\Import\\tuile_15.png",
                                    "..\\Import\\tuile_16.png",
                                    "..\\Import\\tuile_17.png",
                                    "..\\Import\\tuile_18.png",
                                    "..\\Import\\tuile_19.png",
                                    "..\\Import\\tuile_20.png",
                                    "..\\Import\\tuile_21.png",
                                    "..\\Import\\tuile_22.png",
                                    "..\\Import\\tuile_23.png",
                                    "..\\Import\\tuile_24.png",
                                    "..\\Import\\tuile_25.png",
                                    "..\\Import\\tuile_26.png",
                                    "..\\Import\\tuile_27.png",
                                    "..\\Import\\tuile_28.png",
                                    "..\\Import\\tuile_29.png",
                                    "..\\Import\\tuile_30.png",
                                    "..\\Import\\tuile_31.png",
                                    "..\\Import\\tuile_32.png",
                                    "..\\Import\\tuile_33.png",
                                    "..\\Import\\tuile_34.png",
                                    "..\\Import\\tuile_35.png",
                                    "..\\Import\\tuile_36.png",
                                    "..\\Import\\tuile_37.png",
                                    "..\\Import\\tuile_38.png",
                                    "..\\Import\\tuile_39.png",
                                    "..\\Import\\tuile_40.png",
                                    "..\\Import\\tuile_41.png",
                                    "..\\Import\\tuile_42.png",
                                    "..\\Import\\tuile_43.png",
                                    "..\\Import\\tuile_44.png",
                                    "..\\Import\\tuile_45.png",
                                    "..\\Import\\tuile_46.png",
                                    "..\\Import\\tuile_47.png",
                                    "..\\Import\\tuile_48.png",
                                    "..\\Import\\tuile_49.png",
                                    "..\\Import\\tuile_50.png"
    };*/
/*char adresse_tuile_1 [50] ="..\Import\tuile_1.png";
char adresse_tuile_2 [50] ="..\Import\tuile_2.png";

printf ("%s %s", adresse_tuile_1, adresse_tuile_2);
*/

//GC_SPRITE tab_plateau_mobile [7] [7] = {0};
/*for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 4; ++j) {
        GC_SPRITE_INIT(&tab_plateau_fixe[i][j], adresse_tuile[compteur_1]);
        tab_plateau_fixe[i][j].gc_properties.gc_space.POSITION_X = 95 * j;
        tab_plateau_fixe[i][j].gc_properties.gc_space.POSITION_Y = 95 * i;
        GC_SPRITE_DRAW(tab_plateau_fixe[i][j]);
        ++compteur_1;
    }
}*/

/*
    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            GC_SPRITE_INIT(&tab_plateau [i][j], adresse_tuile [compteur]);
            tab_plateau [i] [j].gc_properties.gc_space.POSITION_X = 95 *j;
            tab_plateau [i] [j].gc_properties.gc_space.POSITION_Y = 95 *i;
            GC_SPRITE_DRAW(tab_plateau [i][j]);
            ++compteur;
        }
    }*/
/*GC_SPRITE Image;
GC_SPRITE_INIT(&Image, "D:\\Ecole\\travail-ECE\\Cours\\Alogo\\projet-2022-2023-labyrinthe-u-2\\Import\\tuile_1.png");  //mettre un autre emplacement
Image.gc_properties.gc_space.POSITION_X = 300;
GC_SPRITE_DRAW(Image);*/