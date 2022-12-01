#include <stdlib.h>
#include <string.h>
#include <stdio.h>


int introduction(){
    printf("                               Bienvenue sur Labyrinthe. Une palpitante chasse au tr%csor dans un labyrithe en mouvement.\n\n",130);
}

int demandenbjoueur(){
    printf("Combien de joueur %ctes vous ? (Max 4)\n",136);
    }



int choixnom(int i){
    printf("\n                                                               Joueur %d choisissez un nom:",i);
}

int nomjoueurs(int nom) {
    sprintf(nom, "%s \4", nom);
}

int choixdupion(char queljoueur[100]) {
    int choixpion = 0;
    printf("\n\nIl y a 8 pions disponibles:\n");
    printf("Pion 1: \1\n");
    printf("Pion 2: \14\n");
    printf("Pion 3: \3\n");
    printf("Pion 4: \4\n");
    printf("Pion 5: \5\n");
    printf("Pion 6: \6\n");
    printf("Pion 7: \16\n");
    printf("Pion 8: \13\n");
    printf("\n\n%s choisissez votre pion.\n", queljoueur);
    scanf("%d", &choixpion);
    if (choixpion < 1 || choixpion > 8) {
        printf("S%clectionnez un chiffre entre 1 et 8.\n", 130);
        while (choixpion < 1 || choixpion > 8) {
            printf("%s choisissez un nouveau pion.\n", queljoueur);
            scanf("%d", &choixpion);
        }
    }
    switch (choixpion) {
        case 1: {
            sprintf(queljoueur, "%s \1", queljoueur);
            break;
        }
        case 2: {
            sprintf(queljoueur, "%s \14", queljoueur);
            break;
        }
        case 3: {
            sprintf(queljoueur, "%s \3", queljoueur);
            break;
        }
        case 4: {
            sprintf(queljoueur, "%s \4", queljoueur);
            break;
        }
        case 5: {
            sprintf(queljoueur, "%s \5", queljoueur);
            break;
        }
        case 6: {
            sprintf(queljoueur, "%s \6", queljoueur);
            break;
        }
        case 7: {
            sprintf(queljoueur, "%s \16", queljoueur);
            break;
        }
        case 8: {
            sprintf(queljoueur, "%s \13", queljoueur);
            break;
        }
    }
    return queljoueur;
}

int reecrituredunom(int nom,int choixpion){
    sprintf(nom,"%s %s",nom,choixpion);
}
//
// Created by Antoine on 01/12/2022.
//

#ifndef PROJET_FONCTION_H
#define PROJET_FONCTION_H

#endif //PROJET_FONCTION_H
