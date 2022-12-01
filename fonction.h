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

int choixdupion(){
    int choixpion=0;
    printf("\n\nIl y a 8 pions disponibles:\n");
    printf("Pion 1: \1\n");
    printf("Pion 2: \14\n");
    printf("Pion 3: \3\n");
    printf("Pion 4: \4\n");
    printf("Pion 5: \5\n");
    printf("Pion 6: \6\n");
    printf("Pion 7: \16\n");
    printf("Pion 8: \13\n");
    printf("\n\n %s choisissez votre pion.\n");
    scanf("%d",&choixpion);
    if(choixpion<1 || choixpion>8){

    }
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
