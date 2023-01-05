//
// Created by RobinK on 25/12/2022.
//

#ifndef PROJET_MAINMOUV_H
#define PROJET_MAINMOUV_H

#endif //PROJET_MAINMOUV_H

#include "fonction_t.h"

#define TextOffsetX 500     //définit la position en X du texte du menu

int x1 = 90;                // coordonnées x et y du premier joueur
int y1 = 650;

int x2 = 670;               // ... deuxième joueur
int y2 = 650;

int x3 = 90;               // ... troisième joueur
int y3 = 90;

int x4 = 670;              // ... Quatrième joueur
int y4 = 90;

int size1 = 24;            //définit les tailles de texte pour la surbrillance
int size2 = 24;
int size3 = 24;


int nbrJoueur=4; //définiti le nombre de joueurs
int JoueurPlay=1; //définit quel joueur doit jouer
int tour =1; //définit à quel tour du jeu nous sommes
int finM =0; //Permet au joueur de finir ses déplacements en appuyant sur entrée
int finP =0; //Permet au joueur de terminer ses déplacements du plateau


int SelectMenu=0; //permet de valider la sélection dans le menu


const int TableauTailleTypo[6]={32,24,32,24,24,24}; //Définit les tailles de police pour les différentes lignes du menu de démarrage
const char TableauText[][6]={"Bienvenue Dans Le Labyrinthe ! ", "Récupérez tous les trésors afin de compléter le jeu ! ", " Bonne Chance ! ", " 1- Lancer Une Nouvelle Partie ", " 2- Charger Une Partie "," 3- Crédits "}; //Définit les textes de chacunes des lignes de la page d'accueil
const int TableauTextOffsetY[6]={200,300,475,650,700,750};  //définit les positions en Y du texte du menu


void MenuDisplay(int s1, int s2, int s3);   //déclaration de la fonction permettant d'afficher le Menu


typedef struct{                             //Structure permettant de stocker les textes au complet
    GC_TEXT tableauTextes[6];
}TextMenu;