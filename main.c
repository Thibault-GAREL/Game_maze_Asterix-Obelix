#include <stdio.h>
#include "fonction.h"
#include <stdlib.h>
#include <string.h>


int main() {
    char nomJ1[100],nomJ2[100],nomJ3[100],nomJ4[100];
    int nbjoueur=0;
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
        }
        else if(i==3){
            choixnom(i);
            scanf("%s",&nomJ3);
        }
        else{
            choixnom(i);
            scanf("%s",&nomJ4);
        }
    }
    if (nbjoueur==1){
        nomJ1[100]=choixdupion(nomJ1);
    }
    if (nbjoueur==2){
        nomJ1[100]=choixdupion(nomJ1);
        nomJ2[100]=choixdupion(nomJ2);
    }
    if (nbjoueur==3){
        nomJ1[100]=choixdupion(nomJ1);
        nomJ2[100]=choixdupion(nomJ2);
        nomJ3[100]=choixdupion(nomJ3);
    }
    if (nbjoueur==4){
        nomJ1[100]=choixdupion(nomJ1);
        nomJ2[100]=choixdupion(nomJ2);
        nomJ3[100]=choixdupion(nomJ3);
        nomJ4[100]=choixdupion(nomJ4);
    }
    return 0;
}