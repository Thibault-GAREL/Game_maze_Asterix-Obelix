#include <stdio.h>
#include "fonction.h"
#include <stdlib.h>
#include <string.h>


int main() {
    char nomJ1[100],nomJ2[100],nomJ3[100],nomJ4[100];
    int nbjoueur=0;
    int pion1;
    int pion2;
    int pion3;
    int pion4;
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
    if (nbjoueur==2){
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
        printf("%s",nomJ1);
    }
    if (nbjoueur==3){
        pion1=choixdupion(nomJ1,0,0,0);
        pion2=choixdupion(nomJ2,pion1,0,0);
        pion3=choixdupion(nomJ3,pion1,pion2,0);
    }
    if (nbjoueur==4){
        pion1=choixdupion(nomJ1,0,0,0);
        pion2=choixdupion(nomJ2,pion1,0,0);
        pion3=choixdupion(nomJ3,pion1,pion2,0);
        pion4=choixdupion(nomJ4,pion1,pion2,pion3);
    }

    return 0;
}