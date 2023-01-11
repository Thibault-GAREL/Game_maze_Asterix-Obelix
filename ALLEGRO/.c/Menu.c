//
// Created by RobinK on 25/12/2022.
//

#include "../.h/Menu.h"

char text_0[] = " Bienvenue Dans Le Labyrinthe ! ";
char text_1[] = " Récupérez tous les trésors afin de compléter le jeu ! ";
char text_2[] = " Bonne Chance ! ";
char text_3[] = " 1- Lancer Une Nouvelle Partie ";
char text_4[] = " 2- Charger Une Partie ";
char text_5[] = " 3- Crédits ";

const int TableauTailleTypo[6]={48,40,48,36,36,36}; //Définit les tailles de police pour les différentes lignes du menu de démarrage
const int TableauTextOffsetY[6]={300,400,575,750,825,900};  //définit les positions en Y du texte du menu


void MenuInit(TextMenu* pTextMenu){

    GC_TEXT_INIT(&pTextMenu->tableauTextes[0], text_0);
    GC_TEXT_INIT(&pTextMenu->tableauTextes[1], text_1);
    GC_TEXT_INIT(&pTextMenu->tableauTextes[2], text_2);
    GC_TEXT_INIT(&pTextMenu->tableauTextes[3], text_3);
    GC_TEXT_INIT(&pTextMenu->tableauTextes[4], text_4);
    GC_TEXT_INIT(&pTextMenu->tableauTextes[5], text_5);


    for (int i = 0; i < 6; ++i) {
        GC_TEXT_SET_FONT(&pTextMenu->tableauTextes[i], FONT_PATH, TableauTailleTypo[i]);
        pTextMenu->tableauTextes[i].al_flag = ALLEGRO_ALIGN_CENTER;
        pTextMenu->tableauTextes[i].gc_properties.gc_space.POSITION_X=TextOffsetX;
        pTextMenu->tableauTextes[i].gc_properties.gc_space.POSITION_Y=TableauTextOffsetY[i];

    }
}

void MenuDisplay(TextMenu* pTextMenu, int* pMENU_BACKGRD){                                               //fonction permettant d'afficher le menu

    al_clear_to_color(al_map_rgb(0,0,0));

    GC_SPRITE_DRAW(pMENU_BACKGRD);

    for (int i = 0; i < 6; ++i) {
        GC_TEXT_DRAW(&pTextMenu->tableauTextes[i]);
    }

    al_flip_display();
}

/*void ButtonMenu(){
    GC_BUTTON Button_Menu1;
    Button_Menu1.gc_properties.gc_space.POSITION_X= al_get_text_width();

    GC_BUTTON_INIT(&Button_Menu1, &manager);
}*/