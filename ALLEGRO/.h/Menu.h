//
// Created by RobinK on 25/12/2022.
//

#ifndef PROJET_MAINMOUV_H
#define PROJET_MAINMOUV_H
#include "Gc.h"
#include "Global.h"

#define TextOffsetX 500     //définit la position en X du texte du menu




typedef struct{                             //Structure permettant de stocker les textes au complet
    GC_TEXT tableauTextes[6];
}TextMenu;

void MenuInit(TextMenu* pTextmenu);          //déclaration de la fonction permettant d'intialiser le menu
void MenuDisplay(TextMenu* pTextMenu, int* pBACKGROUNDPATH);      //déclaration de la fonction permettant d'afficher le Menu

#endif //PROJET_MAINMOUV_H



