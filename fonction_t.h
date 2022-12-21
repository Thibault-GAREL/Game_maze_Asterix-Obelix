//
// Created by garel on 21/12/2022.
//


#ifndef PROJET_FONCTION_T_H
#define PROJET_FONCTION_T_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Gc.h"

#define PART_H 95
#define PART_W 95
#define PLATEAU_H 7
#define PLATEAU_W 7
#define PLATEAU_OFFSET_X 95
#define PLATEAU_OFFSET_Y 95
#define EXTRA_PART_POS_X 0
#define EXTRA_PART_POS_Y PART_H * 8
#define MOVABLE_PARTS 34
#define TAB_BUTTONS_SIDE 3
#define PIE 3.14

int* random_sans_remise(int tab_index[MOVABLE_PARTS]);
void initalisation_affichage_plateau(int tab_index[MOVABLE_PARTS], GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W], GC_SPRITE* pExtra_piece);
void decal_colonne(GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W], GC_SPRITE* const pExtra_piece, const int col, const bool direct_sens);
void UPDATE_Part_Position_DRAW_Plateau(GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W], GC_SPRITE* const pExtra_piece);
void Clear_Diplay(GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W], GC_SPRITE* const pExtra_piece, GC_SPRITE tab_buttons[TAB_BUTTONS_SIDE][TAB_BUTTONS_SIDE]);

#endif //PROJET_FONCTION_T_H