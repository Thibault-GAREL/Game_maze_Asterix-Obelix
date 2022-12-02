#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <math.h>


int pion[8] = {1,267,3,4,5,6,270,268};



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

int choixdupion(char queljoueur[100],int pion1,int pion2,int pion3) {
    int choixpion = 0;
    printf("\n\n%s choisissez votre pion.\n", queljoueur);
    scanf("%d", &choixpion);
    if (choixpion < 1 || choixpion > 8 || choixpion==pion1 || choixpion==pion2 || choixpion==pion3) {
        printf("S%clectionnez un chiffre entre 1 et 8.\n", 130);
        scanf("%d",&choixpion);
        while (choixpion < 1 || choixpion > 8 || choixpion==pion1 || choixpion==pion2 || choixpion==pion3) {
            printf("%s choisissez un nouveau pion.\n", queljoueur);
            scanf("%d", &choixpion);
        }
    }
    return choixpion;
}
int ecriturenom(char nom1[100],char nom2[100],char nom3[100],char nom4[100],int nbjoueur){
    if (nbjoueur>1){
        printf("                                                            Joueur 1 : %s\n",nom1);
        printf("                                                            Joueur 2 : %s\n",nom2);
    }
    if (nbjoueur>2){
        printf("                                                            Joueur 3 : %s\n",nom3);
    }
    if (nbjoueur>3){
        printf("                                                            Joueur 4 : %s\n",nom4);
    }
    printf("\n\n                                                            Pour d%cterminer qui commence, faisons un tirage au sort.\n",130);
}

int tirageausort(int nbjoueur){
    int b=0;
    if (nbjoueur==2){
        srand(time(NULL));
        int a=rand()%2+1;
        b=a;
    }
    if (nbjoueur==3){
        srand(time(NULL));
        int a=rand()%3+1;
        b=a;
    }
    if (nbjoueur==4){
        srand(time(NULL));
        int a=rand()%4+1;
        b=a;
    }
    printf("\n                                                                              C'est le Joueur %d qui commence.\n",b);
    return b;
}

int testquijoue(int nbjoueur,int numerojoueur,int compteur,int compteur4,int compteur3){
    if(nbjoueur<numerojoueur){
        compteur3=0;
        compteur4=0;
    }
    if (nbjoueur>=numerojoueur){
        compteur4=1;
    }
    else {
        compteur4=1;
    }
    return compteur4;
}

int toursuivant(int compteur1,int compteur2){
    if (compteur1==0){
        compteur2=1;
    }
    return compteur2;
}


//
// Created by Antoine on 01/12/2022.
//

#ifndef PROJET_FONCTION_H
#define PROJET_FONCTION_H

#endif //PROJET_FONCTION_H
