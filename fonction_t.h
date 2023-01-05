//
// Created by garel on 21/12/2022.
//

#ifndef MENU
#define MENU

#endif

#ifndef PROJET_FONCTION_T_H
#define PROJET_FONCTION_T_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "Gc.h"
#include "Path.h"

#define PART_H 95
#define PART_W 95
#define PLATEAU_H 7
#define PLATEAU_W 7
#define PLATEAU_OFFSET_X 95
#define PLATEAU_OFFSET_Y 95
#define EXTRA_PART_POS_X 190 +190
#define EXTRA_PART_POS_Y PART_H * 8 + PART_H + 30
#define MOVABLE_PARTS 34
#define TAB_BUTTONS_SIDE 3
#define PI 3.14


typedef struct 
{
    GC_BUTTON gc_button;
    GC_SPRITE gc_sprite;
    bool sens_direct;
} BUTTON_DECAL;

int* random_sans_remise(int tab_index[MOVABLE_PARTS]);
void initalisation_affichage_plateau(int tab_index[MOVABLE_PARTS], GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W], GC_SPRITE* pExtra_piece);
void decal_ligne(GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W], GC_SPRITE* const pExtra_piece, const int ln, bool direct_sens);
void decal_colonne(GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W], GC_SPRITE* const pExtra_piece, const int col, const bool direct_sens);
void UPDATE_Part_Position_DRAW_Plateau(GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W], GC_SPRITE* const pExtra_piece);
void Clear_Diplay();

void Init_list_button_decal(BUTTON_DECAL list_button_decal[6], GC_MANAGER* manager, bool y, bool x);
void List_button_decal_update_event(BUTTON_DECAL list_button_decal_colonne[6]);
void List_button_decal_draw(BUTTON_DECAL list_button_decal_colonne[6]);

void InitCharacter(GC_SPRITE PionSprite, int x , int y);

void New_Part_Deplacement(GC_SPRITE* pExtra_piece, GC_BUTTON* pButton_rotation_posi, GC_BUTTON* pButton_rotation_nega, BUTTON_DECAL* pList_button_decal_colonne, BUTTON_DECAL* pList_button_decal_ligne);

#endif //PROJET_FONCTION_T_H