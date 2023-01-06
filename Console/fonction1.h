#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void color(int t,int f)
{
    HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(H,f*16+t);
}
//piece en T
int piece1bout1() {
    printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
}
int piece1bout2() {
    printf("%c%c%c%c%c  %c%c%c%c", 452, 452, 452, 452, 447, 474, 452, 452, 452);
}
int piece1bout3() {
    printf("    %c  %c   ", 435, 435);
}
int piece1bout4(){
    printf("    %c  %c   ",435,435);
}

//piece en T 180°
int piece2bout1(){
    printf("    %c  %c   ", 435, 435);
}
int piece2bout2(){
    printf("    %c  %c   ", 435, 435);
}
int piece2bout3(){
    printf("%c%c%c%c%c  %c%c%c%c", 452, 452, 452, 452, 473, 448, 452, 452, 452);
}

int piece2bout4(){
    printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
}

//piece 2 si ligne 1
int piece2bout1l1(){
    printf("%c%c%c%c%c %c%c%c%c%c",452,452,452,452,473,448,452,452,452,452);
}
int piece2bout2l1(){
    printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
}
//piece T à 90°
int piece3bout1(){
    printf("    %c  %c   ",435,435);
}
int piece3bout2(){
    printf("   %c  %c%c%c  ",435,448,452,452);
}
int piece3bout3(){
    printf("   %c  %c%c%c  ",435,474,452,452);
}
int piece3bout4(){
    printf("   %c  %c    ",435,435);
}
//piece 3 si l1
int piece3bout1l1(){
    printf("    %c  %c%c%c%c",435,448,452,452,452);
}
int piece3bout2l1(){
    printf("    %c  %c%c%c%c",435,474,452,452,452);
}
int piece3bout3l1(){
    printf("    %c  %c   ",435,435);
}
int piece3bout4l1(){
    printf("    %c  %c   ",435,435);
}
//piece en T à 270°
int piece4bout1(){
    printf("    %c  %c   ",435,435);
}
int piece4bout2(){
    printf("  %c%c%c  %c   ",452,452,473,435);
}
int piece4bout3(){
    printf("  %c%c%c  %c   ",452,452,447,435);
}
int piece4bout4(){
    printf("    %c  %c   ",435,435);
}
//piece 4 si l1
int piece4bout1l1(){
    printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
}
int piece4bout2l1(){
    printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
}
int piece4bout3l1(){
    printf("    %c  %c   ",435,435);
}
int piece4bout4l1(){
    printf("    %c  %c   ",435,435);
}
//piece en I
int piece5bout1(){
    printf("    %c  %c   ",435,435);
}
int piece5bout2(){
    printf("    %c  %c   ",435,435);
}
int piece5bout3(){
    printf("    %c  %c   ",435,435);
}
int piece5bout4(){
    printf("    %c  %c   ",435,435);
}
//piece en ==
int piece6bout1(){
    printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
}
int piece6bout2(){
    printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
}
//piece en L
int piece7bout1(){
    printf("%c  %c       ",435,435);
}
int piece7bout2(){
    printf("%c  %c       ",435,435);
}
int piece7bout3(){
    printf("%c  %c%c%c%c%c%c%c%c",435,448,452,452,452,452,452,452,452);
}
int piece7bout4(){
    printf("%c%c%c%c%c%c%c%c%c%c%c",448,452,452,452,452,452,452,452,452,452,452);
}
//piece 7 si l1
int piece7bout1l1(){
    printf("%c  %c%c%c%c%c%c%c%c",435,448,452,452,452,452,452,452,452);
}
int piece7bout2l1(){
    printf("%c%c%c%c%c%c%c%c%c%c%c",448,452,452,452,452,452,452,452,452,452,452);
}
//piece 7 si pas bord
int p7bout1(){
    printf("    %c  %c   ",435,435);
}
int p7bout2(){
    printf("    %c  %c%c%c%c",435,448,452,452,452);
}
int p7bout3(){
    printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
}
int p7bout4(){
    printf("           ");
}
//piece en ┘
int piece8bout1(){
    printf("    %c  %c",435,435);
}
int piece8bout2(){
    printf("    %c  %c",435,435);
}
int piece8bout3(){
    printf("%c%c%c%c%c  %c",452,452,452,452,473,435);
}
int piece8bout4(){
    printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,473);
}
//piece 8 si l1
int piece8bout1l1(){
    printf("%c%c%c%c%c%c%c%c  %c",452,452,452,452,452,452,452,473,435);
}
int piece8bout2l1(){
    printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,473);
}
// piece 8 si pas au bord et pas l1
int p8bout1(){
    printf("    %c  %c   ",435,435);
}
int p8bout2(){
    printf("%c%c%c%c%c%c%c  %c",452,452,452,452,452,452,473,435);
}
int p8bout3(){
    printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,473);
}
int p8bout4(){
    printf("           ");
}
//piece en ┌
int piece9bout1(){
    printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
}
int piece9bout2(){
    printf("    %c  %c%c%c%c",435,474,452,452,452);
}
int piece9bout3(){
    printf("    %c  %c   ",435,435);
}
int piece9bout4(){
    printf("    %c  %c   ",435,435);
}
//piece 9 si pas ligne 1 ou 7 et C1
int p9bout1(){
    printf("        ");
}
int p9bout2(){
    printf("%c%c%c%c%c%c%c%c",474,452,452,452,452,452,452,452);
}
int p9bout3(){
    printf("%c  %c%c%c%c%c",435,474,452,452,452,452);
}
int p9bout4(){
    printf("%c  %c",435,435);
}
//piece en ┐
int piece10bout1(){
    printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
}
int piece10bout2(){
    printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
}
int piece10bout3(){
    printf("    %c  %c   ",435,435);
}
int piece10bout4(){
    printf("    %c  %c   ",435,435);
}

int a(){
    printf("\n");
}
int test(int case01,int case03,int case05,int case10,int case11,int case12,int case13,int case14,int case15,int case16,int case21,int case23,int case25,int case30,int case31,int case32,int case33,int case34,int case35,int case36,int case41,int case43,int case45,int case50,int case51,int case52,int case53,int case54,int case55,int case56,int case61,int case63,int case65){
    int case01l1,case01l2,case01l3,case01l4;
    case01l1=case01l2=case01l3=case01l4=case01;
    int case03l1,case03l2,case03l3,case03l4;
    case03l1=case03l2=case03l3=case03l4=case03;
    int case05l1,case05l2,case05l3,case05l4;
    case05l1=case05l2=case05l3=case05l4=case05;
    int case10l1,case10l2,case10l3,case10l4,case11l1,case11l2,case11l3,case11l4,case12l1,case12l2,case12l3,case12l4,case13l1,case13l2,case13l3,case13l4,case14l1,case14l2,case14l3,case14l4,case15l1,case15l2,case15l3,case15l4,case16l1,case16l2,case16l3,case16l4;
    case10l1=case10l2=case10l3=case10l4=case10;
    case11l1=case11l2=case11l3=case11l4=case11;
    case12l1=case12l2=case12l3=case12l4=case12;
    case13l1=case13l2=case13l3=case13l4=case13;
    case14l1=case14l2=case14l3=case14l4=case14;
    case15l1=case15l2=case15l3=case15l4=case15;
    case16l1=case16l2=case16l3=case16l4=case16;
    int case21l1,case21l2,case21l3,case21l4,case23l1,case23l2,case23l3,case23l4,case25l1,case25l2,case25l3,case25l4;
    case21l1=case21l2=case21l3=case21l4=case21;
    case23l1=case23l2=case23l3=case23l4=case23;
    case25l1=case25l2=case25l3=case25l4=case25;
    int case30l1,case30l2,case30l3,case30l4,case31l1,case31l2,case31l3,case31l4,case32l1,case32l2,case32l3,case32l4,case33l1,case33l2,case33l3,case33l4,case34l1,case34l2,case34l3,case34l4,case35l1,case35l2,case35l3,case35l4,case36l1,case36l2,case36l3,case36l4;
    case30l1=case30l2=case30l3=case30l4=case30;
    case31l1=case31l2=case31l3=case31l4=case31;
    case32l1=case32l2=case32l3=case32l4=case32;
    case33l1=case33l2=case33l3=case33l4=case33;
    case34l1=case34l2=case34l3=case34l4=case34;
    case35l1=case35l2=case35l3=case35l4=case35;
    case36l1=case36l2=case36l3=case36l4=case36;
    int case41l1,case41l2,case41l3,case41l4,case43l1,case43l2,case43l3,case43l4,case45l1,case45l2,case45l3,case45l4;
    case41l1=case41l2=case41l3=case41l4=case41;
    case43l1=case43l2=case43l3=case43l4=case43;
    case45l1=case45l2=case45l3=case45l4=case45;
    int case50l1,case50l2,case50l3,case50l4,case51l1,case51l2,case51l3,case51l4,case52l1,case52l2,case52l3,case52l4,case53l1,case53l2,case53l3,case53l4,case54l1,case54l2,case54l3,case54l4,case55l1,case55l2,case55l3,case55l4,case56l1,case56l2,case56l3,case56l4;
    case50l1=case50l2=case50l3=case50l4=case50;
    case51l1=case51l2=case51l3=case51l4=case51;
    case52l1=case52l2=case52l3=case52l4=case52;
    case53l1=case53l2=case53l3=case53l4=case53;
    case54l1=case54l2=case54l3=case54l4=case54;
    case55l1=case55l2=case55l3=case55l4=case55;
    case56l1=case56l2=case56l3=case56l4=case56;
    int case61l1,case61l2,case61l3,case61l4,case63l1,case63l2,case63l3,case63l4,case65l1,case65l2,case65l3,case65l4;
    case61l1=case61l2=case61l3=case61l4=case61;
    case63l1=case63l2=case63l3=case63l4=case63;
    case65l1=case65l2=case65l3=case65l4=case65;
    color(9,0);
    printf("                                 %c%c%c%c%c%c%c%c",474,452,452,452,452,452,452,452);              //DEBUT 1ere LIGNE
    if (case01l1==0){
        printf("           ");
    }
    if (case01l1==1){
        color(14,0);
        piece1bout1();
    }
    if (case01l1==2){
        color(14,0);
        piece2bout1l1();
    }
    if (case01l1==3){
        color(14,0);
        piece3bout1l1();
    }
    if (case01l1==4){
        color(14,0);
        piece4bout1l1();
    }
    if (case01l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case01l1==6){
        color(14,0);
        piece6bout1();
    }
    if (case01l1==7){
        color(14,0);
        piece7bout1l1();
    }
    if (case01l1==8){
        color(14,0);
        piece8bout1l1();
    }
    if (case01l1==9){
        color(14,0);
        piece9bout1();
    }
    if (case01l1==10){
        color(14,0);
        piece10bout1();
    }
    color(9,0);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    if (case03l1==0){
        printf("           ");
    }
    if (case03l1==1){
        color(14,0);
        piece1bout1();
    }
    if (case03l1==2){
        color(14,0);
        piece2bout1l1();
    }
    if (case03l1==3){
        color(14,0);
        piece3bout1l1();
    }
    if (case03l1==4){
        color(14,0);
        piece4bout1l1();
    }
    if (case03l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case03l1==6){
        color(14,0);
        piece6bout1();
    }
    if (case03l1==7){
        color(14,0);
        piece7bout1l1();
    }
    if (case03l1==8){
        color(14,0);
        piece8bout1l1();
    }
    if (case03l1==9){
        color(14,0);
        piece9bout1();
    }
    if (case03l1==10){
        color(14,0);
        piece10bout1();
    }
    color(9,0);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    if (case05l1==0){
        printf("           ");
    }
    if (case05l1==1){
        color(14,0);
        piece1bout1();
    }
    if (case05l1==2){
        color(14,0);
        piece2bout1l1();
    }
    if (case05l1==3){
        color(14,0);
        piece3bout1l1();
    }
    if (case05l1==4){
        color(14,0);
        piece4bout1l1();
    }
    if (case05l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case05l1==6){
        color(14,0);
        piece6bout1();
    }
    if (case05l1==7){
        color(14,0);
        piece7bout1l1();
    }
    if (case05l1==8){
        color(14,0);
        piece8bout1l1();
    }
    if (case05l1==9){
        color(14,0);
        piece9bout1();
    }
    if (case05l1==10){
        color(14,0);
        piece10bout1();
    }
    color(9,0);
    printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,447);a();
    printf("                                 %c",435);
    color(10,0);
    printf(" %c",476);
    color(9,0);
    printf("%c%c%c%c%c",474,452,452,452,452);      //DEBUT 2eme LIGNE
    if (case01l2==0){
        printf("           ");
    }
    if (case01l2==1){
        color(14,0);
        piece1bout2();
    }
    if (case01l2==2){
        color(14,0);
        piece2bout2l1();
    }
    if (case01l2==3){
        color(14,0);
        piece3bout2l1();
    }
    if (case01l2==4){
        color(14,0);
        piece4bout2l1();
    }
    if (case01l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case01l2==6){
        color(14,0);
        piece6bout2();
    }
    if (case01l2==7){
        color(14,0);
        piece7bout2l1();
    }
    if (case01l2==8){
        color(14,0);
        piece8bout2l1();
    }
    if (case01l2==9){
        color(14,0);
        piece9bout2();
    }
    if (case01l2==10){
        color(14,0);
        piece10bout2();
    }
    color(9,0);
    printf("%c%c%c%c%c  %c%c%c%c%c", 452, 452, 452, 452, 447, 474, 452, 452, 452,452);
    if (case03l2==0){
        printf("           ");
    }
    if (case03l2==1){
        color(14,0);
        piece1bout2();
    }
    if (case03l2==2){
        color(14,0);
        piece2bout2l1();
    }
    if (case03l2==3){
        color(14,0);
        piece3bout2l1();
    }
    if (case03l2==4){
        color(14,0);
        piece4bout2l1();
    }
    if (case03l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case03l2==6){
        color(14,0);
        piece6bout2();
    }
    if (case03l2==7){
        color(14,0);
        piece7bout2l1();
    }
    if (case03l2==8){
        color(14,0);
        piece8bout2l1();
    }
    if (case03l2==9){
        color(14,0);
        piece9bout2();
    }
    if (case03l2==10){
        color(14,0);
        piece10bout2();
    }
    color(9,0);
    printf("%c%c%c%c%c%c  %c%c%c%c%c%c",452, 452, 452, 452, 452, 447, 474, 452,452, 452, 452,452);
    if (case05l2==0){
        printf("           ");
    }
    if (case05l2==1){
        color(14,0);
        piece1bout2();
    }
    if (case05l2==2){
        color(14,0);
        piece2bout2l1();
    }
    if (case05l2==3){
        color(14,0);
        piece3bout2l1();
    }
    if (case05l2==4){
        color(14,0);
        piece4bout2l1();
    }
    if (case05l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case05l2==6){
        color(14,0);
        piece6bout2();
    }
    if (case05l2==7){
        color(14,0);
        piece7bout2l1();
    }
    if (case05l2==8){
        color(14,0);
        piece8bout2l1();
    }
    if (case05l2==9){
        color(14,0);
        piece9bout2();
    }
    if (case05l2==10){
        color(14,0);
        piece10bout2();
    }
    color(9,0);
    printf("%c%c%c%c%c%c",452,452,452,452,452,447);
    color(12,0);
    printf("%c ",476);
    color(9,0);
    printf("%c",435);a();
    printf("                                 %c  %c    ",435,435); //DEBUT 3eme LIGNE
    if (case01l3==0){
        printf("           ");
    }
    if (case01l3==1){
        color(14,0);
        piece1bout3();
    }
    if (case01l3==2){
        color(14,0);
        printf("           ");
    }
    if (case01l3==3){
        color(14,0);
        piece3bout3l1();
    }
    if (case01l3==4){
        color(14,0);
        piece4bout3l1();
    }
    if (case01l3==5){
        color(14,0);
        piece5bout3();
    }
    if (case01l3==6){
        color(14,0);
        printf("           ");
    }
    if (case01l3==7){
        color(14,0);
        printf("           ");
    }
    if (case01l3==8){
        color(14,0);
        printf("           ");
    }
    if (case01l3==9){
        color(14,0);
        piece9bout3();
    }
    if (case01l3==10){
        color(14,0);
        piece10bout3();
    }
    color(9,0);
    printf("    %c  %c    ",435,435);
    if (case03l3==0){
        printf("           ");
    }
    if (case03l3==1){
        color(14,0);
        piece1bout3();
    }
    if (case03l3==2){
        color(14,0);
        printf("           ");
    }
    if (case03l3==3){
        color(14,0);
        piece3bout3l1();
    }
    if (case03l3==4){
        color(14,0);
        piece4bout3l1();
    }
    if (case03l3==5){
        color(14,0);
        piece5bout3();
    }
    if (case03l3==6){
        color(14,0);
        printf("           ");
    }
    if (case03l3==7){
        color(14,0);
        printf("           ");
    }
    if (case03l3==8){
        color(14,0);
        printf("           ");
    }
    if (case03l3==9){
        color(14,0);
        piece9bout3();
    }
    if (case03l3==10){
        color(14,0);
        piece10bout3();
    }
    color(9,0);
    printf("     %c  %c     ",435,435);
    if (case05l3==0){
        printf("           ");
    }
    if (case05l3==1){
        color(14,0);
        piece1bout3();
    }
    if (case05l3==2){
        color(14,0);
        printf("           ");
    }
    if (case05l3==3){
        color(14,0);
        piece3bout3l1();
    }
    if (case05l3==4){
        color(14,0);
        piece4bout3l1();
    }
    if (case05l3==5){
        color(14,0);
        piece5bout3();
    }
    if (case05l3==6){
        color(14,0);
        printf("           ");
    }
    if (case05l3==7){
        color(14,0);
        printf("           ");
    }
    if (case05l3==8){
        color(14,0);
        printf("           ");
    }
    if (case05l3==9){
        color(14,0);
        piece9bout3();
    }
    if (case05l3==10){
        color(14,0);
        piece10bout3();
    }
    color(9,0);
    printf("     %c  %c",435,435);a();
    printf("                                 %c  %c    ",435,435); //DEBUT 4eme LIGNE
    if (case01l4==0){
        printf("           ");
    }
    if (case01l4==1){
        color(14,0);
        piece1bout4();
    }
    if (case01l4==2){
        color(14,0);
        printf("           ");
    }
    if (case01l4==3){
        color(14,0);
        piece3bout4l1();
    }
    if (case01l4==4){
        color(14,0);
        piece4bout4l1();
    }
    if (case01l4==5){
        color(14,0);
        piece5bout4();
    }
    if (case01l4==6){
        color(14,0);
        printf("           ");
    }
    if (case01l4==7){
        color(14,0);
        printf("           ");
    }
    if (case01l4==8){
        color(14,0);
        printf("           ");
    }
    if (case01l4==9){
        color(14,0);
        piece9bout4();
    }
    if (case01l4==10){
        color(14,0);
        piece10bout4();
    }
    color(9,0);
    printf("    %c  %c    ",435,435);
    if (case03l4==0){
        printf("           ");
    }
    if (case03l4==1){
        color(14,0);
        piece1bout4();
    }
    if (case03l4==2){
        color(14,0);
        printf("           ");
    }
    if (case03l4==3){
        color(14,0);
        piece3bout4l1();
    }
    if (case03l4==4){
        color(14,0);
        piece4bout4l1();
    }
    if (case03l4==5){
        color(14,0);
        piece5bout4();
    }
    if (case03l4==6){
        color(14,0);
        printf("           ");
    }
    if (case03l4==7){
        color(14,0);
        printf("           ");
    }
    if (case03l4==8){
        color(14,0);
        printf("           ");
    }
    if (case03l4==9){
        color(14,0);
        piece9bout4();
    }
    if (case03l4==10){
        color(14,0);
        piece10bout4();
    }
    color(9,0);
    printf("     %c  %c     ",435,435);
    if (case05l4==0){
        printf("           ");
    }
    if (case05l4==1){
        color(14,0);
        piece1bout4();
    }
    if (case05l4==2){
        color(14,0);
        printf("           ");
    }
    if (case05l4==3){
        color(14,0);
        piece3bout4l1();
    }
    if (case05l4==4){
        color(14,0);
        piece4bout4l1();
    }
    if (case05l4==5){
        color(14,0);
        piece5bout4();
    }
    if (case05l4==6){
        color(14,0);
        printf("           ");
    }
    if (case05l4==7){
        color(14,0);
        printf("           ");
    }
    if (case05l4==8){
        color(14,0);
        printf("           ");
    }
    if (case05l4==9){
        color(14,0);
        piece9bout4();
    }
    if (case05l4==10){
        color(14,0);
        piece10bout4();
    }
    color(9,0);
    printf("     %c  %c",435,435);a();
    printf("                                 ");//DEBUT 5eme LIGNE
    if (case10l1==0){
        color(14,0);
        printf("        ");
    }
    if (case10l1==1){
        color(14,0);
        printf("        ");
    }
    if (case10l1==2){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case10l1==3){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case10l1==4){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case10l1==5){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case10l1==6){
        color(14,0);
        printf("        ");
    }
    if (case10l1==7){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case10l1==8){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case10l1==9){
        color(14,0);
        p9bout1();
    }
    if (case10l1==10){
        color(14,0);
        printf("        ");
    }
    if (case11l1==0){
        color(14,0);
        printf("           ");
    }
    if (case11l1==1){
        color(14,0);
        printf("           ");
    }
    if (case11l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case11l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case11l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case11l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case11l1==6){
        color(14,0);
        printf("           ");
    }
    if (case11l1==7){
        color(14,0);
        p7bout1();
    }
    if (case11l1==8){
        color(14,0);
        p8bout1();
    }
    if (case11l1==9){
        color(14,0);
        printf("           ");
    }
    if (case11l1==10){
        color(14,0);
        printf("           ");
    }
    if (case12l1==0){
        color(14,0);
        printf("            ");
    }
    if (case12l1==1){
        color(14,0);
        printf("            ");
    }
    if (case12l1==2){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case12l1==3){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case12l1==4){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case12l1==5){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case12l1==6){
        color(14,0);
        printf("            ");
    }
    if (case12l1==7){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case12l1==8){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case12l1==9){
        color(14,0);
        printf("            ");
    }
    if (case12l1==10){
        color(14,0);
        printf("            ");
    }
    if (case13l1==0){
        color(14,0);
        printf("           ");
    }
    if (case13l1==1){
        color(14,0);
        printf("           ");
    }
    if (case13l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case13l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case13l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case13l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case13l1==6){
        color(14,0);
        printf("        ");
    }
    if (case13l1==7){
        color(14,0);
        p7bout1();
    }
    if (case13l1==8){
        color(14,0);
        p8bout1();
    }
    if (case13l1==9){
        color(14,0);
        printf("           ");
    }
    if (case13l1==10){
        color(14,0);
        printf("           ");
    }
    if (case14l1==0){
        color(14,0);
        printf("              ");
    }
    if (case14l1==1){
        color(14,0);
        printf("              ");
    }
    if (case14l1==2){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case14l1==3){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case14l1==4){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case14l1==5){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case14l1==6){
        color(14,0);
        printf("              ");
    }
    if (case14l1==7){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case14l1==8){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case14l1==9){
        color(14,0);
        printf("              ");
    }
    if (case14l1==10){
        color(14,0);
        printf("              ");
    }
    if (case15l1==0){
        color(14,0);
        printf("           ");
    }
    if (case15l1==1){
        color(14,0);
        printf("           ");
    }
    if (case15l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case15l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case15l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case15l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case15l1==6){
        color(14,0);
        printf("           ");
    }
    if (case15l1==7){
        color(14,0);
        p7bout1();
    }
    if (case15l1==8){
        color(14,0);
        p8bout1();
    }
    if (case15l1==9){
        color(14,0);
        printf("           ");
    }
    if (case15l1==10){
        color(14,0);
        printf("           ");
    }
    if (case16l1==0){
        printf("         ");
    }
    if (case16l1==1){
        printf("         ");
    }
    if (case16l1==2){
        printf("     %c  %c",435,435);
    }
    if (case16l1==3){
        printf("     %c  %c",435,435);
    }
    if (case16l1==4){
        printf("     %c  %c",435,435);
    }
    if (case16l1==5){
        printf("     %c  %c",435,435);
    }
    if (case16l1==6){
        printf("         ");
    }
    if (case16l1==7){
        printf("     %c  %c",435,435);
    }
    if (case16l1==8){
        printf("     %c  %c",435,435);
    }
    if (case16l1==9){
        printf("         ");
    }
    if (case16l1==10){
        printf("         ");
    }
    a();printf("                                 ");
    if (case10l2==0){
        printf("        ");
    }
    if (case10l2==1){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452);
    }
    if (case10l2==2){
        printf("%c  %c%c%c%c%c",473,448,452,452,452,452);
    }
    if (case10l2==3){
        printf("%c  %c%c%c%c%c",435,448,452,452,452,452);
    }
    if (case10l2==4){
        printf("%c  %c    ",473,435);
    }
    if (case10l2==5){
        printf("%c  %c    ",435,435);
    }
    if (case10l2==6){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452);
    }
    if (case10l2==7){
        printf("%c  %c%c%c%c%c",435,448,452,452,452,452);
    }
    if (case10l2==8){
        printf("%c%c%c%c%c  %c",452,452,452,452,473,435);
    }
    if (case10l2==9){
        printf("%c%c%c%c%c%c%c%c",474,452,452,452,452,452,452,452);
    }
    if (case10l2==10){
        printf("%c%c%c%c    ",452,452,452,447);
    }
    if (case11l2==0){
        printf("           ");
    }
    if (case11l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case11l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case11l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case11l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case11l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case11l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case11l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case11l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case11l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case11l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    if (case12l2==0){
        color(14,0);
        printf("            ");
    }
    if (case12l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case12l2==2){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c%c",452,452,452,452,473,448,452,452,452,452);
    }
    if (case12l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c%c",435,448,452,452,452,452);
    }
    if (case12l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c    ",452,452,452,452,473,435);
    }
    if (case12l2==5){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case12l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case12l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c%c",435,448,452,452,452,452);
    }
    if (case12l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c    ",452,452,452,452,473,435);
    }
    if (case12l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c%c",474,452,452,452,452,452,452,452);
    }
    if (case12l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c    ",452,452,452,452,452,452,452,447);
    }
    if (case13l2==0){
        printf("           ");
    }
    if (case13l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case13l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case13l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case13l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case13l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case13l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case13l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case13l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case13l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case13l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    if (case14l2==0){
        color(14,0);
        printf("              ");
    }
    if (case14l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case14l2==2){
        color(14,0);
        printf("%c%c%c%c%c%c  %c%c%c%c%c%c",452,452,452,452,452,473,448,452,452,452,452,452);
    }
    if (case14l2==3){
        color(14,0);
        printf("     %c  %c%c%c%c%c%c",435,448,452,452,452,452,452);
    }
    if (case14l2==4){
        color(14,0);
        printf("%c%c%c%c%c%c  %c     ",452,452,452,452,452,473,435);
    }
    if (case14l2==5){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case14l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case14l2==7){
        color(14,0);
        printf("     %c  %c%c%c%c%c%c",435,448,452,452,452,452,452);
    }
    if (case14l2==8){
        color(14,0);
        printf("%c%c%c%c%c%c  %c     ",452,452,452,452,452,473,435);
    }
    if (case14l2==9){
        color(14,0);
        printf("     %c%c%c%c%c%c%c%c%c",474,452,452,452,452,452,452,452,452);
    }
    if (case14l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c     ",452,452,452,452,452,452,452,452,447);
    }
    if (case15l2==0){
        printf("           ");
    }
    if (case15l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case15l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case15l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case15l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case15l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case15l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case15l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case15l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case15l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case15l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    if (case16l2==0){
        printf("         ");
    }
    if (case16l2==1){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452);
    }
    if (case16l2==2){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,473,448);
    }
    if (case16l2==3){
        printf("     %c  %c",435,448);
    }
    if (case16l2==4){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,473,435);
    }
    if (case16l2==5){
        printf("     %c  %c",435,435);
    }
    if (case16l2==6){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452);
    }
    if (case16l2==7){
        printf("     %c  %c",435,448);
    }
    if (case16l2==8){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,473,435);
    }
    if (case16l2==9){
        printf("     %c%c%c%c",474,452,452,452);
    }
    if (case16l2==10){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,447);
    }
    a();printf("                                 ");
    if (case10l3==0){
        printf("        ");
    }
    if (case10l3==1){
        printf("%c  %c%c%c%c%c",447,474,452,452,452,452);
    }
    if (case10l3==2){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452);
    }
    if (case10l3==3){
        printf("%c  %c%c%c%c%c",435,474,452,452,452,452);
    }
    if (case10l3==4){
        printf("%c  %c    ",447,435);
    }
    if (case10l3==5){
        printf("%c  %c    ",435,435);
    }
    if (case10l3==6){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452);
    }
    if (case10l3==7){
        printf("%c%c%c%c%c%c%c%c",448,452,452,452,452,452,452,452);
    }
    if (case10l3==8){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,473);
    }
    if (case10l3==9){
        printf("%c  %c%c%c%c%c",435,474,452,452,452,452);
    }
    if (case10l3==10){
        printf("%c  %c    ",447,435);
    }
    if (case11l3==0){
        printf("           ");
    }
    if (case11l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case11l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case11l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case11l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case11l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case11l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case11l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case11l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case11l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case11l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    if (case12l3==0){
        printf("            ");
    }
    if (case12l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c%c",452,452,452,452,447,474,452,452,452,452);
    }
    if (case12l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case12l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c%c",435,474,452,452,452,452);
    }
    if (case12l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c    ",452,452,452,452,447,435);
    }
    if (case12l3==5){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case12l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case12l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c%c",448,452,452,452,452,452,452,452);
    }
    if (case12l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,452,473);
    }
    if (case12l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c%c",435,474,452,452,452,452);
    }
    if (case12l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c    ", 452, 452,452,452, 447,435);
    }
    if (case13l3==0){
        printf("           ");
    }
    if (case13l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case13l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case13l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case13l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case13l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case13l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case13l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case13l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case13l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case13l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    if (case14l3==0){
        printf("              ");
    }
    if (case14l3==1){
        color(14,0);
        printf("%c%c%c%c%c%c  %c%c%c%c%c%c",452,452,452,452,452,447,474,452,452,452,452,452);
    }
    if (case14l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case14l3==3){
        color(14,0);
        printf("     %c  %c%c%c%c%c%c",435,474,452,452,452,452,452);
    }
    if (case14l3==4){
        color(14,0);
        printf("%c%c%c%c%c%c%c  %c    ",452,452,452,452,452,452,447,435);
    }
    if (case14l3==5){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case14l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case14l3==7){
        color(14,0);
        printf("     %c%c%c%c%c%c%c%c%c",448,452,452,452,452,452,452,452,452);
    }
    if (case14l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c     ",452,452,452,452,452,452,452,452,473);
    }
    if (case14l3==9){
        color(14,0);
        printf("     %c  %c%c%c%c%c%c",435,474,452,452,452,452,452);
    }
    if (case14l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c%c  %c     ", 452, 452, 452,452,452, 447,435);
    }
    if (case15l3==0){
        printf("           ");
    }
    if (case15l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case15l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case15l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case15l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case15l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case15l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case15l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case15l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case15l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case15l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    if (case16l3==0){
        printf("         ");
    }
    if (case16l3==1){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,447,474);
    }
    if (case16l3==2){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,473);
    }
    if (case16l3==3){
        printf("     %c  %c",435,474);
    }
    if (case16l3==4){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,447,435);
    }
    if (case16l3==5){
        printf("     %c  %c",435,435);
    }
    if (case16l3==6){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452);
    }
    if (case16l3==7){
        printf("     %c%c%c%c",448,452,452,452);
    }
    if (case16l3==8){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,473);
    }
    if (case16l3==9){
        printf("     %c  %c",435,474);
    }
    if (case16l3==10){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,447,435);
    }
    a();printf("                                 ");
    if (case10l4==0){
        color(14,0);
        printf("        ");
    }
    if (case10l4==1){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case10l4==2){
        color(14,0);
        printf("        ");
    }
    if (case10l4==3){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case10l4==4){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case10l4==5){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case10l4==6){
        color(14,0);
        printf("        ");
    }
    if (case10l4==7){
        color(14,0);
        printf("        ");
    }
    if (case10l4==8){
        color(14,0);
        printf("        ");
    }
    if (case10l4==9){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case10l4==10){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case11l4==0){
        printf("           ");
    }
    if (case11l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case11l4==2){
        color(14,0);
        printf("           ");
    }
    if (case11l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case11l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case11l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case11l4==6){
        color(14,0);
        printf("           ");
    }
    if (case11l4==7){
        color(14,0);
        printf("           ");
    }
    if (case11l4==8){
        color(14,0);
        printf("           ");
    }
    if (case11l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case11l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    if (case12l4==0){
        printf("            ");
    }
    if (case12l4==1){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case12l4==2){
        color(14,0);
        printf("            ");
    }
    if (case12l4==3){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case12l4==4){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case12l4==5){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case12l4==6){
        color(14,0);
        printf("            ");
    }
    if (case12l4==7){
        color(14,0);
        printf("            ");
    }
    if (case12l4==8){
        color(14,0);
        printf("            ");
    }
    if (case12l4==9){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case12l4==10) {
        color(14, 0);
        printf("    %c  %c    ",435,435);
    }
    if (case13l4==0){
        printf("           ");
    }
    if (case13l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case13l4==2){
        color(14,0);
        printf("           ");
    }
    if (case13l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case13l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case13l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case13l4==6){
        color(14,0);
        printf("           ");
    }
    if (case13l4==7){
        color(14,0);
        printf("           ");
    }
    if (case13l4==8){
        color(14,0);
        printf("           ");
    }
    if (case13l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case13l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    if (case14l4==0){
        printf("              ");
    }
    if (case14l4==1){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case14l4==2){
        color(14,0);
        printf("              ");
    }
    if (case14l4==3){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case14l4==4){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case14l4==5){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case14l4==6){
        color(14,0);
        printf("              ");
    }
    if (case14l4==7){
        color(14,0);
        printf("              ");
    }
    if (case14l4==8){
        color(14,0);
        printf("              ");
    }
    if (case14l4==9){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case14l4==10) {
        color(14, 0);
        printf("     %c  %c     ",435,435);
    }
    if (case15l4==0){
        printf("           ");
    }
    if (case15l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case15l4==2){
        color(14,0);
        printf("           ");
    }
    if (case15l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case15l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case15l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case15l4==6){
        color(14,0);
        printf("           ");
    }
    if (case15l4==7){
        color(14,0);
        printf("           ");
    }
    if (case15l4==8){
        color(14,0);
        printf("           ");
    }
    if (case15l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case15l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    if (case16l4==0){
        printf("         ");
    }
    if (case16l4==1){
        printf("     %c  %c",435,435);
    }
    if (case16l4==2){
        printf("         ");
    }
    if (case16l4==3){
        printf("     %c  %c",435,474);
    }
    if (case16l4==4){
        printf("     %c  %c",435,435);
    }
    if (case16l4==5){
        printf("     %c  %c",435,435);
    }
    if (case16l4==6){
        printf("         ");
    }
    if (case16l4==7){
        printf("         ");
    }
    if (case16l4==8){
        printf("         ");
    }
    if (case16l4==9){
        printf("     %c  %c",435,435);
    }
    if (case16l4==10){
        printf("     %c  %c",435,435);
    }
    a();printf("                                 ");
    color(9,0);
    printf("%c  %c    ",435,435);
    color(14,0);
    if (case21l1==0){
        color(14,0);
        printf("           ");
    }
    if (case21l1==1){
        color(14,0);
        printf("           ");
    }
    if (case21l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case21l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case21l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case21l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case21l1==6){
        color(14,0);
        printf("           ");
    }
    if (case21l1==7){
        color(14,0);
        p7bout1();
    }
    if (case21l1==8){
        color(14,0);
        p8bout1();
    }
    if (case21l1==9){
        color(14,0);
        printf("           ");
    }
    if (case21l1==10){
        color(14,0);
        printf("           ");
    }
    color(9,0);
    printf("    %c  %c    ",435,435);
    color(14,0);
    if (case23l1==0){
        color(14,0);
        printf("           ");
    }
    if (case23l1==1){
        color(14,0);
        printf("           ");
    }
    if (case23l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case23l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case23l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case23l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case23l1==6){
        color(14,0);
        printf("           ");
    }
    if (case23l1==7){
        color(14,0);
        p7bout1();
    }
    if (case23l1==8){
        color(14,0);
        p8bout1();
    }
    if (case23l1==9){
        color(14,0);
        printf("           ");
    }
    if (case23l1==10){
        color(14,0);
        printf("           ");
    }
    color(9,0);
    printf("              ");
    color(14,0);
    if (case25l1==0){
        color(14,0);
        printf("           ");
    }
    if (case25l1==1){
        color(14,0);
        printf("           ");
    }
    if (case25l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case25l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case25l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case25l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case25l1==6){
        color(14,0);
        printf("           ");
    }
    if (case25l1==7){
        color(14,0);
        p7bout1();
    }
    if (case25l1==8){
        color(14,0);
        p8bout1();
    }
    if (case25l1==9){
        color(14,0);
        printf("           ");
    }
    if (case25l1==10){
        color(14,0);
        printf("           ");
    }
    color(9,0);
    printf("     %c  %c",435,435);a();
    printf("                                 %c  %c%c%c%c%c",435,448,452,452,452,452);
    color(14,0);
    if (case21l2==0){
        printf("           ");
    }
    if (case21l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case21l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case21l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case21l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case21l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case21l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case21l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case21l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case21l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case21l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    color(9,0);
    printf("    %c  %c%c%c%c%c",435,448,452,452,452,452);
    color(14,0);
    if (case23l2==0){
        printf("           ");
    }
    if (case23l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case23l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case23l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case23l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case23l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case23l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case23l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case23l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case23l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case23l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    color(9,0);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    color(14,0);
    if (case25l2==0){
        printf("           ");
    }
    if (case25l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case25l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case25l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case25l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case25l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case25l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case25l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case25l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case25l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case25l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    color(9,0);
    printf("%c%c%c%c%c%c  %c",452,452,452,452,452,473,435);a();
    printf("                                 ");printf("%c  %c%c%c%c%c",435,474,452,452,452,452);
    color(14,0);
    if (case21l3==0){
        printf("           ");
    }
    if (case21l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case21l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case21l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case21l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case21l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case21l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case21l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case21l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case21l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case21l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    color(9,0);
    printf("    %c  %c%c%c%c%c",435,474,452,452,452,452);
    color(14,0);
    if (case23l3==0){
        printf("           ");
    }
    if (case23l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case23l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case23l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case23l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case23l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case23l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case23l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case23l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case23l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case23l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    color(9,0);
    printf("%c%c%c%c%c%c  %c%c%c%c%c%c",452,452,452,452,452,447,474,452,452,452,452,452);
    color(14,0);
    if (case25l3==0){
        printf("           ");
    }
    if (case25l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case25l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case25l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case25l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case25l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case25l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case25l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case25l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case25l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case25l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    color(9,0);
    printf("%c%c%c%c%c%c  %c",452,452,452,452,452,447,435);a();
    printf("                                 ");printf("%c  %c    ",435,435);
    color(14,0);
    if (case21l4==0){
        printf("           ");
    }
    if (case21l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case21l4==2){
        color(14,0);
        printf("           ");
    }
    if (case21l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case21l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case21l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case21l4==6){
        color(14,0);
        printf("           ");
    }
    if (case21l4==7){
        color(14,0);
        printf("           ");
    }
    if (case21l4==8){
        color(14,0);
        printf("           ");
    }
    if (case21l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case21l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    color(9,0);
    printf("    %c  %c    ",435,435);
    color(14,0);
    if (case23l4==0){
        printf("           ");
    }
    if (case23l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case23l4==2){
        color(14,0);
        printf("           ");
    }
    if (case23l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case23l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case23l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case23l4==6){
        color(14,0);
        printf("           ");
    }
    if (case23l4==7){
        color(14,0);
        printf("           ");
    }
    if (case23l4==8){
        color(14,0);
        printf("           ");
    }
    if (case23l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case23l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    color(9,0);
    printf("     %c  %c     ",435,435);
    color(14,0);
    if (case25l4==0){
        printf("           ");
    }
    if (case25l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case25l4==2){
        color(14,0);
        printf("           ");
    }
    if (case25l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case25l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case25l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case25l4==6){
        color(14,0);
        printf("           ");
    }
    if (case25l4==7){
        color(14,0);
        printf("           ");
    }
    if (case25l4==8){
        color(14,0);
        printf("           ");
    }
    if (case25l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case25l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    color(9,0);
    printf("     %c  %c",435,435);a();
    printf("                                 ");
    color(14,0);
    if (case30l1==0){
        color(14,0);
        printf("        ");
    }
    if (case30l1==1){
        color(14,0);
        printf("        ");
    }
    if (case30l1==2){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case30l1==3){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case30l1==4){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case30l1==5){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case30l1==6){
        color(14,0);
        printf("        ");
    }
    if (case30l1==7){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case30l1==8){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case30l1==9){
        color(14,0);
        p9bout1();
    }
    if (case30l1==10){
        color(14,0);
        printf("        ");
    }
    if (case31l1==0){
        color(14,0);
        printf("           ");
    }
    if (case31l1==1){
        color(14,0);
        printf("           ");
    }
    if (case31l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case31l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case31l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case31l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case31l1==6){
        color(14,0);
        printf("           ");
    }
    if (case31l1==7){
        color(14,0);
        p7bout1();
    }
    if (case31l1==8){
        color(14,0);
        p8bout1();
    }
    if (case31l1==9){
        color(14,0);
        printf("           ");
    }
    if (case31l1==10){
        color(14,0);
        printf("           ");
    }
    if (case32l1==0){
        color(14,0);
        printf("            ");
    }
    if (case32l1==1){
        color(14,0);
        printf("            ");
    }
    if (case32l1==2){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case32l1==3){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case32l1==4){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case32l1==5){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case32l1==6){
        color(14,0);
        printf("            ");
    }
    if (case32l1==7){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case32l1==8){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case32l1==9){
        color(14,0);
        printf("            ");
    }
    if (case32l1==10){
        color(14,0);
        printf("            ");
    }
    if (case33l1==0){
        color(14,0);
        printf("           ");
    }
    if (case33l1==1){
        color(14,0);
        printf("           ");
    }
    if (case33l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case33l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case33l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case33l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case33l1==6){
        color(14,0);
        printf("        ");
    }
    if (case33l1==7){
        color(14,0);
        p7bout1();
    }
    if (case33l1==8){
        color(14,0);
        p8bout1();
    }
    if (case33l1==9){
        color(14,0);
        printf("           ");
    }
    if (case33l1==10){
        color(14,0);
        printf("           ");
    }
    if (case34l1==0){
        color(14,0);
        printf("              ");
    }
    if (case34l1==1){
        color(14,0);
        printf("              ");
    }
    if (case34l1==2){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case34l1==3){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case34l1==4){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case34l1==5){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case34l1==6){
        color(14,0);
        printf("              ");
    }
    if (case34l1==7){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case34l1==8){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case34l1==9){
        color(14,0);
        printf("              ");
    }
    if (case34l1==10){
        color(14,0);
        printf("              ");
    }
    if (case35l1==0){
        color(14,0);
        printf("           ");
    }
    if (case35l1==1){
        color(14,0);
        printf("           ");
    }
    if (case35l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case35l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case35l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case35l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case35l1==6){
        color(14,0);
        printf("        ");
    }
    if (case35l1==7){
        color(14,0);
        p7bout1();
    }
    if (case35l1==8){
        color(14,0);
        p8bout1();
    }
    if (case35l1==9){
        color(14,0);
        printf("           ");
    }
    if (case35l1==10){
        color(14,0);
        printf("           ");
    }
    if (case36l1==0){
        printf("         ");
    }
    if (case36l1==1){
        printf("         ");
    }
    if (case36l1==2){
        printf("     %c  %c",435,435);
    }
    if (case36l1==3){
        printf("     %c  %c",435,435);
    }
    if (case36l1==4){
        printf("     %c  %c",435,435);
    }
    if (case36l1==5){
        printf("     %c  %c",435,435);
    }
    if (case36l1==6){
        printf("         ");
    }
    if (case36l1==7){
        printf("     %c  %c",435,435);
    }
    if (case36l1==8){
        printf("     %c  %c",435,435);
    }
    if (case36l1==9){
        printf("         ");
    }
    if (case36l1==10){
        printf("         ");
    }
    a();printf("                                 ");
    if (case30l2==0){
        printf("        ");
    }
    if (case30l2==1){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452);
    }
    if (case30l2==2){
        printf("%c  %c%c%c%c%c",473,448,452,452,452,452);
    }
    if (case30l2==3){
        printf("%c  %c%c%c%c%c",435,448,452,452,452,452);
    }
    if (case30l2==4){
        printf("%c  %c    ",473,435);
    }
    if (case30l2==5){
        printf("%c  %c    ",435,435);
    }
    if (case30l2==6){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452);
    }
    if (case30l2==7){
        printf("%c  %c%c%c%c%c",435,448,452,452,452,452);
    }
    if (case30l2==8){
        printf("%c%c%c%c%c  %c",452,452,452,452,473,435);
    }
    if (case30l2==9){
        printf("%c%c%c%c%c%c%c%c",474,452,452,452,452,452,452,452);
    }
    if (case30l2==10){
        printf("%c%c%c%c    ",452,452,452,447);
    }
    if (case31l2==0){
        printf("           ");
    }
    if (case31l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case31l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case31l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case31l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case31l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case31l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case31l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case31l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case31l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case31l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    if (case32l2==0){
        color(14,0);
        printf("            ");
    }
    if (case32l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case32l2==2){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c%c",452,452,452,452,473,448,452,452,452,452);
    }
    if (case32l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c%c",435,448,452,452,452,452);
    }
    if (case32l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c    ",452,452,452,452,473,435);
    }
    if (case32l2==5){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case32l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case32l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c%c",435,448,452,452,452,452);
    }
    if (case32l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c    ",452,452,452,452,473,435);
    }
    if (case32l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c%c",474,452,452,452,452,452,452,452);
    }
    if (case32l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c    ",452,452,452,452,452,452,452,447);
    }
    if (case33l2==0){
        printf("           ");
    }
    if (case33l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case33l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case33l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case33l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case33l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case33l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case33l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case33l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case33l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case33l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    if (case34l2==0){
        color(14,0);
        printf("              ");
    }
    if (case34l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case34l2==2){
        color(14,0);
        printf("%c%c%c%c%c%c  %c%c%c%c%c%c",452,452,452,452,452,473,448,452,452,452,452,452);
    }
    if (case34l2==3){
        color(14,0);
        printf("     %c  %c%c%c%c%c%c",435,448,452,452,452,452,452);
    }
    if (case34l2==4){
        color(14,0);
        printf("%c%c%c%c%c%c  %c     ",452,452,452,452,452,473,435);
    }
    if (case34l2==5){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case34l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case34l2==7){
        color(14,0);
        printf("     %c  %c%c%c%c%c%c",435,448,452,452,452,452,452);
    }
    if (case34l2==8){
        color(14,0);
        printf("%c%c%c%c%c%c  %c     ",452,452,452,452,452,473,435);
    }
    if (case34l2==9){
        color(14,0);
        printf("     %c%c%c%c%c%c%c%c%c",474,452,452,452,452,452,452,452,452);
    }
    if (case34l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c     ",452,452,452,452,452,452,452,452,447);
    }
    if (case35l2==0){
        printf("           ");
    }
    if (case35l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case35l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case35l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case35l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case35l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case35l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case35l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case35l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case35l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case35l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    if (case36l2==0){
        printf("         ");
    }
    if (case36l2==1){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452);
    }
    if (case36l2==2){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,473,448);
    }
    if (case36l2==3){
        printf("     %c  %c",435,448);
    }
    if (case36l2==4){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,473,435);
    }
    if (case36l2==5){
        printf("     %c  %c",435,435);
    }
    if (case36l2==6){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452);
    }
    if (case36l2==7){
        printf("     %c  %c",435,448);
    }
    if (case36l2==8){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,473,435);
    }
    if (case36l2==9){
        printf("     %c%c%c%c",474,452,452,452);
    }
    if (case36l2==10){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,447);
    }
    a();printf("                                 ");
    if (case30l3==0){
        printf("        ");
    }
    if (case30l3==1){
        printf("%c  %c%c%c%c%c",447,474,452,452,452,452);
    }
    if (case30l3==2){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452);
    }
    if (case30l3==3){
        printf("%c  %c%c%c%c%c",435,474,452,452,452,452);
    }
    if (case30l3==4){
        printf("%c  %c    ",447,435);
    }
    if (case30l3==5){
        printf("%c  %c    ",435,435);
    }
    if (case30l3==6){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452);
    }
    if (case30l3==7){
        printf("%c%c%c%c%c%c%c%c",448,452,452,452,452,452,452,452);
    }
    if (case30l3==8){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,473);
    }
    if (case30l3==9){
        printf("%c  %c%c%c%c%c",435,474,452,452,452,452);
    }
    if (case30l3==10){
        printf("%c  %c    ",447,435);
    }
    if (case31l3==0){
        printf("           ");
    }
    if (case31l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case31l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case31l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case31l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case31l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case31l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case31l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case31l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case31l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case31l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    if (case32l3==0){
        printf("            ");
    }
    if (case32l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c%c",452,452,452,452,447,474,452,452,452,452);
    }
    if (case32l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case32l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c%c",435,474,452,452,452,452);
    }
    if (case32l3==4){
        color(14,0);
        printf("%c%c%c%c%c%c  %c   ",452,452,452,452,452,447,435);
    }
    if (case32l3==5){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case32l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case32l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c%c",448,452,452,452,452,452,452,452);
    }
    if (case32l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,452,473);
    }
    if (case32l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c%c",435,474,452,452,452,452);
    }
    if (case32l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c    ", 452, 452,452,452, 447,435);
    }
    if (case33l3==0){
        printf("           ");
    }
    if (case33l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case33l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case33l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case33l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case33l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case33l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case33l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case33l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case33l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case33l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    if (case34l3==0){
        printf("              ");
    }
    if (case34l3==1){
        color(14,0);
        printf("%c%c%c%c%c%c  %c%c%c%c%c%c",452,452,452,452,452,447,474,452,452,452,452,452);
    }
    if (case34l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case34l3==3){
        color(14,0);
        printf("     %c  %c%c%c%c%c%c",435,474,452,452,452,452,452);
    }
    if (case34l3==4){
        color(14,0);
        printf("%c%c%c%c%c%c%c  %c    ",452,452,452,452,452,452,447,435);
    }
    if (case34l3==5){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case34l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case34l3==7){
        color(14,0);
        printf("     %c%c%c%c%c%c%c%c%c",448,452,452,452,452,452,452,452,452);
    }
    if (case34l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c     ",452,452,452,452,452,452,452,452,473);
    }
    if (case34l3==9){
        color(14,0);
        printf("     %c  %c%c%c%c%c%c",435,474,452,452,452,452,452);
    }
    if (case34l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c%c  %c     ", 452, 452, 452,452,452, 447,435);
    }
    if (case35l3==0){
        printf("           ");
    }
    if (case35l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case35l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case35l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case35l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case35l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case35l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case35l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case35l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case35l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case35l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    if (case36l3==0){
        printf("         ");
    }
    if (case36l3==1){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,447,474);
    }
    if (case36l3==2){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,473);
    }
    if (case36l3==3){
        printf("     %c  %c",435,474);
    }
    if (case36l3==4){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,447,435);
    }
    if (case36l3==5){
        printf("     %c  %c",435,435);
    }
    if (case36l3==6){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452);
    }
    if (case36l3==7){
        printf("     %c%c%c%c",448,452,452,452);
    }
    if (case36l3==8){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,473);
    }
    if (case36l3==9){
        printf("     %c  %c",435,474);
    }
    if (case36l3==10){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,447,435);
    }
    a();printf("                                 ");
    if (case30l4==0){
        color(14,0);
        printf("        ");
    }
    if (case30l4==1){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case30l4==2){
        color(14,0);
        printf("        ");
    }
    if (case30l4==3){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case30l4==4){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case30l4==5){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case30l4==6){
        color(14,0);
        printf("        ");
    }
    if (case30l4==7){
        color(14,0);
        printf("        ");
    }
    if (case30l4==8){
        color(14,0);
        printf("        ");
    }
    if (case30l4==9){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case30l4==10){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case31l4==0){
        printf("           ");
    }
    if (case31l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case31l4==2){
        color(14,0);
        printf("           ");
    }
    if (case31l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case31l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case31l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case31l4==6){
        color(14,0);
        printf("           ");
    }
    if (case31l4==7){
        color(14,0);
        printf("           ");
    }
    if (case31l4==8){
        color(14,0);
        printf("           ");
    }
    if (case31l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case31l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    if (case32l4==0){
        printf("            ");
    }
    if (case32l4==1){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case32l4==2){
        color(14,0);
        printf("            ");
    }
    if (case32l4==3){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case32l4==4){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case32l4==5){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case32l4==6){
        color(14,0);
        printf("            ");
    }
    if (case32l4==7){
        color(14,0);
        printf("            ");
    }
    if (case32l4==8){
        color(14,0);
        printf("            ");
    }
    if (case32l4==9){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case32l4==10) {
        color(14, 0);
        printf("    %c  %c    ",435,435);
    }
    if (case33l4==0){
        printf("           ");
    }
    if (case33l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case33l4==2){
        color(14,0);
        printf("           ");
    }
    if (case33l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case33l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case33l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case33l4==6){
        color(14,0);
        printf("           ");
    }
    if (case33l4==7){
        color(14,0);
        printf("           ");
    }
    if (case33l4==8){
        color(14,0);
        printf("           ");
    }
    if (case33l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case33l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    if (case34l4==0){
        printf("              ");
    }
    if (case34l4==1){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case34l4==2){
        color(14,0);
        printf("              ");
    }
    if (case34l4==3){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case34l4==4){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case34l4==5){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case34l4==6){
        color(14,0);
        printf("              ");
    }
    if (case34l4==7){
        color(14,0);
        printf("              ");
    }
    if (case34l4==8){
        color(14,0);
        printf("              ");
    }
    if (case34l4==9){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case34l4==10) {
        color(14, 0);
        printf("     %c  %c     ",435,435);
    }
    if (case35l4==0){
        printf("           ");
    }
    if (case35l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case35l4==2){
        color(14,0);
        printf("           ");
    }
    if (case35l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case35l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case35l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case35l4==6){
        color(14,0);
        printf("           ");
    }
    if (case35l4==7){
        color(14,0);
        printf("           ");
    }
    if (case35l4==8){
        color(14,0);
        printf("           ");
    }
    if (case35l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case35l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    if (case36l4==0){
        printf("         ");
    }
    if (case36l4==1){
        printf("     %c  %c",435,435);
    }
    if (case36l4==2){
        printf("         ");
    }
    if (case36l4==3){
        printf("     %c  %c",435,474);
    }
    if (case36l4==4){
        printf("     %c  %c",435,435);
    }
    if (case36l4==5){
        printf("     %c  %c",435,435);
    }
    if (case36l4==6){
        printf("         ");
    }
    if (case36l4==7){
        printf("         ");
    }
    if (case36l4==8){
        printf("         ");
    }
    if (case36l4==9){
        printf("     %c  %c",435,435);
    }
    if (case36l4==10){
        printf("     %c  %c",435,435);
    }
    color(9,0);
    a();printf("                                 ");
    printf("%c  %c    ",435,435);
    color(14,0);
    if (case41l1==0){
        color(14,0);
        printf("           ");
    }
    if (case41l1==1){
        color(14,0);
        printf("           ");
    }
    if (case41l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case41l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case41l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case41l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case41l1==6){
        color(14,0);
        printf("           ");
    }
    if (case41l1==7){
        color(14,0);
        p7bout1();
    }
    if (case41l1==8){
        color(14,0);
        p8bout1();
    }
    if (case41l1==9){
        color(14,0);
        printf("           ");
    }
    if (case41l1==10){
        color(14,0);
        printf("           ");
    }
    color(9,0);
    printf("    %c  %c    ",435,435);
    color(14,0);
    if (case43l1==0){
        color(14,0);
        printf("           ");
    }
    if (case43l1==1){
        color(14,0);
        printf("           ");
    }
    if (case43l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case43l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case43l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case43l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case43l1==6){
        color(14,0);
        printf("           ");
    }
    if (case43l1==7){
        color(14,0);
        p7bout1();
    }
    if (case43l1==8){
        color(14,0);
        p8bout1();
    }
    if (case43l1==9){
        color(14,0);
        printf("           ");
    }
    if (case43l1==10){
        color(14,0);
        printf("           ");
    }
    color(9,0);
    printf("              ");
    color(14,0);
    if (case45l1==0){
        color(14,0);
        printf("           ");
    }
    if (case45l1==1){
        color(14,0);
        printf("           ");
    }
    if (case45l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case45l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case45l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case45l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case45l1==6){
        color(14,0);
        printf("           ");
    }
    if (case45l1==7){
        color(14,0);
        p7bout1();
    }
    if (case45l1==8){
        color(14,0);
        p8bout1();
    }
    if (case45l1==9){
        color(14,0);
        printf("           ");
    }
    if (case45l1==10){
        color(14,0);
        printf("           ");
    }
    color(9,0);
    printf("     %c  %c",435,435);a();
    printf("                                 %c  %c%c%c%c%c",435,448,452,452,452,452);
    color(14,0);
    if (case41l2==0){
        printf("           ");
    }
    if (case41l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case41l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case41l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case41l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case41l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case41l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case41l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case41l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case41l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case41l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    color(9,0);
    printf("%c%c%c%c%c  %c%c%c%c%c",452,452,452,452,473,448,452,452,452,452);
    color(14,0);
    if (case43l2==0){
        printf("           ");
    }
    if (case43l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case43l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case43l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case43l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case43l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case43l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case43l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case43l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case43l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case43l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    color(9,0);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    color(14,0);
    if (case45l2==0){
        printf("           ");
    }
    if (case45l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case45l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case45l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case45l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case45l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case45l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case45l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case45l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case45l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case45l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    color(9,0);
    printf("%c%c%c%c%c%c  %c",452,452,452,452,452,473,435);a();
    printf("                                 ");printf("%c  %c%c%c%c%c",435,474,452,452,452,452);
    color(14,0);
    if (case41l3==0){
        printf("           ");
    }
    if (case41l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case41l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case41l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case41l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case41l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case41l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case41l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case41l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case41l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case41l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    color(9,0);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    color(14,0);
    if (case43l3==0){
        printf("           ");
    }
    if (case43l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case43l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case43l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case43l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case43l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case43l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case43l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case43l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case43l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case43l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    color(9,0);
    printf("%c%c%c%c%c%c  %c%c%c%c%c%c",452,452,452,452,452,447,474,452,452,452,452,452);
    color(14,0);
    if (case45l3==0){
        printf("           ");
    }
    if (case45l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case45l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case45l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case45l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case45l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case45l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case45l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case45l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case45l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case45l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    color(9,0);
    printf("%c%c%c%c%c%c  %c",452,452,452,452,452,447,435);a();
    printf("                                 ");printf("%c  %c    ",435,435);
    color(14,0);
    if (case41l4==0){
        printf("           ");
    }
    if (case41l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case41l4==2){
        color(14,0);
        printf("           ");
    }
    if (case41l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case41l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case41l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case41l4==6){
        color(14,0);
        printf("           ");
    }
    if (case41l4==7){
        color(14,0);
        printf("           ");
    }
    if (case41l4==8){
        color(14,0);
        printf("           ");
    }
    if (case41l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case41l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    color(9,0);
    printf("            ");
    color(14,0);
    if (case43l4==0){
        printf("           ");
    }
    if (case43l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case43l4==2){
        color(14,0);
        printf("           ");
    }
    if (case43l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case43l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case43l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case43l4==6){
        color(14,0);
        printf("           ");
    }
    if (case43l4==7){
        color(14,0);
        printf("           ");
    }
    if (case43l4==8){
        color(14,0);
        printf("           ");
    }
    if (case43l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case43l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    color(9,0);
    printf("     %c  %c     ",435,435);
    color(14,0);
    if (case45l4==0){
        printf("           ");
    }
    if (case45l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case45l4==2){
        color(14,0);
        printf("           ");
    }
    if (case45l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case45l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case45l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case45l4==6){
        color(14,0);
        printf("           ");
    }
    if (case45l4==7){
        color(14,0);
        printf("           ");
    }
    if (case45l4==8){
        color(14,0);
        printf("           ");
    }
    if (case45l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case45l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    color(9,0);
    printf("     %c  %c",435,435);a();
    printf("                                 ");
    color(14,0);
    if (case50l1==0){
        color(14,0);
        printf("        ");
    }
    if (case50l1==1){
        color(14,0);
        printf("        ");
    }
    if (case50l1==2){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case50l1==3){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case50l1==4){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case50l1==5){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case50l1==6){
        color(14,0);
        printf("        ");
    }
    if (case50l1==7){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case50l1==8){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case50l1==9){
        color(14,0);
        p9bout1();
    }
    if (case50l1==10){
        color(14,0);
        printf("        ");
    }
    if (case51l1==0){
        color(14,0);
        printf("           ");
    }
    if (case51l1==1){
        color(14,0);
        printf("           ");
    }
    if (case51l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case51l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case51l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case51l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case51l1==6){
        color(14,0);
        printf("           ");
    }
    if (case51l1==7){
        color(14,0);
        p7bout1();
    }
    if (case51l1==8){
        color(14,0);
        p8bout1();
    }
    if (case51l1==9){
        color(14,0);
        printf("           ");
    }
    if (case51l1==10){
        color(14,0);
        printf("           ");
    }
    if (case52l1==0){
        color(14,0);
        printf("            ");
    }
    if (case52l1==1){
        color(14,0);
        printf("            ");
    }
    if (case52l1==2){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case52l1==3){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case52l1==4){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case52l1==5){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case52l1==6){
        color(14,0);
        printf("            ");
    }
    if (case52l1==7){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case52l1==8){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case52l1==9){
        color(14,0);
        printf("            ");
    }
    if (case52l1==10){
        color(14,0);
        printf("            ");
    }
    if (case53l1==0){
        color(14,0);
        printf("           ");
    }
    if (case53l1==1){
        color(14,0);
        printf("           ");
    }
    if (case53l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case53l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case53l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case53l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case53l1==6){
        color(14,0);
        printf("        ");
    }
    if (case53l1==7){
        color(14,0);
        p7bout1();
    }
    if (case53l1==8){
        color(14,0);
        p8bout1();
    }
    if (case53l1==9){
        color(14,0);
        printf("           ");
    }
    if (case53l1==10){
        color(14,0);
        printf("           ");
    }
    if (case54l1==0){
        color(14,0);
        printf("              ");
    }
    if (case54l1==1){
        color(14,0);
        printf("              ");
    }
    if (case54l1==2){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case54l1==3){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case54l1==4){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case54l1==5){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case54l1==6){
        color(14,0);
        printf("              ");
    }
    if (case54l1==7){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case54l1==8){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case54l1==9){
        color(14,0);
        printf("              ");
    }
    if (case54l1==10){
        color(14,0);
        printf("              ");
    }
    if (case55l1==0){
        color(14,0);
        printf("           ");
    }
    if (case55l1==1){
        color(14,0);
        printf("           ");
    }
    if (case55l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case55l1==3){
        color(14,0);
        piece3bout1();
    }
    if (case55l1==4){
        color(14,0);
        piece4bout1();
    }
    if (case55l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case55l1==6){
        color(14,0);
        printf("        ");
    }
    if (case55l1==7){
        color(14,0);
        p7bout1();
    }
    if (case55l1==8){
        color(14,0);
        p8bout1();
    }
    if (case55l1==9){
        color(14,0);
        printf("           ");
    }
    if (case55l1==10){
        color(14,0);
        printf("           ");
    }
    if (case56l1==0){
        printf("         ");
    }
    if (case56l1==1){
        printf("         ");
    }
    if (case56l1==2){
        printf("     %c  %c",435,435);
    }
    if (case56l1==3){
        printf("     %c  %c",435,435);
    }
    if (case56l1==4){
        printf("     %c  %c",435,435);
    }
    if (case56l1==5){
        printf("     %c  %c",435,435);
    }
    if (case56l1==6){
        printf("         ");
    }
    if (case56l1==7){
        printf("     %c  %c",435,435);
    }
    if (case56l1==8){
        printf("     %c  %c",435,435);
    }
    if (case56l1==9){
        printf("         ");
    }
    if (case56l1==10){
        printf("         ");
    }
    a();printf("                                 ");
    if (case30l2==0){
        printf("        ");
    }
    if (case50l2==1){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452);
    }
    if (case50l2==2){
        printf("%c  %c%c%c%c%c",473,448,452,452,452,452);
    }
    if (case50l2==3){
        printf("%c  %c%c%c%c%c",435,448,452,452,452,452);
    }
    if (case50l2==4){
        printf("%c  %c    ",473,435);
    }
    if (case50l2==5){
        printf("%c  %c    ",435,435);
    }
    if (case50l2==6){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452);
    }
    if (case50l2==7){
        printf("%c  %c%c%c%c%c",435,448,452,452,452,452);
    }
    if (case50l2==8){
        printf("%c%c%c%c%c  %c",452,452,452,452,473,435);
    }
    if (case50l2==9){
        printf("%c%c%c%c%c%c%c%c",474,452,452,452,452,452,452,452);
    }
    if (case50l2==10){
        printf("%c%c%c%c    ",452,452,452,447);
    }
    if (case51l2==0){
        printf("           ");
    }
    if (case51l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case51l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case51l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case51l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case51l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case51l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case51l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case51l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case51l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case51l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    if (case52l2==0){
        color(14,0);
        printf("            ");
    }
    if (case52l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case52l2==2){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c%c",452,452,452,452,473,448,452,452,452,452);
    }
    if (case52l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c%c",435,448,452,452,452,452);
    }
    if (case52l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c    ",452,452,452,452,473,435);
    }
    if (case52l2==5){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case52l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case52l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c%c",435,448,452,452,452,452);
    }
    if (case52l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c    ",452,452,452,452,473,435);
    }
    if (case52l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c%c",474,452,452,452,452,452,452,452);
    }
    if (case52l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c    ",452,452,452,452,452,452,452,447);
    }
    if (case53l2==0){
        printf("           ");
    }
    if (case53l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case53l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case53l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case53l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case53l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case53l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case53l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case53l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case53l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case53l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    if (case54l2==0){
        color(14,0);
        printf("              ");
    }
    if (case54l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case54l2==2){
        color(14,0);
        printf("%c%c%c%c%c%c  %c%c%c%c%c%c",452,452,452,452,452,473,448,452,452,452,452,452);
    }
    if (case54l2==3){
        color(14,0);
        printf("     %c  %c%c%c%c%c%c",435,448,452,452,452,452,452);
    }
    if (case54l2==4){
        color(14,0);
        printf("%c%c%c%c%c%c  %c     ",452,452,452,452,452,473,435);
    }
    if (case54l2==5){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case54l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case54l2==7){
        color(14,0);
        printf("     %c  %c%c%c%c%c%c",435,448,452,452,452,452,452);
    }
    if (case54l2==8){
        color(14,0);
        printf("%c%c%c%c%c%c  %c     ",452,452,452,452,452,473,435);
    }
    if (case54l2==9){
        color(14,0);
        printf("     %c%c%c%c%c%c%c%c%c",474,452,452,452,452,452,452,452,452);
    }
    if (case54l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c     ",452,452,452,452,452,452,452,452,447);
    }
    if (case55l2==0){
        printf("           ");
    }
    if (case55l2==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case55l2==2){
        color(14,0);
        piece2bout3();
    }
    if (case55l2==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case55l2==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case55l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case55l2==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case55l2==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case55l2==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case55l2==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case55l2==10){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    if (case56l2==0){
        printf("         ");
    }
    if (case56l2==1){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452);
    }
    if (case56l2==2){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,473,448);
    }
    if (case56l2==3){
        printf("     %c  %c",435,448);
    }
    if (case56l2==4){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,473,435);
    }
    if (case56l2==5){
        printf("     %c  %c",435,435);
    }
    if (case56l2==6){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452);
    }
    if (case56l2==7){
        printf("     %c  %c",435,448);
    }
    if (case56l2==8){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,473,435);
    }
    if (case56l2==9){
        printf("     %c%c%c%c",474,452,452,452);
    }
    if (case56l2==10){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,447);
    }
    a();printf("                                 ");
    if (case50l3==0){
        printf("        ");
    }
    if (case50l3==1){
        printf("%c  %c%c%c%c%c",447,474,452,452,452,452);
    }
    if (case50l3==2){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452);
    }
    if (case50l3==3){
        printf("%c  %c%c%c%c%c",435,474,452,452,452,452);
    }
    if (case50l3==4){
        printf("%c  %c    ",447,435);
    }
    if (case50l3==5){
        printf("%c  %c    ",435,435);
    }
    if (case50l3==6){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452);
    }
    if (case50l3==7){
        printf("%c%c%c%c%c%c%c%c",448,452,452,452,452,452,452,452);
    }
    if (case50l3==8){
        printf("%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,473);
    }
    if (case50l3==9){
        printf("%c  %c%c%c%c%c",435,474,452,452,452,452);
    }
    if (case50l3==10){
        printf("%c  %c    ",447,435);
    }
    if (case51l3==0){
        printf("           ");
    }
    if (case51l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case51l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case51l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case51l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case51l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case51l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case51l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case51l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case51l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case51l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    if (case52l3==0){
        printf("            ");
    }
    if (case52l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c%c",452,452,452,452,447,474,452,452,452,452);
    }
    if (case52l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case52l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c%c",435,474,452,452,452,452);
    }
    if (case52l3==4){
        color(14,0);
        printf("%c%c%c%c%c%c  %c   ",452,452,452,452,452,447,435);
    }
    if (case52l3==5){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case52l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case52l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c%c",448,452,452,452,452,452,452,452);
    }
    if (case52l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,452,473);
    }
    if (case52l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c%c",435,474,452,452,452,452);
    }
    if (case52l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c    ", 452, 452,452,452, 447,435);
    }
    if (case53l3==0){
        printf("           ");
    }
    if (case53l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case53l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case53l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case53l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case53l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case53l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case53l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case53l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case53l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case53l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    if (case54l3==0){
        printf("              ");
    }
    if (case54l3==1){
        color(14,0);
        printf("%c%c%c%c%c%c  %c%c%c%c%c%c",452,452,452,452,452,447,474,452,452,452,452,452);
    }
    if (case54l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case54l3==3){
        color(14,0);
        printf("     %c  %c%c%c%c%c%c",435,474,452,452,452,452,452);
    }
    if (case54l3==4){
        color(14,0);
        printf("%c%c%c%c%c%c%c  %c    ",452,452,452,452,452,452,447,435);
    }
    if (case54l3==5){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case54l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case54l3==7){
        color(14,0);
        printf("     %c%c%c%c%c%c%c%c%c",448,452,452,452,452,452,452,452,452);
    }
    if (case54l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c     ",452,452,452,452,452,452,452,452,473);
    }
    if (case54l3==9){
        color(14,0);
        printf("     %c  %c%c%c%c%c%c",435,474,452,452,452,452,452);
    }
    if (case54l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c%c  %c     ", 452, 452, 452,452,452, 447,435);
    }
    if (case55l3==0){
        printf("           ");
    }
    if (case55l3==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case55l3==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case55l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case55l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    if (case55l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case55l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case55l3==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case55l3==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case55l3==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case55l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452, 452,452,452, 447,435);
    }
    if (case56l3==0){
        printf("         ");
    }
    if (case56l3==1){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,447,474);
    }
    if (case56l3==2){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,473);
    }
    if (case56l3==3){
        printf("     %c  %c",435,474);
    }
    if (case56l3==4){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,447,435);
    }
    if (case56l3==5){
        printf("     %c  %c",435,435);
    }
    if (case56l3==6){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452);
    }
    if (case56l3==7){
        printf("     %c%c%c%c",448,452,452,452);
    }
    if (case56l3==8){
        printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,473);
    }
    if (case56l3==9){
        printf("     %c  %c",435,474);
    }
    if (case56l3==10){
        printf("%c%c%c%c%c%c  %c",452,452,452,452,452,447,435);
    }
    a();printf("                                 ");
    if (case50l4==0){
        color(14,0);
        printf("        ");
    }
    if (case50l4==1){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case50l4==2){
        color(14,0);
        printf("        ");
    }
    if (case50l4==3){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case50l4==4){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case50l4==5){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case50l4==6){
        color(14,0);
        printf("        ");
    }
    if (case50l4==7){
        color(14,0);
        printf("        ");
    }
    if (case50l4==8){
        color(14,0);
        printf("        ");
    }
    if (case50l4==9){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case50l4==10){
        color(14,0);
        printf("%c  %c    ",435,435);
    }
    if (case51l4==0){
        printf("           ");
    }
    if (case51l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case51l4==2){
        color(14,0);
        printf("           ");
    }
    if (case51l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case51l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case51l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case51l4==6){
        color(14,0);
        printf("           ");
    }
    if (case51l4==7){
        color(14,0);
        printf("           ");
    }
    if (case51l4==8){
        color(14,0);
        printf("           ");
    }
    if (case51l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case51l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    if (case52l4==0){
        printf("            ");
    }
    if (case52l4==1){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case52l4==2){
        color(14,0);
        printf("            ");
    }
    if (case52l4==3){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case52l4==4){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case52l4==5){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case52l4==6){
        color(14,0);
        printf("            ");
    }
    if (case52l4==7){
        color(14,0);
        printf("            ");
    }
    if (case52l4==8){
        color(14,0);
        printf("            ");
    }
    if (case52l4==9){
        color(14,0);
        printf("    %c  %c    ",435,435);
    }
    if (case52l4==10) {
        color(14, 0);
        printf("    %c  %c    ",435,435);
    }
    if (case53l4==0){
        printf("           ");
    }
    if (case53l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case53l4==2){
        color(14,0);
        printf("           ");
    }
    if (case53l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case53l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case53l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case53l4==6){
        color(14,0);
        printf("           ");
    }
    if (case53l4==7){
        color(14,0);
        printf("           ");
    }
    if (case53l4==8){
        color(14,0);
        printf("           ");
    }
    if (case53l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case53l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    if (case54l4==0){
        printf("              ");
    }
    if (case54l4==1){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case54l4==2){
        color(14,0);
        printf("              ");
    }
    if (case54l4==3){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case54l4==4){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case54l4==5){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case54l4==6){
        color(14,0);
        printf("              ");
    }
    if (case54l4==7){
        color(14,0);
        printf("              ");
    }
    if (case54l4==8){
        color(14,0);
        printf("              ");
    }
    if (case54l4==9){
        color(14,0);
        printf("     %c  %c     ",435,435);
    }
    if (case54l4==10) {
        color(14, 0);
        printf("     %c  %c     ",435,435);
    }
    if (case55l4==0){
        printf("           ");
    }
    if (case55l4==1){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case55l4==2){
        color(14,0);
        printf("           ");
    }
    if (case55l4==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case55l4==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case55l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case55l4==6){
        color(14,0);
        printf("           ");
    }
    if (case55l4==7){
        color(14,0);
        printf("           ");
    }
    if (case55l4==8){
        color(14,0);
        printf("           ");
    }
    if (case55l4==9){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case55l4==10) {
        color(14, 0);
        printf("    %c  %c   ",435,435);
    }
    if (case56l4==0){
        printf("         ");
    }
    if (case56l4==1){
        printf("     %c  %c",435,435);
    }
    if (case56l4==2){
        printf("         ");
    }
    if (case56l4==3){
        printf("     %c  %c",435,474);
    }
    if (case56l4==4){
        printf("     %c  %c",435,435);
    }
    if (case56l4==5){
        printf("     %c  %c",435,435);
    }
    if (case56l4==6){
        printf("         ");
    }
    if (case56l4==7){
        printf("         ");
    }
    if (case56l4==8){
        printf("         ");
    }
    if (case56l4==9){
        printf("     %c  %c",435,435);
    }
    if (case56l4==10){
        printf("     %c  %c",435,435);
    }
    color(9,0);
    a();printf("                                 ");
    printf("%c  %c    ",435,435);
    color(14,0);
    if (case61l1==0){
        printf("           ");
    }
    if (case61l1==1){
        color(14,0);
        printf("           ");
    }
    if (case61l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case61l1==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case61l1==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case61l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case61l1==6){
        color(14,0);
        printf("           ");
    }
    if (case61l1==7){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case61l1==8){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case61l1==9){
        color(14,0);
        printf("           ");
    }
    if (case61l1==10){
        color(14,0);
        printf("           ");
    }
    color(9,0);
    printf("    %c  %c    ",435,435);
    color(14,0);
    if (case63l1==0){
        printf("           ");
    }
    if (case63l1==1){
        color(14,0);
        printf("           ");
    }
    if (case63l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case63l1==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case63l1==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case63l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case63l1==6){
        color(14,0);
        printf("           ");
    }
    if (case63l1==7){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case63l1==8){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case63l1==9){
        color(14,0);
        printf("           ");
    }
    if (case63l1==10){
        color(14,0);
        printf("           ");
    }
    color(9,0);
    printf("     %c  %c     ",435,435);
    color(14,0);
    if (case65l1==0){
        printf("           ");
    }
    if (case65l1==1){
        color(14,0);
        printf("           ");
    }
    if (case65l1==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case65l1==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case65l1==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case65l1==5){
        color(14,0);
        piece5bout1();
    }
    if (case65l1==6){
        color(14,0);
        printf("           ");
    }
    if (case65l1==7){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case65l1==8){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case65l1==9){
        color(14,0);
        printf("           ");
    }
    if (case65l1==10){
        color(14,0);
        printf("           ");
    }
    color(9,0);
    printf("     %c  %c",435,435);a();
    printf("                                 %c  %c    ",435,435);
    color(14,0);
    if (case61l2==0){
        printf("           ");
    }
    if (case61l2==1){
        color(14,0);
        printf("           ");
    }
    if (case61l2==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case61l2==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case61l2==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case61l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case61l2==6){
        color(14,0);
        printf("           ");
    }
    if (case61l2==7){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case61l2==8){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case61l2==9){
        color(14,0);
        printf("           ");
    }
    if (case61l2==10){
        color(14,0);
        printf("           ");
    }
    color(9,0);
    printf("    %c  %c    ",435,435);
    color(14,0);
    if (case63l2==0){
        printf("           ");
    }
    if (case63l2==1){
        color(14,0);
        printf("           ");
    }
    if (case63l2==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case63l2==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case63l2==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case63l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case63l2==6){
        color(14,0);
        printf("           ");
    }
    if (case63l2==7){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case63l2==8){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case63l2==9){
        color(14,0);
        printf("           ");
    }
    if (case63l2==10){
        color(14,0);
        printf("           ");
    }
    color(9,0);
    printf("     %c  %c     ",435,435);
    color(14,0);
    if (case65l2==0){
        printf("           ");
    }
    if (case65l2==1){
        color(14,0);
        printf("           ");
    }
    if (case65l2==2){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case65l2==3){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case65l2==4){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case65l2==5){
        color(14,0);
        piece5bout2();
    }
    if (case65l2==6){
        color(14,0);
        printf("           ");
    }
    if (case65l2==7){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case65l2==8){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case65l2==9){
        color(14,0);
        printf("           ");
    }
    if (case65l2==10){
        color(14,0);
        printf("           ");
    }
    color(9,0);
    printf("     %c  %c",435,435);a();
    printf("                                 %c",435);
    color(5,0);
    printf(" %c",479);
    color(9,0);
    printf("%c%c%c%c%c",448,452,452,452,452);
    color(14,0);
    if (case61l3==0){
        printf("           ");
    }
    if (case61l3==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case61l3==2){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,473,448,452,452,452);
    }
    if (case61l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case61l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case61l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case61l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case61l3==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case61l3==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case61l3==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case61l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    color(9,0);
    printf("%c%c%c%c%c  %c%c%c%c%c",452,452,452,452,473,448,452,452,452,452);
    color(14,0);
    if (case63l3==0){
        printf("           ");
    }
    if (case63l3==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case63l3==2){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,473,448,452,452,452);
    }
    if (case63l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case63l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case63l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case63l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case63l3==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case63l3==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case63l3==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case63l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    color(9,0);
    printf("%c%c%c%c%c%c  %c%c%c%c%c%c",452,452,452,452,452,473,448,452,452,452,452,452);
    color(14,0);
    if (case65l3==0){
        printf("           ");
    }
    if (case65l3==1){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case65l3==2){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,473,448,452,452,452);
    }
    if (case65l3==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case65l3==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case65l3==5){
        color(14,0);
        piece5bout2();
    }
    if (case65l3==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case65l3==7){
        color(14,0);
        printf("    %c  %c%c%c%c",435,448,452,452,452);
    }
    if (case65l3==8){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,473,435);
    }
    if (case65l3==9){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",474,452,452,452,452,452,452);
    }
    if (case65l3==10) {
        color(14, 0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,447);
    }
    color(9,0);
    printf("%c%c%c%c%c%c",452,452,452,452,452,473);
    printf("%c ",479);
    printf("%c",435);a();
    printf("                                 ");printf("%c%c%c%c%c%c%c%c",448,452,452,452,452,452,452,452);
    color(14,0);
    if (case61l4==0){
        printf("           ");
    }
    if (case61l4==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case61l4==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case61l4==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case61l4==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,474,435);
    }
    if (case61l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case61l4==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case61l4==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case61l4==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case61l4==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case61l4==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    color(9,0);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452);
    color(14,0);
    if (case63l4==0){
        printf("           ");
    }
    if (case63l4==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case63l4==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case63l4==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case63l4==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,474,435);
    }
    if (case63l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case63l4==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case63l4==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case63l4==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case63l4==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case63l4==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    color(9,0);
    printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452,452,452,452);
    color(14,0);
    if (case65l4==0){
        printf("           ");
    }
    if (case65l4==1){
        color(14,0);
        printf("%c%c%c%c%c  %c%c%c%c",452,452,452,452,447,474,452,452,452);
    }
    if (case65l4==2){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case65l4==3){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case65l4==4){
        color(14,0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,474,435);
    }
    if (case65l4==5){
        color(14,0);
        printf("    %c  %c   ",435,435);
    }
    if (case65l4==6){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,452,452,452);
    }
    if (case65l4==7){
        color(14,0);
        printf("    %c%c%c%c%c%c%c",448,452,452,452,452,452,452);
    }
    if (case65l4==8){
        color(14,0);
        printf("%c%c%c%c%c%c%c%c   ",452,452,452,452,452,452,452,473);
    }
    if (case65l4==9){
        color(14,0);
        printf("    %c  %c%c%c%c",435,474,452,452,452);
    }
    if (case65l4==10) {
        color(14, 0);
        printf("%c%c%c%c%c  %c   ",452,452,452,452,447,435);
    }
    color(9,0);
    printf("%c%c%c%c%c%c%c%c%c",452,452,452,452,452,452,452,452,473);
}
// Created by antoi on 03/12/2022.
//

#ifndef BROUILLONPROJET_FONCTION_H
#define BROUILLONPROJET_FONCTION_H

#endif //BROUILLONPROJET_FONCTION_H
