//
// Created by RobinK on 25/12/2022.
//

#include "Menu.h"

void MenuInit(TextMenu* pTextMenu){
    for (int i = 0; i < 6; ++i) {
        GC_TEXT_INIT(&pTextMenu->tableauTextes[i], TableauText[i]);
        GC_TEXT_SET_FONT(pTextMenu->tableauTextes[i], FONT_PATH, TableauTailleTypo[i]);
        pTextMenu->tableauTextes[i].al_flag = ALLEGRO_ALIGN_CENTER;
        pTextMenu->tableauTextes[i].gc_properties.gc_space.POSITION_X=TextOffsetX;
        pTextMenu->tableauTextes[i].gc_properties.gc_space.POSITION_Y=TableauTextOffsetY[i];
    }
}



void MenuDisplay(TextMenu* pTextMenu){                                               //fonction permettant d'afficher le menu

    al_clear_to_color(al_map_rgb(0,0,0));

    for (int i = 0; i < 6; ++i) {
        GC_TEXT_DRAW(&pTextMenu->tableauTextes[i]);
    }

    //printf("\nTEST");
    al_flip_display();
}