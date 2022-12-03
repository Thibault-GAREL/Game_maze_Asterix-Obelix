#include <stdio.h>
#include "fonction.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <windows.h>

int main() {
    char nomJ1[100],nomJ2[100],nomJ3[100],nomJ4[100];
    int nbjoueur=0;
    int pion1;
    int pion2;
    int pion3;
    int pion4;
    int compteur1=0;
    int compteur2=0;
    int compteur3=0;
    int compteur4=0;
    int a=0;
    int partie=1;
    introduction();
    demandenbjoueur();
    scanf("%d",&nbjoueur);
    while (nbjoueur<2 || nbjoueur>4){
        demandenbjoueur();
        scanf("%d",&nbjoueur);
    }
    for (int i=1;i<nbjoueur+1;i++){
        if(i==1){
            choixnom(i);
            scanf("%s",&nomJ1);
        }
        else if(i==2){
            choixnom(i);
            scanf("%s",&nomJ2);
            while (strcmp(nomJ2,nomJ1)==0){
                printf("\nImpossible de choisir le m%cme nom que %s.\n",136,nomJ1);
                choixnom(i);
                scanf("%s",&nomJ2);
            }
        }
        else if(i==3){
            choixnom(i);
            scanf("%s",&nomJ3);
            while ((strcmp(nomJ3,nomJ1)==0)||(strcmp(nomJ3,nomJ2)==0)){
                printf("\nImpossible de choisir le m%cme nom que %s ou %s.\n",136,nomJ1,nomJ2);
                choixnom(i);
                scanf("%s",&nomJ3);
            }
        }
        else{
            choixnom(i);
            scanf("%s",&nomJ4);
            while ((strcmp(nomJ4,nomJ1)==0)||(strcmp(nomJ4,nomJ2)==0)||(strcmp(nomJ4,nomJ3)==0)){
                printf("\nImpossible de choisir le m%cme nom que %s, %s ou %s.\n",136,nomJ1,nomJ2,nomJ3);
                choixnom(i);
                scanf("%s",&nomJ4);
            }
        }
    }
    printf("\n\nIl y a 8 pions disponibles:\n");
    for (int i = 0; i < 8; ++i) {
        printf("Pion %d : %c\n",i+1,pion[i]);
    }
    if (nbjoueur>1){
        pion1=choixdupion(nomJ1,0,0,0);
        pion2=choixdupion(nomJ2,pion1,0,0);
        if(pion1==1) {
            sprintf(nomJ1, "%s \1", nomJ1);
        }
        else if (pion1==2){
            sprintf(nomJ1, "%s \14", nomJ1);
        }
        else if(pion1==3){
            sprintf(nomJ1, "%s \3", nomJ1);
        }
        else if (pion1==4){
            sprintf(nomJ1, "%s \4", nomJ1);
        }
        else if (pion1==5){
            sprintf(nomJ1, "%s \5", nomJ1);
        }
        else if(pion1==6){
            sprintf(nomJ1, "%s \6", nomJ1);
        }
        else if(pion1==7){
            sprintf(nomJ1, "%s \16", nomJ1);
        }
        else if(pion1==8){
            sprintf(nomJ1, "%s \13", nomJ1);
        }
        if(pion2==1) {
            sprintf(nomJ2, "%s \1", nomJ2);
        }
        else if (pion2==2){
            sprintf(nomJ2, "%s \14", nomJ2);
        }
        else if(pion2==3){
            sprintf(nomJ2, "%s \3", nomJ2);
        }
        else if (pion2==4){
            sprintf(nomJ2, "%s \4", nomJ2);
        }
        else if (pion2==5){
            sprintf(nomJ2, "%s \5", nomJ2);
        }
        else if(pion2==6){
            sprintf(nomJ2, "%s \6", nomJ2);
        }
        else if(pion2==7){
            sprintf(nomJ2, "%s \16", nomJ2);
        }
        else if(pion2==8){
            sprintf(nomJ2, "%s \13", nomJ2);
        }
    }
    if (nbjoueur>2){
        pion3=choixdupion(nomJ3,pion1,pion2,0);
        if(pion3==1) {
            sprintf(nomJ3, "%s \1", nomJ3);
        }
        else if (pion3==2){
            sprintf(nomJ3, "%s \14", nomJ3);
        }
        else if(pion3==3){
            sprintf(nomJ3, "%s \3", nomJ3);
        }
        else if (pion3==4){
            sprintf(nomJ3, "%s \4", nomJ3);
        }
        else if (pion3==5){
            sprintf(nomJ3, "%s \5", nomJ3);
        }
        else if(pion3==6){
            sprintf(nomJ3, "%s \6", nomJ3);
        }
        else if(pion3==7){
            sprintf(nomJ3, "%s \16", nomJ3);
        }
        else if(pion3==8){
            sprintf(nomJ3, "%s \13", nomJ3);
        }
    }
    if (nbjoueur>3){
        pion4=choixdupion(nomJ4,pion1,pion2,pion3);
        if(pion4==1) {
            sprintf(nomJ4, "%s \1", nomJ4);
        }
        else if (pion4==2){
            sprintf(nomJ4, "%s \14", nomJ4);
        }
        else if(pion4==3){
            sprintf(nomJ4, "%s \3", nomJ4);
        }
        else if (pion4==4){
            sprintf(nomJ4, "%s \4", nomJ4);
        }
        else if (pion4==5){
            sprintf(nomJ4, "%s \5", nomJ4);
        }
        else if(pion4==6){
            sprintf(nomJ4, "%s \6", nomJ4);
        }
        else if(pion4==7){
            sprintf(nomJ4, "%s \16", nomJ4);
        }
        else if(pion4==8){
            sprintf(nomJ4, "%s \13", nomJ4);
        }
    }
    ecriturenom(nomJ1,nomJ2,nomJ3,nomJ4,nbjoueur);
    a=tirageausort(nbjoueur);
    afficherblocpermanent();
    while (partie==1){
        if (a==1){
            compteur1=1;
        }
        else if (a==2){
            compteur2=1;
        }
        else if (a==3){
            compteur3=1;
        }
        else if (a==4){
            compteur4=1;
        }
        if (compteur1==1){
            compteur1=0;
            printf("\n                                                                              C'est au tour de %s de jouer.\n",nomJ1);
            compteur2=1;
        }
        compteur2= toursuivant(compteur1,compteur2);
        if(compteur2==1){
            compteur2=0;
            printf("\n                                                                              C'est au tour de %s de jouer.\n",nomJ2);
            compteur3=1;
        }
        compteur3= toursuivant(compteur2,compteur3);
        compteur1=testquijoue(nbjoueur,3,compteur1,compteur4,compteur3);
        if(compteur3==1 && nbjoueur>2){
            compteur3=0;
            printf("\n                                                                              C'est au tour de %s de jouer.\n",nomJ3);
        }
        compteur4= toursuivant(compteur3,compteur4);
        compteur1=testquijoue(nbjoueur,4,compteur1,compteur4,compteur4);
        if(compteur4==1 && nbjoueur==4){
            compteur4=0;
            printf("\n                                                                              C'est au tour de %s de jouer.\n",nomJ4);
            compteur1=1;
        }
        compteur1= toursuivant(compteur4,compteur1);
    }
    return 0;
}