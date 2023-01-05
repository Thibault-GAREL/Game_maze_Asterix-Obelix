//
// Created by RobinK on 25/12/2022.
//

#include "Menu.h"

void MenuInit(TextMenu* pTextMenu){
    for (int i = 0; i < 6; ++i) {
        GC_TEXT_INIT(pTextMenu->tableauTextes[i], TableauText[i]);
        GC_TEXT_SET_FONT(pTextMenu->tableauTextes[i], FONT_PATH, TableauTailleTypo[i]);
        pTextMenu->tableauTextes[i].al_flag = ALLEGRO_ALIGN_CENTER;
    }
}



void MenuDisplay(int s1, int s2, int s3){                                               //fonction permettant d'afficher le menu

    al_clear_to_color(al_map_rgb(0,0,0));


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

    GC_TEXT_DRAW(&gc_text1);
    GC_TEXT_DRAW(&gc_text2);
    GC_TEXT_DRAW(&gc_text3);
    GC_TEXT_DRAW(&gc_text4);
    GC_TEXT_DRAW(&gc_text5);
    GC_TEXT_DRAW(&gc_text6);

    //al_rest(0.2);
    printf("\nTEST");
    al_flip_display();
}