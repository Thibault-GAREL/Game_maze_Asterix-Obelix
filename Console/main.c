#include <stdio.h>
#include "fichier.h"
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
int main() {
    char nomJ1[100],nomJ2[100],nomJ3[100],nomJ4[100];
    int nbjoueur=0;
    int pion1=0;
    int pion2=0;
    int pion3=0;
    int pion4=0;
    int compteur1=0;
    int compteur2=0;
    int compteur3=0;
    int compteur4=0;int compteursave=0;
    int compteurJ1=0;int compteurJ2=0;int compteurJ3=0;int compteurJ4=0;
    int a=0;int r=0;double t=0;
    int partie=1;
    double c,d,e,f,g,h;int y=0;
    int posJ1,posJ2,posJ3,posJ4;
    int solu1=0;int solu2=0;int solu3=0;int solu4=0;
    struct position{
        int col,lig;
    };
    struct position j1;
    struct position j2;
    struct position j3;
    struct position j4;
    int tresor[24]={0};
    tresor[0]=497;tresor[1]=488;tresor[2]=464;tresor[3]=463;tresor[4]=446;tresor[5]=440;tresor[6]=411;tresor[7]=383;tresor[8]=320;tresor[9]=299;tresor[10]=298;tresor[11]=294;tresor[12]=292;tresor[13]=291;tresor[14]=285;tresor[15]=428;tresor[16]=277;tresor[17]=225;tresor[18]=189;tresor[19]=157;tresor[20]=143;tresor[21]=37;tresor[22]=31;tresor[23]=459;
    double compteurtresor1=0;
    double compteurtresor2=0;
    introduction();
    y=menu();
    int ablkabk;
    if(y==2){
        ablkabk=2;
        goto skip_step;
    }
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
            sprintf(nomJ1, "%s \41", nomJ1);
            pion1=33;
        }
        else if (pion1==2){
            sprintf(nomJ1, "%s A", nomJ1);
            pion1=65;
        }
        else if(pion1==3){
            sprintf(nomJ1, "%s \x7D", nomJ1);
            pion1=125;
        }
        else if (pion1==4){
            sprintf(nomJ1, "%s \xED", nomJ1);
            pion1=493;
        }
        else if (pion1==5){
            sprintf(nomJ1, "%s \xD1", nomJ1);
            pion1=465;
        }
        else if(pion1==6){
            sprintf(nomJ1, "%s \xD3", nomJ1);
            pion1=211;
        }
        else if(pion1==7){
            sprintf(nomJ1, "%s B", nomJ1);
            pion1=322;
        }
        else if(pion1==8){
            sprintf(nomJ1, "%s \xE3", nomJ1);
            pion1=227;
        }
        if(pion2==1) {
            sprintf(nomJ2, "%s \41", nomJ2);
            pion2=33;
        }
        else if (pion2==2){
            sprintf(nomJ2, "%s A", nomJ2);
            pion2=65;
        }
        else if(pion2==3){
            sprintf(nomJ2, "%s \x7D", nomJ2);
            pion2=125;
        }
        else if (pion2==4){
            sprintf(nomJ2, "%s \xED", nomJ2);
            pion2=493;
        }
        else if (pion2==5){
            sprintf(nomJ2, "%s \xD1", nomJ2);
            pion2=465;
        }
        else if(pion2==6){
            sprintf(nomJ2, "%s \xD3", nomJ2);
            pion2=211;
        }
        else if(pion2==7){
            sprintf(nomJ2, "%s B", nomJ2);
            pion2=322;
        }
        else if(pion2==8){
            sprintf(nomJ2, "%s \xE3", nomJ2);
            pion2=227;
        }
    }
    if (nbjoueur>2){
        pion3=choixdupion(nomJ3,pion1,pion2,0);
        if(pion3==1) {
            sprintf(nomJ3, "%s \41", nomJ3);
            pion3=33;
        }
        else if (pion3==2){
            sprintf(nomJ3, "%s A", nomJ3);
            pion3=65;
        }
        else if(pion3==3){
            sprintf(nomJ3, "%s \x7D", nomJ3);
            pion3=125;
        }
        else if (pion3==4){
            sprintf(nomJ3, "%s \xED", nomJ3);
            pion3=493;
        }
        else if (pion3==5){
            sprintf(nomJ3, "%s \xD1", nomJ3);
            pion3=465;
        }
        else if(pion3==6){
            sprintf(nomJ3, "%s \xD3", nomJ3);
            pion3=211;
        }
        else if(pion3==7){
            sprintf(nomJ3, "%s B", nomJ3);
            pion3=322;
        }
        else if(pion3==8){
            sprintf(nomJ3, "%s \xE3", nomJ3);
            pion3=227;
        }
    }
    if (nbjoueur>3){
        pion4=choixdupion(nomJ4,pion1,pion2,pion3);
        if(pion4==1) {
            sprintf(nomJ4, "%s \41", nomJ4);
            pion4=33;
        }
        else if (pion4==2){
            sprintf(nomJ4, "%s A", nomJ4);
            pion4=65;
        }
        else if(pion4==3){
            sprintf(nomJ4, "%s \x7D", nomJ4);
            pion4=125;
        }
        else if (pion4==4){
            sprintf(nomJ4, "%s \xED", nomJ4);
            pion4=493;
        }
        else if (pion4==5){
            sprintf(nomJ4, "%s \xD1", nomJ4);
            pion4=465;
        }
        else if(pion4==6){
            sprintf(nomJ4, "%s \xD3", nomJ4);
            pion4=211;
        }
        else if(pion4==7){
            sprintf(nomJ4, "%s B", nomJ4);
            pion4=322;
        }
        else if(pion4==8){
            sprintf(nomJ4, "%s \xE3", nomJ4);
            pion4=227;
        }
    }
    ecriturenom(nomJ1,nomJ2,nomJ3,nomJ4,nbjoueur);
    distribctre(nbjoueur);
    srand(time(NULL));
    for (int i=0;i<20;i++){
        int x=rand()%12+12;
        int y=rand()%12;
        int c=tresor[x];
        tresor[x]=tresor[y];
        tresor[y]=c;
    }int o=0;
    o=tresor[0];
    tresor[0]=tresor[11];
    tresor[11]=o;
    int tresJ1[12]={0};
    int tresJ2[12]={0};
    int tresJ3[12]={0};
    int tresJ4[12]={0};
    if (nbjoueur==2){for (int i=0;i<12;i++){tresJ1[i]=tresor[i];tresJ2[i]=tresor[i+12];}}
    else if (nbjoueur==3){for(int i=0;i<8;i++){tresJ1[i]=tresor[i];tresJ2[i]=tresor[i+8];tresJ3[i]=tresor[i+16];}}
    else if (nbjoueur==4){for (int i=0;i<6;i++){tresJ1[i]=tresor[i];tresJ2[i]=tresor[i+6];tresJ3[i]=tresor[i+12];tresJ4[i]=tresor[i+18];}}
    int *j=&tresJ1[0];
    int *m=&tresJ2[0];
    int *q=&tresJ3[0];
    int *v=&tresJ4[0];
    revealtres1(nbjoueur,nomJ1,*j,nomJ2,*m,nomJ3,*q,nomJ4,*v);
    a=tirageausort(nbjoueur);
    srand(time(NULL));
    double tab[35]={0};
    for (int i=1;i<7;i++){
        tab[i]=rand()%4+1;
    }
    for (int i=7;i<23;i++){
        tab[i]=rand()%4+7;
    }
    for (int i=23;i<35;i++){
        tab[i]=rand()%2+5;
    }
    for (int i=0;i<100;i++){
        int a = rand()%34+1;
        int b=rand()%34+1;
        float c=tab[a];
        tab[a]=tab[b];
        tab[b]=c;
    }
    for (int i=1;i<35;i++){
        if (tab[i]==1 || tab[i]==2 || tab[i]==3 || tab[i]==4){
            compteurtresor1=compteurtresor1+1;
            tab[i]=tab[i]+(compteurtresor1/10);
        }
        else if (tab[i]==7 || tab[i]==8 || tab[i]==9 || tab[i]==10){
            compteurtresor2=compteurtresor2+1;
            if (compteurtresor2>0 && compteurtresor2<7){
                tab[i]=tab[i]+(compteurtresor2/10);
            }
            else if (compteurtresor2>6){
                tab[i]=tab[i];
            }
        }
    }
    j1.col=j3.col=j1.lig=j2.lig=1;
    j4.col=j4.lig=j2.col=j3.lig=7;
    posJ1= convert(j1.lig,j1.col);
    posJ2= convert(j2.lig,j2.col);
    posJ3= convert(j3.lig,j3.col);
    posJ4= convert(j4.lig,j4.col);
    test(pion1,pion2,pion3,pion4,tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7],tab[8],tab[9],tab[10],tab[11],tab[12],tab[13],tab[14],tab[15],tab[16],tab[17],tab[18],tab[19],tab[20],tab[21],tab[22],tab[23],tab[24],tab[25],tab[26],tab[27],tab[28],tab[29],tab[30],tab[31],tab[32],tab[33],posJ1,posJ2,posJ3,posJ4);
    sleep(2);
    printpiece34(tab[34],posJ1,posJ2,posJ3,posJ4,pion1,pion2,pion3,pion4);
    sleep(4);
    printf("\n\n\n");
    ecripos(nbjoueur,nomJ1,nomJ2,nomJ3,nomJ4,j1.lig,j1.col,j2.lig,j2.col,j3.lig,j3.col,j4.lig,j4.col);color(0,0);
    int aa=0;int bb=0;int cc=0;int dd=0;
    double nvtab[49]={0};
    while (compteurJ1!=24/nbjoueur || compteurJ2!=24/nbjoueur || compteurJ3!=24/nbjoueur || compteurJ4!=24/nbjoueur){
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
            r=demandmvt();t=demanderinclinaison(tab[34]);
            if (r==1){tab[34]=tab[10];c=tab[4];d=tab[5];e=tab[6];f=tab[7];g=tab[8];h=tab[9];tab[4]=t;tab[5]=c;tab[6]=d;tab[7]=e;tab[8]=f;tab[9]=g;tab[10]=h;}
            else if (r==2){tab[34]=tab[20];c=tab[14];d=tab[15];e=tab[16];f=tab[17];g=tab[18];h=tab[19];tab[14]=t;tab[15]=c;tab[16]=d;tab[17]=e;tab[18]=f;tab[19]=g;tab[20]=h;}
            else if (r==3){tab[34]=tab[30];c=tab[24];d=tab[25];e=tab[26];f=tab[27];g=tab[28];h=tab[29];tab[24]=t;tab[25]=c;tab[26]=d;tab[27]=e;tab[28]=f;tab[29]=g;tab[30]=h;}
            else if (r==4){tab[34]=tab[4];c=tab[10];d=tab[9];e=tab[8];f=tab[7];g=tab[6];h=tab[5];tab[10]=t;tab[9]=c;tab[8]=d;tab[7]=e;tab[6]=f;tab[5]=g;tab[4]=h;}
            else if (r==5){tab[34]=tab[14];c=tab[20];d=tab[19];e=tab[18];f=tab[17];g=tab[16];h=tab[15];tab[20]=t;tab[19]=c;tab[18]=d;tab[17]=e;tab[16]=f;tab[15]=g;tab[14]=h;}
            else if (r==6){tab[34]=tab[24];c=tab[30];d=tab[29];e=tab[28];f=tab[27];g=tab[26];h=tab[25];tab[30]=t;tab[29]=c;tab[28]=d;tab[27]=e;tab[26]=f;tab[25]=g;tab[24]=h;}
            else if (r==7){tab[34]=tab[31];c=tab[1];d=tab[5];e=tab[11];f=tab[15];g=tab[21];h=tab[25];tab[1]=t;tab[5]=c;tab[11]=d;tab[15]=e;tab[21]=f;tab[25]=g;tab[31]=h;}
            else if (r==8){tab[34]=tab[32];c=tab[2];d=tab[7];e=tab[12];f=tab[17];g=tab[22];h=tab[27];tab[2]=t;tab[7]=c;tab[12]=d;tab[17]=e;tab[22]=f;tab[27]=g;tab[32]=h;}
            else if (r==9){tab[34]=tab[33];c=tab[3];d=tab[9];e=tab[13];f=tab[19];g=tab[23];h=tab[29];tab[3]=t;tab[9]=c;tab[13]=d;tab[19]=e;tab[23]=f;tab[29]=g;tab[33]=h;}
            else if (r==10){tab[34]=tab[1];c=tab[31];d=tab[25];e=tab[21];f=tab[15];g=tab[11];h=tab[5];tab[31]=t;tab[25]=c;tab[21]=d;tab[15]=e;tab[11]=f;tab[5]=g;tab[1]=h;}
            else if (r==11){tab[34]=tab[2];c=tab[32];d=tab[27];e=tab[22];f=tab[17];g=tab[12];h=tab[7];tab[32]=t;tab[27]=c;tab[22]=d;tab[17]=e;tab[12]=f;tab[7]=g;tab[2]=h;}
            else if (r==12){tab[34]=tab[3];c=tab[33];d=tab[29];e=tab[23];f=tab[19];g=tab[13];h=tab[9];tab[33]=t;tab[29]=c;tab[23]=d;tab[19]=e;tab[13]=f;tab[9]=g;tab[3]=h;}
            if (posJ1==17 || posJ1==37 || posJ1==57 || posJ1==9 || posJ1==29 || posJ1==49 || posJ1==71 || posJ1==73 || posJ1==75 || posJ1==-9 || posJ1==-7 || posJ1==-5){posJ1= redonnerpos(posJ1,r);}
            else {posJ1= nvpos(posJ1,r);}
            if (posJ2==17 || posJ2==37 || posJ2==57 || posJ2==9 || posJ2==29 || posJ2==49 || posJ2==71 || posJ2==73 || posJ2==75 || posJ2==-9 || posJ2==-7 || posJ2==-5){posJ2= redonnerpos(posJ2,r);}
            else {posJ2= nvpos(posJ2,r);}
            if (posJ3==17 || posJ3==37 || posJ3==57 || posJ3==9 || posJ3==29 || posJ3==49 || posJ3==71 || posJ3==73 || posJ3==75 || posJ3==-9 || posJ3==-7 || posJ3==-5){posJ3= redonnerpos(posJ3,r);}
            else {posJ3=nvpos(posJ3,r);}
            if (posJ4==17 || posJ4==37 || posJ4==57 || posJ4==9 || posJ4==29 || posJ4==49 || posJ4==71 || posJ4==73 || posJ4==75 || posJ4==-9 || posJ4==-7 || posJ4==-5){posJ4= redonnerpos(posJ4,r);}
            else {posJ4= nvpos(posJ4,r);}
            test(pion1,pion2,pion3,pion4,tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7],tab[8],tab[9],tab[10],tab[11],tab[12],tab[13],tab[14],tab[15],tab[16],tab[17],tab[18],tab[19],tab[20],tab[21],tab[22],tab[23],tab[24],tab[25],tab[26],tab[27],tab[28],tab[29],tab[30],tab[31],tab[32],tab[33],posJ1,posJ2,posJ3,posJ4);
            printpiece34(tab[34],posJ1,posJ2,posJ3,posJ4,pion1,pion2,pion3,pion4);
            nvtab[0]=9;nvtab[1]=tab[1];nvtab[2]=1;nvtab[3]=tab[2];nvtab[4]=1;nvtab[5]=tab[3];nvtab[6]=10;nvtab[7]=tab[4];nvtab[8]=tab[5];nvtab[9]=tab[6];nvtab[10]=tab[7];nvtab[11]=tab[8];nvtab[11]=tab[8];nvtab[12]=tab[9];nvtab[13]=tab[10];nvtab[14]=3;nvtab[15]=tab[11];nvtab[16]=3;nvtab[17]=tab[12];nvtab[18]=1;nvtab[19]=tab[13];nvtab[20]=4;nvtab[21]=tab[14];nvtab[22]=tab[15];nvtab[23]=tab[16];nvtab[24]=tab[17];nvtab[25]=tab[18];nvtab[26]=tab[19];nvtab[27]=tab[20];nvtab[28]=3;nvtab[29]=tab[21];nvtab[30]=2;nvtab[31]=tab[22];nvtab[32]=1;nvtab[33]=tab[23];nvtab[34]=4;nvtab[35]=tab[24];nvtab[36]=tab[25];nvtab[37]=tab[26];nvtab[38]=tab[27];nvtab[39]=tab[28];nvtab[40]=tab[29];nvtab[41]=tab[30];nvtab[42]=7;nvtab[43]=tab[31];nvtab[44]=2;nvtab[45]=tab[32];nvtab[46]=2;nvtab[47]=tab[33];nvtab[48]=8;
            int xxx=0;xxx=posJ1;double aaaa=0;int bbb=0;bbb=xxx;
            bbb=change(xxx);aaaa=nvtab[bbb];
            posJ1=direction(nomJ1,j1.lig,j1.col);
            double ppp=0;ppp=nvtab[posJ1];
            solu1=fonctiontest(posJ1,xxx,aaaa,ppp,nvtab[0], nvtab[1], nvtab[2], nvtab[3], nvtab[4], nvtab[5], nvtab[6], nvtab[7], nvtab[8], nvtab[9], nvtab[10], nvtab[11], nvtab[12], nvtab[13], nvtab[14], nvtab[15], nvtab[16], nvtab[17], nvtab[18], nvtab[19], nvtab[20], nvtab[21], nvtab[22], nvtab[23], nvtab[24], nvtab[25], nvtab[26], nvtab[27], nvtab[28], nvtab[29], nvtab[30], nvtab[31], nvtab[32], nvtab[33], nvtab[34], nvtab[35], nvtab[36], nvtab[37], nvtab[38], nvtab[39], nvtab[40], nvtab[41], nvtab[42], nvtab[43], nvtab[44], nvtab[45], nvtab[46], nvtab[47],nvtab[48]);
            verification(solu1);
            while(solu1==0){
                posJ1=direction(nomJ1,j1.lig,j1.col);
                solu1=fonctiontest(posJ1,xxx,aaaa,ppp,nvtab[0], nvtab[1], nvtab[2], nvtab[3], nvtab[4], nvtab[5], nvtab[6], nvtab[7], nvtab[8], nvtab[9], nvtab[10], nvtab[11], nvtab[12], nvtab[13], nvtab[14], nvtab[15], nvtab[16], nvtab[17], nvtab[18], nvtab[19], nvtab[20], nvtab[21], nvtab[22], nvtab[23], nvtab[24], nvtab[25], nvtab[26], nvtab[27], nvtab[28], nvtab[29], nvtab[30], nvtab[31], nvtab[32], nvtab[33], nvtab[34], nvtab[35], nvtab[36], nvtab[37], nvtab[38], nvtab[39], nvtab[40], nvtab[41], nvtab[42], nvtab[43], nvtab[44], nvtab[45], nvtab[46], nvtab[47],nvtab[48]);
                verification(solu1);
            }
            test(pion1,pion2,pion3,pion4,tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7],tab[8],tab[9],tab[10],tab[11],tab[12],tab[13],tab[14],tab[15],tab[16],tab[17],tab[18],tab[19],tab[20],tab[21],tab[22],tab[23],tab[24],tab[25],tab[26],tab[27],tab[28],tab[29],tab[30],tab[31],tab[32],tab[33],posJ1,posJ2,posJ3,posJ4);printf("\n\n");
            printpiece34(tab[34],posJ1,posJ2,posJ3,posJ4,pion1,pion2,pion3,pion4);printf("\n\n\n");
            aa= avancetresor(nbjoueur,nomJ1,compteurJ1,tresJ1[0],tresJ1[1],tresJ1[2],tresJ1[3],tresJ1[4],tresJ1[5],tresJ1[6],tresJ1[7],tresJ1[8],tresJ1[9],tresJ1[10],tresJ1[11]);
            compteurJ1=compteurJ1+aa;
            testfin(compteurJ1,nbjoueur,nomJ1);
            j1.lig=lignejoueur(posJ1);j1.col=colonne(posJ1);
            color(15,0);ecripos(nbjoueur,nomJ1,nomJ2,nomJ3,nomJ4,j1.lig,j1.col,j2.lig,j2.col,j3.lig,j3.col,j4.lig,j4.col);color(0,0);
        }
        compteur2= toursuivant(compteur1,compteur2);
        if(compteur2==1){
            compteur2=0;
            printf("\n                                                                              C'est au tour de %s de jouer.\n",nomJ2);
            compteur3=1;
            r=demandmvt();t=demanderinclinaison(tab[34]);
            if (r==1){tab[34]=tab[10];c=tab[4];d=tab[5];e=tab[6];f=tab[7];g=tab[8];h=tab[9];tab[4]=t;tab[5]=c;tab[6]=d;tab[7]=e;tab[8]=f;tab[9]=g;tab[10]=h;}
            else if (r==2){tab[34]=tab[20];c=tab[14];d=tab[15];e=tab[16];f=tab[17];g=tab[18];h=tab[19];tab[14]=t;tab[15]=c;tab[16]=d;tab[17]=e;tab[18]=f;tab[19]=g;tab[20]=h;}
            else if (r==3){tab[34]=tab[30];c=tab[24];d=tab[25];e=tab[26];f=tab[27];g=tab[28];h=tab[29];tab[24]=t;tab[25]=c;tab[26]=d;tab[27]=e;tab[28]=f;tab[29]=g;tab[30]=h;}
            else if (r==4){tab[34]=tab[4];c=tab[10];d=tab[9];e=tab[8];f=tab[7];g=tab[6];h=tab[5];tab[10]=t;tab[9]=c;tab[8]=d;tab[7]=e;tab[6]=f;tab[5]=g;tab[4]=h;}
            else if (r==5){tab[34]=tab[14];c=tab[20];d=tab[19];e=tab[18];f=tab[17];g=tab[16];h=tab[15];tab[20]=t;tab[19]=c;tab[18]=d;tab[17]=e;tab[16]=f;tab[15]=g;tab[14]=h;}
            else if (r==6){tab[34]=tab[24];c=tab[30];d=tab[29];e=tab[28];f=tab[27];g=tab[26];h=tab[25];tab[30]=t;tab[29]=c;tab[28]=d;tab[27]=e;tab[26]=f;tab[25]=g;tab[24]=h;}
            else if (r==7){tab[34]=tab[31];c=tab[1];d=tab[5];e=tab[11];f=tab[15];g=tab[21];h=tab[25];tab[1]=t;tab[5]=c;tab[11]=d;tab[15]=e;tab[21]=f;tab[25]=g;tab[31]=h;}
            else if (r==8){tab[34]=tab[32];c=tab[2];d=tab[7];e=tab[12];f=tab[17];g=tab[22];h=tab[27];tab[2]=t;tab[7]=c;tab[12]=d;tab[17]=e;tab[22]=f;tab[27]=g;tab[32]=h;}
            else if (r==9){tab[34]=tab[33];c=tab[3];d=tab[9];e=tab[13];f=tab[19];g=tab[23];h=tab[29];tab[3]=t;tab[9]=c;tab[13]=d;tab[19]=e;tab[23]=f;tab[29]=g;tab[33]=h;}
            else if (r==10){tab[34]=tab[1];c=tab[31];d=tab[25];e=tab[21];f=tab[15];g=tab[11];h=tab[5];tab[31]=t;tab[25]=c;tab[21]=d;tab[15]=e;tab[11]=f;tab[5]=g;tab[1]=h;}
            else if (r==11){tab[34]=tab[2];c=tab[32];d=tab[27];e=tab[22];f=tab[17];g=tab[12];h=tab[7];tab[32]=t;tab[27]=c;tab[22]=d;tab[17]=e;tab[12]=f;tab[7]=g;tab[2]=h;}
            else if (r==12){tab[34]=tab[3];c=tab[33];d=tab[29];e=tab[23];f=tab[19];g=tab[13];h=tab[9];tab[33]=t;tab[29]=c;tab[23]=d;tab[19]=e;tab[13]=f;tab[9]=g;tab[3]=h;}
            if (posJ1==17 || posJ1==37 || posJ1==57 || posJ1==9 || posJ1==29 || posJ1==49 || posJ1==71 || posJ1==73 || posJ1==75 || posJ1==-9 || posJ1==-7 || posJ1==-5){posJ1= redonnerpos(posJ1,r);}
            else {posJ1= nvpos(posJ1,r);}
            if (posJ2==17 || posJ2==37 || posJ2==57 || posJ2==9 || posJ2==29 || posJ2==49 || posJ2==71 || posJ2==73 || posJ2==75 || posJ2==-9 || posJ2==-7 || posJ2==-5){posJ2= redonnerpos(posJ2,r);}
            else {posJ2= nvpos(posJ2,r);}
            if (posJ3==17 || posJ3==37 || posJ3==57 || posJ3==9 || posJ3==29 || posJ3==49 || posJ3==71 || posJ3==73 || posJ3==75 || posJ3==-9 || posJ3==-7 || posJ3==-5){posJ3= redonnerpos(posJ3,r);}
            else {posJ3=nvpos(posJ3,r);}
            if (posJ4==17 || posJ4==37 || posJ4==57 || posJ4==9 || posJ4==29 || posJ4==49 || posJ4==71 || posJ4==73 || posJ4==75 || posJ4==-9 || posJ4==-7 || posJ4==-5){posJ4= redonnerpos(posJ4,r);}
            else {posJ4= nvpos(posJ4,r);}
            test(pion1,pion2,pion3,pion4,tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7],tab[8],tab[9],tab[10],tab[11],tab[12],tab[13],tab[14],tab[15],tab[16],tab[17],tab[18],tab[19],tab[20],tab[21],tab[22],tab[23],tab[24],tab[25],tab[26],tab[27],tab[28],tab[29],tab[30],tab[31],tab[32],tab[33],posJ1,posJ2,posJ3,posJ4);
            printpiece34(tab[34],posJ1,posJ2,posJ3,posJ4,pion1,pion2,pion3,pion4);
            nvtab[0]=9;nvtab[1]=tab[1];nvtab[2]=1;nvtab[3]=tab[2];nvtab[4]=1;nvtab[5]=tab[3];nvtab[6]=10;nvtab[7]=tab[4];nvtab[8]=tab[5];nvtab[9]=tab[6];nvtab[10]=tab[7];nvtab[11]=tab[8];nvtab[11]=tab[8];nvtab[12]=tab[9];nvtab[13]=tab[10];nvtab[14]=3;nvtab[15]=tab[11];nvtab[16]=3;nvtab[17]=tab[12];nvtab[18]=1;nvtab[19]=tab[13];nvtab[20]=4;nvtab[21]=tab[14];nvtab[22]=tab[15];nvtab[23]=tab[16];nvtab[24]=tab[17];nvtab[25]=tab[18];nvtab[26]=tab[19];nvtab[27]=tab[20];nvtab[28]=3;nvtab[29]=tab[21];nvtab[30]=2;nvtab[31]=tab[22];nvtab[32]=1;nvtab[33]=tab[23];nvtab[34]=4;nvtab[35]=tab[24];nvtab[36]=tab[25];nvtab[37]=tab[26];nvtab[38]=tab[27];nvtab[39]=tab[28];nvtab[40]=tab[29];nvtab[41]=tab[30];nvtab[42]=7;nvtab[43]=tab[31];nvtab[44]=2;nvtab[45]=tab[32];nvtab[46]=2;nvtab[47]=tab[33];nvtab[48]=8;
            int yyyy=0;yyyy=posJ2;double mmmm=0;int dddd=0;dddd=yyyy;
            dddd=change(yyyy);mmmm=nvtab[dddd];
            posJ2=direction(nomJ2,j2.lig,j2.col);
            double cccc=0;cccc=nvtab[posJ2];
            solu2=fonctiontest(posJ2,yyyy,mmmm,cccc,nvtab[0], nvtab[1], nvtab[2], nvtab[3], nvtab[4], nvtab[5], nvtab[6], nvtab[7], nvtab[8], nvtab[9], nvtab[10], nvtab[11], nvtab[12], nvtab[13], nvtab[14], nvtab[15], nvtab[16], nvtab[17], nvtab[18], nvtab[19], nvtab[20], nvtab[21], nvtab[22], nvtab[23], nvtab[24], nvtab[25], nvtab[26], nvtab[27], nvtab[28], nvtab[29], nvtab[30], nvtab[31], nvtab[32], nvtab[33], nvtab[34], nvtab[35], nvtab[36], nvtab[37], nvtab[38], nvtab[39], nvtab[40], nvtab[41], nvtab[42], nvtab[43], nvtab[44], nvtab[45], nvtab[46], nvtab[47],nvtab[48]);
            verification(solu2);
            while(solu2==0){
                posJ2=direction(nomJ2,j2.lig,j2.col);
                solu2=fonctiontest(posJ2,yyyy,mmmm,cccc,nvtab[0], nvtab[1], nvtab[2], nvtab[3], nvtab[4], nvtab[5], nvtab[6], nvtab[7], nvtab[8], nvtab[9], nvtab[10], nvtab[11], nvtab[12], nvtab[13], nvtab[14], nvtab[15], nvtab[16], nvtab[17], nvtab[18], nvtab[19], nvtab[20], nvtab[21], nvtab[22], nvtab[23], nvtab[24], nvtab[25], nvtab[26], nvtab[27], nvtab[28], nvtab[29], nvtab[30], nvtab[31], nvtab[32], nvtab[33], nvtab[34], nvtab[35], nvtab[36], nvtab[37], nvtab[38], nvtab[39], nvtab[40], nvtab[41], nvtab[42], nvtab[43], nvtab[44], nvtab[45], nvtab[46], nvtab[47],nvtab[48]);
                verification(solu2);
            }
            test(pion1,pion2,pion3,pion4,tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7],tab[8],tab[9],tab[10],tab[11],tab[12],tab[13],tab[14],tab[15],tab[16],tab[17],tab[18],tab[19],tab[20],tab[21],tab[22],tab[23],tab[24],tab[25],tab[26],tab[27],tab[28],tab[29],tab[30],tab[31],tab[32],tab[33],posJ1,posJ2,posJ3,posJ4);printf("\n\n");
            printpiece34(tab[34],posJ1,posJ2,posJ3,posJ4,pion1,pion2,pion3,pion4);printf("\n\n\n");
            bb= avancetresor(nbjoueur,nomJ2,compteurJ2,tresJ2[0],tresJ2[1],tresJ2[2],tresJ2[3],tresJ2[4],tresJ2[5],tresJ2[6],tresJ2[7],tresJ2[8],tresJ2[9],tresJ2[10],tresJ2[11]);
            compteurJ2=compteurJ2+bb;
            testfin(compteurJ2,nbjoueur,nomJ2);
            j2.lig= lignejoueur(posJ2);j2.col= colonne(posJ2);
            color(15,0);ecripos(nbjoueur,nomJ1,nomJ2,nomJ3,nomJ4,j1.lig,j1.col,j2.lig,j2.col,j3.lig,j3.col,j4.lig,j4.col);color(0,0);
        }
        compteur3= toursuivant(compteur2,compteur3);
        compteur1=testquijoue(nbjoueur,3,compteur1,compteur4,compteur3);
        if(compteur3==1 && nbjoueur>2){
            compteur3=0;
            printf("\n                                                                              C'est au tour de %s de jouer.\n",nomJ3);
            r=demandmvt();t=demanderinclinaison(tab[34]);
            if (r==1){tab[34]=tab[10];c=tab[4];d=tab[5];e=tab[6];f=tab[7];g=tab[8];h=tab[9];tab[4]=t;tab[5]=c;tab[6]=d;tab[7]=e;tab[8]=f;tab[9]=g;tab[10]=h;}
            else if (r==2){tab[34]=tab[20];c=tab[14];d=tab[15];e=tab[16];f=tab[17];g=tab[18];h=tab[19];tab[14]=t;tab[15]=c;tab[16]=d;tab[17]=e;tab[18]=f;tab[19]=g;tab[20]=h;}
            else if (r==3){tab[34]=tab[30];c=tab[24];d=tab[25];e=tab[26];f=tab[27];g=tab[28];h=tab[29];tab[24]=t;tab[25]=c;tab[26]=d;tab[27]=e;tab[28]=f;tab[29]=g;tab[30]=h;}
            else if (r==4){tab[34]=tab[4];c=tab[10];d=tab[9];e=tab[8];f=tab[7];g=tab[6];h=tab[5];tab[10]=t;tab[9]=c;tab[8]=d;tab[7]=e;tab[6]=f;tab[5]=g;tab[4]=h;}
            else if (r==5){tab[34]=tab[14];c=tab[20];d=tab[19];e=tab[18];f=tab[17];g=tab[16];h=tab[15];tab[20]=t;tab[19]=c;tab[18]=d;tab[17]=e;tab[16]=f;tab[15]=g;tab[14]=h;}
            else if (r==6){tab[34]=tab[24];c=tab[30];d=tab[29];e=tab[28];f=tab[27];g=tab[26];h=tab[25];tab[30]=t;tab[29]=c;tab[28]=d;tab[27]=e;tab[26]=f;tab[25]=g;tab[24]=h;}
            else if (r==7){tab[34]=tab[31];c=tab[1];d=tab[5];e=tab[11];f=tab[15];g=tab[21];h=tab[25];tab[1]=t;tab[5]=c;tab[11]=d;tab[15]=e;tab[21]=f;tab[25]=g;tab[31]=h;}
            else if (r==8){tab[34]=tab[32];c=tab[2];d=tab[7];e=tab[12];f=tab[17];g=tab[22];h=tab[27];tab[2]=t;tab[7]=c;tab[12]=d;tab[17]=e;tab[22]=f;tab[27]=g;tab[32]=h;}
            else if (r==9){tab[34]=tab[33];c=tab[3];d=tab[9];e=tab[13];f=tab[19];g=tab[23];h=tab[29];tab[3]=t;tab[9]=c;tab[13]=d;tab[19]=e;tab[23]=f;tab[29]=g;tab[33]=h;}
            else if (r==10){tab[34]=tab[1];c=tab[31];d=tab[25];e=tab[21];f=tab[15];g=tab[11];h=tab[5];tab[31]=t;tab[25]=c;tab[21]=d;tab[15]=e;tab[11]=f;tab[5]=g;tab[1]=h;}
            else if (r==11){tab[34]=tab[2];c=tab[32];d=tab[27];e=tab[22];f=tab[17];g=tab[12];h=tab[7];tab[32]=t;tab[27]=c;tab[22]=d;tab[17]=e;tab[12]=f;tab[7]=g;tab[2]=h;}
            else if (r==12){tab[34]=tab[3];c=tab[33];d=tab[29];e=tab[23];f=tab[19];g=tab[13];h=tab[9];tab[33]=t;tab[29]=c;tab[23]=d;tab[19]=e;tab[13]=f;tab[9]=g;tab[3]=h;}
            if (posJ1==17 || posJ1==37 || posJ1==57 || posJ1==9 || posJ1==29 || posJ1==49 || posJ1==71 || posJ1==73 || posJ1==75 || posJ1==-9 || posJ1==-7 || posJ1==-5){posJ1= redonnerpos(posJ1,r);}
            else {posJ1= nvpos(posJ1,r);}
            if (posJ2==17 || posJ2==37 || posJ2==57 || posJ2==9 || posJ2==29 || posJ2==49 || posJ2==71 || posJ2==73 || posJ2==75 || posJ2==-9 || posJ2==-7 || posJ2==-5){posJ2= redonnerpos(posJ2,r);}
            else {posJ2= nvpos(posJ2,r);}
            if (posJ3==17 || posJ3==37 || posJ3==57 || posJ3==9 || posJ3==29 || posJ3==49 || posJ3==71 || posJ3==73 || posJ3==75 || posJ3==-9 || posJ3==-7 || posJ3==-5){posJ3= redonnerpos(posJ3,r);}
            else {posJ3=nvpos(posJ3,r);}
            if (posJ4==17 || posJ4==37 || posJ4==57 || posJ4==9 || posJ4==29 || posJ4==49 || posJ4==71 || posJ4==73 || posJ4==75 || posJ4==-9 || posJ4==-7 || posJ4==-5){posJ4= redonnerpos(posJ4,r);}
            else {posJ4= nvpos(posJ4,r);}
            test(pion1,pion2,pion3,pion4,tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7],tab[8],tab[9],tab[10],tab[11],tab[12],tab[13],tab[14],tab[15],tab[16],tab[17],tab[18],tab[19],tab[20],tab[21],tab[22],tab[23],tab[24],tab[25],tab[26],tab[27],tab[28],tab[29],tab[30],tab[31],tab[32],tab[33],posJ1,posJ2,posJ3,posJ4);
            printpiece34(tab[34],posJ1,posJ2,posJ3,posJ4,pion1,pion2,pion3,pion4);
            nvtab[0]=9;nvtab[1]=tab[1];nvtab[2]=1;nvtab[3]=tab[2];nvtab[4]=1;nvtab[5]=tab[3];nvtab[6]=10;nvtab[7]=tab[4];nvtab[8]=tab[5];nvtab[9]=tab[6];nvtab[10]=tab[7];nvtab[11]=tab[8];nvtab[11]=tab[8];nvtab[12]=tab[9];nvtab[13]=tab[10];nvtab[14]=3;nvtab[15]=tab[11];nvtab[16]=3;nvtab[17]=tab[12];nvtab[18]=1;nvtab[19]=tab[13];nvtab[20]=4;nvtab[21]=tab[14];nvtab[22]=tab[15];nvtab[23]=tab[16];nvtab[24]=tab[17];nvtab[25]=tab[18];nvtab[26]=tab[19];nvtab[27]=tab[20];nvtab[28]=3;nvtab[29]=tab[21];nvtab[30]=2;nvtab[31]=tab[22];nvtab[32]=1;nvtab[33]=tab[23];nvtab[34]=4;nvtab[35]=tab[24];nvtab[36]=tab[25];nvtab[37]=tab[26];nvtab[38]=tab[27];nvtab[39]=tab[28];nvtab[40]=tab[29];nvtab[41]=tab[30];nvtab[42]=7;nvtab[43]=tab[31];nvtab[44]=2;nvtab[45]=tab[32];nvtab[46]=2;nvtab[47]=tab[33];nvtab[48]=8;
            int lllll=0;lllll=posJ3;double vvvvv=0;int kkkkk=0;kkkkk=lllll;
            kkkkk=change(lllll);vvvvv=nvtab[kkkkk];
            posJ3=direction(nomJ3,j3.lig,j3.col);
            double rrrrr=0;rrrrr=nvtab[posJ3];
            solu3=fonctiontest(posJ3,lllll,vvvvv,rrrrr,nvtab[0], nvtab[1], nvtab[2], nvtab[3], nvtab[4], nvtab[5], nvtab[6], nvtab[7], nvtab[8], nvtab[9], nvtab[10], nvtab[11], nvtab[12], nvtab[13], nvtab[14], nvtab[15], nvtab[16], nvtab[17], nvtab[18], nvtab[19], nvtab[20], nvtab[21], nvtab[22], nvtab[23], nvtab[24], nvtab[25], nvtab[26], nvtab[27], nvtab[28], nvtab[29], nvtab[30], nvtab[31], nvtab[32], nvtab[33], nvtab[34], nvtab[35], nvtab[36], nvtab[37], nvtab[38], nvtab[39], nvtab[40], nvtab[41], nvtab[42], nvtab[43], nvtab[44], nvtab[45], nvtab[46], nvtab[47],nvtab[48]);
            verification(solu3);
            while(solu3==0){
                posJ3=direction(nomJ3,j3.lig,j3.col);
                solu3=fonctiontest(posJ3,lllll,vvvvv,rrrrr,nvtab[0], nvtab[1], nvtab[2], nvtab[3], nvtab[4], nvtab[5], nvtab[6], nvtab[7], nvtab[8], nvtab[9], nvtab[10], nvtab[11], nvtab[12], nvtab[13], nvtab[14], nvtab[15], nvtab[16], nvtab[17], nvtab[18], nvtab[19], nvtab[20], nvtab[21], nvtab[22], nvtab[23], nvtab[24], nvtab[25], nvtab[26], nvtab[27], nvtab[28], nvtab[29], nvtab[30], nvtab[31], nvtab[32], nvtab[33], nvtab[34], nvtab[35], nvtab[36], nvtab[37], nvtab[38], nvtab[39], nvtab[40], nvtab[41], nvtab[42], nvtab[43], nvtab[44], nvtab[45], nvtab[46], nvtab[47],nvtab[48]);
                verification(solu3);
            }
            test(pion1,pion2,pion3,pion4,tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7],tab[8],tab[9],tab[10],tab[11],tab[12],tab[13],tab[14],tab[15],tab[16],tab[17],tab[18],tab[19],tab[20],tab[21],tab[22],tab[23],tab[24],tab[25],tab[26],tab[27],tab[28],tab[29],tab[30],tab[31],tab[32],tab[33],posJ1,posJ2,posJ3,posJ4);printf("\n\n");
            printpiece34(tab[34],posJ1,posJ2,posJ3,posJ4,pion1,pion2,pion3,pion4);printf("\n\n\n");
            cc= avancetresor(nbjoueur,nomJ3,compteurJ3,tresJ3[0],tresJ3[1],tresJ3[2],tresJ3[3],tresJ3[4],tresJ3[5],tresJ3[6],tresJ3[7],tresJ3[8],tresJ3[9],tresJ3[10],tresJ3[11]);
            compteurJ3=compteurJ3+cc;
            testfin(compteurJ3,nbjoueur,nomJ3);
            j3.lig=lignejoueur(posJ3);j3.col= colonne(posJ3);
            color(15,0);ecripos(nbjoueur,nomJ1,nomJ2,nomJ3,nomJ4,j1.lig,j1.col,j2.lig,j2.col,j3.lig,j3.col,j4.lig,j4.col);color(0,0);
        }
        compteur4= toursuivant(compteur3,compteur4);
        compteur1=testquijoue(nbjoueur,4,compteur1,compteur4,compteur4);
        if(compteur4==1 && nbjoueur==4){
            compteur4=0;
            printf("\n                                                                              C'est au tour de %s de jouer.\n",nomJ4);
            compteur1=1;
            r=demandmvt();t=demanderinclinaison(tab[34]);
            if (r==1){tab[34]=tab[10];c=tab[4];d=tab[5];e=tab[6];f=tab[7];g=tab[8];h=tab[9];tab[4]=t;tab[5]=c;tab[6]=d;tab[7]=e;tab[8]=f;tab[9]=g;tab[10]=h;}
            else if (r==2){tab[34]=tab[20];c=tab[14];d=tab[15];e=tab[16];f=tab[17];g=tab[18];h=tab[19];tab[14]=t;tab[15]=c;tab[16]=d;tab[17]=e;tab[18]=f;tab[19]=g;tab[20]=h;}
            else if (r==3){tab[34]=tab[30];c=tab[24];d=tab[25];e=tab[26];f=tab[27];g=tab[28];h=tab[29];tab[24]=t;tab[25]=c;tab[26]=d;tab[27]=e;tab[28]=f;tab[29]=g;tab[30]=h;}
            else if (r==4){tab[34]=tab[4];c=tab[10];d=tab[9];e=tab[8];f=tab[7];g=tab[6];h=tab[5];tab[10]=t;tab[9]=c;tab[8]=d;tab[7]=e;tab[6]=f;tab[5]=g;tab[4]=h;}
            else if (r==5){tab[34]=tab[14];c=tab[20];d=tab[19];e=tab[18];f=tab[17];g=tab[16];h=tab[15];tab[20]=t;tab[19]=c;tab[18]=d;tab[17]=e;tab[16]=f;tab[15]=g;tab[14]=h;}
            else if (r==6){tab[34]=tab[24];c=tab[30];d=tab[29];e=tab[28];f=tab[27];g=tab[26];h=tab[25];tab[30]=t;tab[29]=c;tab[28]=d;tab[27]=e;tab[26]=f;tab[25]=g;tab[24]=h;}
            else if (r==7){tab[34]=tab[31];c=tab[1];d=tab[5];e=tab[11];f=tab[15];g=tab[21];h=tab[25];tab[1]=t;tab[5]=c;tab[11]=d;tab[15]=e;tab[21]=f;tab[25]=g;tab[31]=h;}
            else if (r==8){tab[34]=tab[32];c=tab[2];d=tab[7];e=tab[12];f=tab[17];g=tab[22];h=tab[27];tab[2]=t;tab[7]=c;tab[12]=d;tab[17]=e;tab[22]=f;tab[27]=g;tab[32]=h;}
            else if (r==9){tab[34]=tab[33];c=tab[3];d=tab[9];e=tab[13];f=tab[19];g=tab[23];h=tab[29];tab[3]=t;tab[9]=c;tab[13]=d;tab[19]=e;tab[23]=f;tab[29]=g;tab[33]=h;}
            else if (r==10){tab[34]=tab[1];c=tab[31];d=tab[25];e=tab[21];f=tab[15];g=tab[11];h=tab[5];tab[31]=t;tab[25]=c;tab[21]=d;tab[15]=e;tab[11]=f;tab[5]=g;tab[1]=h;}
            else if (r==11){tab[34]=tab[2];c=tab[32];d=tab[27];e=tab[22];f=tab[17];g=tab[12];h=tab[7];tab[32]=t;tab[27]=c;tab[22]=d;tab[17]=e;tab[12]=f;tab[7]=g;tab[2]=h;}
            else if (r==12){tab[34]=tab[3];c=tab[33];d=tab[29];e=tab[23];f=tab[19];g=tab[13];h=tab[9];tab[33]=t;tab[29]=c;tab[23]=d;tab[19]=e;tab[13]=f;tab[9]=g;tab[3]=h;}
            if (posJ1==17 || posJ1==37 || posJ1==57 || posJ1==9 || posJ1==29 || posJ1==49 || posJ1==71 || posJ1==73 || posJ1==75 || posJ1==-9 || posJ1==-7 || posJ1==-5){posJ1= redonnerpos(posJ1,r);}
            else {posJ1= nvpos(posJ1,r);}
            if (posJ2==17 || posJ2==37 || posJ2==57 || posJ2==9 || posJ2==29 || posJ2==49 || posJ2==71 || posJ2==73 || posJ2==75 || posJ2==-9 || posJ2==-7 || posJ2==-5){posJ2= redonnerpos(posJ2,r);}
            else {posJ2= nvpos(posJ2,r);}
            if (posJ3==17 || posJ3==37 || posJ3==57 || posJ3==9 || posJ3==29 || posJ3==49 || posJ3==71 || posJ3==73 || posJ3==75 || posJ3==-9 || posJ3==-7 || posJ3==-5){posJ3= redonnerpos(posJ3,r);}
            else {posJ3=nvpos(posJ3,r);}
            if (posJ4==17 || posJ4==37 || posJ4==57 || posJ4==9 || posJ4==29 || posJ4==49 || posJ4==71 || posJ4==73 || posJ4==75 || posJ4==-9 || posJ4==-7 || posJ4==-5){posJ4= redonnerpos(posJ4,r);}
            else {posJ4= nvpos(posJ4,r);}
            test(pion1,pion2,pion3,pion4,tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7],tab[8],tab[9],tab[10],tab[11],tab[12],tab[13],tab[14],tab[15],tab[16],tab[17],tab[18],tab[19],tab[20],tab[21],tab[22],tab[23],tab[24],tab[25],tab[26],tab[27],tab[28],tab[29],tab[30],tab[31],tab[32],tab[33],posJ1,posJ2,posJ3,posJ4);
            printpiece34(tab[34],posJ1,posJ2,posJ3,posJ4,pion1,pion2,pion3,pion4);
            nvtab[0]=9;nvtab[1]=tab[1];nvtab[2]=1;nvtab[3]=tab[2];nvtab[4]=1;nvtab[5]=tab[3];nvtab[6]=10;nvtab[7]=tab[4];nvtab[8]=tab[5];nvtab[9]=tab[6];nvtab[10]=tab[7];nvtab[11]=tab[8];nvtab[11]=tab[8];nvtab[12]=tab[9];nvtab[13]=tab[10];nvtab[14]=3;nvtab[15]=tab[11];nvtab[16]=3;nvtab[17]=tab[12];nvtab[18]=1;nvtab[19]=tab[13];nvtab[20]=4;nvtab[21]=tab[14];nvtab[22]=tab[15];nvtab[23]=tab[16];nvtab[24]=tab[17];nvtab[25]=tab[18];nvtab[26]=tab[19];nvtab[27]=tab[20];nvtab[28]=3;nvtab[29]=tab[21];nvtab[30]=2;nvtab[31]=tab[22];nvtab[32]=1;nvtab[33]=tab[23];nvtab[34]=4;nvtab[35]=tab[24];nvtab[36]=tab[25];nvtab[37]=tab[26];nvtab[38]=tab[27];nvtab[39]=tab[28];nvtab[40]=tab[29];nvtab[41]=tab[30];nvtab[42]=7;nvtab[43]=tab[31];nvtab[44]=2;nvtab[45]=tab[32];nvtab[46]=2;nvtab[47]=tab[33];nvtab[48]=8;
            int gggggg=0;gggggg=posJ4;double hhhhhh=0;int qqqqqq=0;qqqqqq=gggggg;
            qqqqqq=change(gggggg);hhhhhh=nvtab[qqqqqq];
            posJ4=direction(nomJ4,j4.lig,j4.col);
            double ssssss=0;ssssss=nvtab[posJ4];
            solu4=fonctiontest(posJ4,gggggg,hhhhhh,ssssss,nvtab[0], nvtab[1], nvtab[2], nvtab[3], nvtab[4], nvtab[5], nvtab[6], nvtab[7], nvtab[8], nvtab[9], nvtab[10], nvtab[11], nvtab[12], nvtab[13], nvtab[14], nvtab[15], nvtab[16], nvtab[17], nvtab[18], nvtab[19], nvtab[20], nvtab[21], nvtab[22], nvtab[23], nvtab[24], nvtab[25], nvtab[26], nvtab[27], nvtab[28], nvtab[29], nvtab[30], nvtab[31], nvtab[32], nvtab[33], nvtab[34], nvtab[35], nvtab[36], nvtab[37], nvtab[38], nvtab[39], nvtab[40], nvtab[41], nvtab[42], nvtab[43], nvtab[44], nvtab[45], nvtab[46], nvtab[47],nvtab[48]);
            verification(solu4);
            while(solu4==0){
                posJ4=direction(nomJ4,j4.lig,j4.col);
                solu4=fonctiontest(posJ4,gggggg,hhhhhh,ssssss,nvtab[0], nvtab[1], nvtab[2], nvtab[3], nvtab[4], nvtab[5], nvtab[6], nvtab[7], nvtab[8], nvtab[9], nvtab[10], nvtab[11], nvtab[12], nvtab[13], nvtab[14], nvtab[15], nvtab[16], nvtab[17], nvtab[18], nvtab[19], nvtab[20], nvtab[21], nvtab[22], nvtab[23], nvtab[24], nvtab[25], nvtab[26], nvtab[27], nvtab[28], nvtab[29], nvtab[30], nvtab[31], nvtab[32], nvtab[33], nvtab[34], nvtab[35], nvtab[36], nvtab[37], nvtab[38], nvtab[39], nvtab[40], nvtab[41], nvtab[42], nvtab[43], nvtab[44], nvtab[45], nvtab[46], nvtab[47],nvtab[48]);
                verification(solu4);
            }
            test(pion1,pion2,pion3,pion4,tab[1],tab[2],tab[3],tab[4],tab[5],tab[6],tab[7],tab[8],tab[9],tab[10],tab[11],tab[12],tab[13],tab[14],tab[15],tab[16],tab[17],tab[18],tab[19],tab[20],tab[21],tab[22],tab[23],tab[24],tab[25],tab[26],tab[27],tab[28],tab[29],tab[30],tab[31],tab[32],tab[33],posJ1,posJ2,posJ3,posJ4);printf("\n\n");
            printpiece34(tab[34],posJ1,posJ2,posJ3,posJ4,pion1,pion2,pion3,pion4);printf("\n\n\n");
            dd= avancetresor(nbjoueur,nomJ4,compteurJ4,tresJ4[0],tresJ4[1],tresJ4[2],tresJ4[3],tresJ4[4],tresJ4[5],tresJ4[6],tresJ4[7],tresJ4[8],tresJ4[9],tresJ4[10],tresJ4[11]);
            compteurJ4=compteurJ4+dd;
            testfin(compteurJ4,nbjoueur,nomJ4);
            j4.lig=lignejoueur(posJ4);j4.col= colonne(posJ4);
            color(15,0);ecripos(nbjoueur,nomJ1,nomJ2,nomJ3,nomJ4,j1.lig,j1.col,j2.lig,j2.col,j3.lig,j3.col,j4.lig,j4.col);color(0,0);
        }
        skip_step:
        compteur1= toursuivant(compteur4,compteur1);
        if (ablkabk==2){
            FILE *fichier;
            fichier = NULL;
            fichier = fopen("C:\\Users\\Antoine\\Documents\\sauvegarde.txt","r");
            fscanf(fichier, "%d\n%d\n%d\n%d\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%lf\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%s\n%s\n%s\n%s", &pion1, &pion2, &pion3, &pion4, &tab[0], &tab[1], &tab[2], &tab[3], &tab[4], &tab[5], &tab[6], &tab[7], &tab[8], &tab[9], &tab[10], &tab[11], &tab[12], &tab[13], &tab[14], &tab[15], &tab[16], &tab[17], &tab[18], &tab[19], &tab[20], &tab[21], &tab[22], &tab[23], &tab[24], &tab[25], &tab[26], &tab[27], &tab[28], &tab[29], &tab[30], &tab[31], &tab[32], &tab[33], &tab[34], &nbjoueur, &aa, &bb, &cc, &dd, &compteur1, &compteur2, &compteur3, &compteur4, &compteurJ1, &compteurJ2, &compteurJ3, &compteurJ4,&tresJ1[0],&tresJ1[1],&tresJ1[2],&tresJ1[3],&tresJ1[4],&tresJ1[5],&tresJ1[6],&tresJ1[7],&tresJ1[8],&tresJ1[9],&tresJ1[10],&tresJ1[11],&tresJ2[0],&tresJ2[1],&tresJ2[2],&tresJ2[3],&tresJ2[4],&tresJ2[5],&tresJ2[6],&tresJ2[7],&tresJ2[8],&tresJ2[9],&tresJ2[10],&tresJ2[11],&tresJ3[0],&tresJ3[1],&tresJ3[2],&tresJ3[3],&tresJ3[4],&tresJ3[5],&tresJ3[6],&tresJ3[7],&tresJ3[8],&tresJ3[9],&tresJ3[10],&tresJ3[11],&tresJ4[0],&tresJ4[1],&tresJ4[2],&tresJ4[3],&tresJ4[4],&tresJ4[5],&tresJ4[6],&tresJ4[7],&tresJ4[8],&tresJ4[9],&tresJ4[10],&tresJ4[11],&posJ1,&posJ2,&posJ3,&posJ4,nomJ1,nomJ2,nomJ3,nomJ4);
            fclose(fichier);
            fichier=NULL;
            printf("%d\n%d\n%d\n%d\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%2f\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%s\n%s\n%s\n%s", pion1, pion2, pion3, pion4, tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11], tab[12], tab[13], tab[14], tab[15], tab[16], tab[17], tab[18], tab[19], tab[20], tab[21], tab[22], tab[23], tab[24], tab[25], tab[26], tab[27], tab[28], tab[29], tab[30], tab[31], tab[32], tab[33], tab[34], nbjoueur, aa, bb, cc, dd, compteur1, compteur2, compteur3, compteur4, compteurJ1, compteurJ2, compteurJ3, compteurJ4,tresJ1[0],tresJ1[1],tresJ1[2],tresJ1[3],tresJ1[4],tresJ1[5],tresJ1[6],tresJ1[7],tresJ1[8],tresJ1[9],tresJ1[10],tresJ1[11],tresJ2[0],tresJ2[1],tresJ2[2],tresJ2[3],tresJ2[4],tresJ2[5],tresJ2[6],tresJ2[7],tresJ2[8],tresJ2[9],tresJ2[10],tresJ2[11],tresJ3[0],tresJ3[1],tresJ3[2],tresJ3[3],tresJ3[4],tresJ3[5],tresJ3[6],tresJ3[7],tresJ3[8],tresJ3[9],tresJ3[10],tresJ3[11],tresJ4[0],tresJ4[1],tresJ4[2],tresJ4[3],tresJ4[4],tresJ4[5],tresJ4[6],tresJ4[7],tresJ4[8],tresJ4[9],tresJ4[10],tresJ4[11],posJ1,posJ2,posJ3,posJ4,nomJ1,nomJ2,nomJ3,nomJ4);
        }
        FILE *fichier;
        fichier = NULL;
        fichier = fopen("C:\\Users\\Antoine\\Documents\\sauvegarde.txt", "w");
        fprintf(fichier,"%d\n%d\n%d\n%d\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%f\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%s\n%s\n%s\n%s", pion1, pion2, pion3, pion4, tab[0], tab[1], tab[2], tab[3], tab[4], tab[5], tab[6], tab[7], tab[8], tab[9], tab[10], tab[11], tab[12], tab[13], tab[14], tab[15], tab[16], tab[17], tab[18], tab[19], tab[20], tab[21], tab[22], tab[23], tab[24], tab[25], tab[26], tab[27], tab[28], tab[29], tab[30], tab[31], tab[32], tab[33], tab[34], nbjoueur, aa, bb, cc, dd, compteur1, compteur2, compteur3, compteur4, compteurJ1, compteurJ2, compteurJ3, compteurJ4,tresJ1[0],tresJ1[1],tresJ1[2],tresJ1[3],tresJ1[4],tresJ1[5],tresJ1[6],tresJ1[7],tresJ1[8],tresJ1[9],tresJ1[10],tresJ1[11],tresJ2[0],tresJ2[1],tresJ2[2],tresJ2[3],tresJ2[4],tresJ2[5],tresJ2[6],tresJ2[7],tresJ2[8],tresJ2[9],tresJ2[10],tresJ2[11],tresJ3[0],tresJ3[1],tresJ3[2],tresJ3[3],tresJ3[4],tresJ3[5],tresJ3[6],tresJ3[7],tresJ3[8],tresJ3[9],tresJ3[10],tresJ3[11],tresJ4[0],tresJ4[1],tresJ4[2],tresJ4[3],tresJ4[4],tresJ4[5],tresJ4[6],tresJ4[7],tresJ4[8],tresJ4[9],tresJ4[10],tresJ4[11],posJ1,posJ2,posJ3,posJ4,nomJ1,nomJ2,nomJ3,nomJ4);
        fclose(fichier);
        fichier=NULL;
        compteursave=compteursave+1;
        if (compteursave%2==0){
            continuer();
        }
    }
    return 0;
}


// C:\Users\Antoine\Documents\sauvegarde.txt     PC
// C:\Users\antoi\Documents\COURS\INFO\sauvegarde.txt  PORTABLE