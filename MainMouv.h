//
// Created by RobinK on 25/12/2022.
//

#ifndef PROJET_MAINMOUV_H
#define PROJET_MAINMOUV_H

#endif //PROJET_MAINMOUV_H

#include "fonction_t.h"

int x1 = 90; // coordonnées x et y du premier joueur
int y1 = 650;

int x2 = 670; // ... deuxième joueur
int y2 = 650;

int x3 = 90; // ... troisième joueur
int y3 = 90;

int x4 = 670; // ... Quatrième joueur
int y4 = 90;

int size1 = 24;
int size2 = 24;
int size3 = 24;


int nbrJoueur=4; //définiti le nombre de joueurs
int JoueurPlay=1; //définit quel joueur doit jouer
int tour =1; //définit à quel tour du jeu nous sommes
int finM =0; //Permet au joueur de finir ses déplacements en appuyant sur entrée
int finP =0; //Permet au joueur de terminer ses déplacements du plateau


int SelectMenu=0; //permet de valider la sélection dans le menu

int MenuDisplay(int s1, int s2, int s3){ //fonction permettant d'afficher le menu

    al_clear_to_color(al_map_rgb(0,0,0));

    char *text_out1 = "Bienvenue Dans Le Labyrinthe ! ";                                // définit les différentes lignes de la page d'accueil
    char *text_out2 = "Récupérez tous les trésors afin de compléter le jeu ! ";
    char *text_out3 = " Bonne Chance ! ";
    char *text_out4 = " 1- Lancer Une Nouvelle Partie ";
    char *text_out5 = " 2- Charger Une Partie ";
    char *text_out6 = " 3- Crédits ";                                                   //fin de la définition des lignes de la page d'accueil (sous la forme de 6 lignes différentes)
    
    GC_TEXT gc_text1;
    GC_TEXT_INIT(&gc_text1, text_out1);
    GC_TEXT_SET_FONT(&gc_text1, FONT_PATH,32);
    gc_text1.al_flag = ALLEGRO_ALIGN_CENTER;

    GC_TEXT gc_text2;
    GC_TEXT_INIT(&gc_text2, text_out2);
    GC_TEXT_SET_FONT(&gc_text1, FONT_PATH,24);
    gc_text2.al_flag = ALLEGRO_ALIGN_CENTER;

    GC_TEXT gc_text3;
    GC_TEXT_INIT(&gc_text3, text_out3);
    GC_TEXT_SET_FONT(&gc_text1, FONT_PATH,32);
    gc_text3.al_flag = ALLEGRO_ALIGN_CENTER;

    GC_TEXT gc_text4;
    GC_TEXT_INIT(&gc_text4, text_out4);
    GC_TEXT_SET_FONT(&gc_text1, FONT_PATH,24);
    gc_text4.al_flag = ALLEGRO_ALIGN_CENTER;

    GC_TEXT gc_text5;
    GC_TEXT_INIT(&gc_text5, text_out5);
    GC_TEXT_SET_FONT(&gc_text1, FONT_PATH,24);
    gc_text5.al_flag = ALLEGRO_ALIGN_CENTER;

    GC_TEXT gc_text6;
    GC_TEXT_INIT(&gc_text6, text_out6);
    GC_TEXT_SET_FONT(&gc_text1, FONT_PATH,24);
    gc_text6.al_flag = ALLEGRO_ALIGN_CENTER;

    gc_text1.gc_properties.gc_space.POSITION_X = 500;           
    gc_text1.gc_properties.gc_space.POSITION_Y = 200; //définit la position en X et Y des différentes lignes de la page d'accueil

    gc_text2.gc_properties.gc_space.POSITION_X = 500;           
    gc_text2.gc_properties.gc_space.POSITION_Y = 300; // Toutes les lignes possèdent comme point de référence leur centre

    gc_text3.gc_properties.gc_space.POSITION_X = 500;           
    gc_text3.gc_properties.gc_space.POSITION_Y = 475; //définit avec un flag dans le fichier Gc.c

    gc_text4.gc_properties.gc_space.POSITION_X = 500;           
    gc_text4.gc_properties.gc_space.POSITION_Y = 650;

    gc_text5.gc_properties.gc_space.POSITION_X = 500;           
    gc_text5.gc_properties.gc_space.POSITION_Y = 700;

    gc_text6.gc_properties.gc_space.POSITION_X = 500;           
    gc_text6.gc_properties.gc_space.POSITION_Y = 750;

    GC_TEXT_DRAW(&gc_text1);            GC_TEXT_DRAW(&gc_text2);            GC_TEXT_DRAW(&gc_text3);
    GC_TEXT_DRAW(&gc_text4);            GC_TEXT_DRAW(&gc_text5);            GC_TEXT_DRAW(&gc_text6);

    //al_rest(0.2);
    printf("\nTEST");
    al_flip_display();
}