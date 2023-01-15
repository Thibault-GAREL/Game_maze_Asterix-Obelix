//
// Created by RobinK on 25/12/2022.
//

#ifndef PROJET_MAINMOUV_H
#define PROJET_MAINMOUV_H
#include "Gc.h"
#include "../.h/Global.h"
#include "Button.h"

#define TextOffsetX 500     //définit la position en X du texte du menu




typedef struct
{                             //Structure permettant de stocker les textes au complet
    GC_TEXT tableauTextes[6];
}TextMenu;

typedef struct
{
    GC_SPRITE Credits;
    GC_SPRITE MENU_BACKGRD;

    BUTTON Button_Menu_1;
    BUTTON Button_Menu_2;
    BUTTON Button_Menu_3;
    BUTTON Button_Escape;
    BUTTON Button_Escape_1;

    int menu_Selected;
}MENU;


void TMenuInit(TextMenu* pTextmenu);          //déclaration de la fonction permettant d'intialiser le menu
void TMenuDisplay(TextMenu* pTextMenu, int* pBACKGROUNDPATH);      //déclaration de la fonction permettant d'afficher le Menu

void Menu_Init(MENU* pMenu, GC_MANAGER* pManager);
void MENU_Draw(MENU* pMenu);
void Button_Game_Update_Event(MENU* pMenu);
void Button_exe(MENU* pMenu, GC_MANAGER* pManager);


#endif //PROJET_MAINMOUV_H