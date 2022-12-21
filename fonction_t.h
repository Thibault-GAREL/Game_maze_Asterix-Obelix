//
// Created by garel on 21/12/2022.
//


#ifndef PROJET_FONCTION_T_H
#define PROJET_FONCTION_T_H
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Gc.h"

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


void random_sans_remise (int tab_index [50]);

void initalisation_affichage_plateau (int tab_index [50], GC_SPRITE tab_plateau [7] [7]);

#endif //PROJET_FONCTION_T_H

#ifndef CHEMIN
#define CHEMIN


#endif
