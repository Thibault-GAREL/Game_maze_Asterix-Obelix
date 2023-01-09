#include "../.h/fonction_t.h"
#include "../.h/Menu.h"
// gcc -g -Wall .\main_t.c .\Gc.c .\fonction_t.c .\Menu.c -lallegro -lallegro_image -lallegro_font -oProject; .\Project.exe

int nbrJoueur=4; //définiti le nombre de joueurs
int JoueurPlay=1; //définit quel joueur doit jouer
int tour =1; //définit à quel tour du jeu nous sommes
int finM =0; //Permet au joueur de finir ses déplacements en appuyant sur entrée
int finP =0; //Permet au joueur de terminer ses déplacements du plateau

int escape = 0;
int SelectMenu = 0; //permet de valider la sélection dans le menu

int main() {
    int x1 = 90;                // coordonnées x et y du premier joueur
    int y1 = 650;

    int x2 = 670;               // ... deuxième joueur
    int y2 = 650;

    int x3 = 90;               // ... troisième joueur
    int y3 = 90;

    int x4 = 670;              // ... Quatrième joueur
    int y4 = 90;

    GC_MANAGER manager;
    GC_MANAGER_CREATE(&manager, 1000, 1000);

    GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W] = {0};
    GC_SPRITE extra_piece;
    int tab_index[MOVABLE_PARTS];
    initalisation_affichage_plateau(random_sans_remise(tab_index), tab_plateau, &extra_piece);

    BUTTON_DECAL list_button_decal_colonne[6];
    Init_list_button_decal(list_button_decal_colonne, &manager, 0, 1);
    BUTTON_DECAL list_button_decal_ligne[6];
    Init_list_button_decal(list_button_decal_ligne, &manager, 1, 0);

    GC_BUTTON button_rotation_posi, button_rotation_nega;                           //déclaration des boutons pour la rotation de la piece supplémentaire
    GC_BUTTON Button_Menu_1, Button_Menu_2, Button_Menu_3;                          //déclaration des boutons du menu

    GC_SPRITE sprite_rotation_posi, sprite_rotation_nega;
    GC_SPRITE MenuChoice1;
    GC_SPRITE MenuChoice2;
    GC_SPRITE MenuChoice3;
    GC_SPRITE Credits;                                                              // Initialisation de la page des crédits
    GC_SPRITE Pion_position1;                                                       // Initialisation des textures des quatre pions
    GC_SPRITE Pion_position2;                                                       // 2ème
    GC_SPRITE Pion_position3;                                                       // 3ème
    GC_SPRITE Pion_position4;                                                       // 4ème
    GC_SPRITE MENU_BACKGRD;                                                         // Initialisation de la texture de fond du menu (avec le titre du jeu)


    GC_BUTTON_INIT(&button_rotation_posi,
                   &manager.event);               // Initialisation des boutons permettant de faire pivoter la pièce supplémentaire
    GC_BUTTON_INIT(&button_rotation_nega, &manager.event);

    GC_BUTTON_INIT(&Button_Menu_1, &manager.event);                      //Initialisation des boutons du menu
    GC_BUTTON_INIT(&Button_Menu_2, &manager.event);
    GC_BUTTON_INIT(&Button_Menu_3, &manager.event);


    GC_SPRITE_INIT(&sprite_rotation_posi, BUTTON_ROTA_POSI);
    GC_SPRITE_INIT(&sprite_rotation_nega, BUTTON_ROTA_NEGA);

    GC_SPRITE_INIT(&MenuChoice1,
                   MENUCHOICE1_PATH);                                                      // Initialisation des textures pour les trois choix dans le menu de démarrage du jeu
    GC_SPRITE_INIT(&MenuChoice2, MENUCHOICE2_PATH);                                                      // Choix 2
    GC_SPRITE_INIT(&MenuChoice3, MENUCHOICE3_PATH);                                                      // Choix 3
    GC_SPRITE_INIT(&Credits,
                   FILE_ACCESS ".\\Import\\Labyrinthe_Credits.png");                            // Initialisation de la texture des crédits
    GC_SPRITE_INIT(&Pion_position1,
                   FILE_ACCESS ".\\Import\\Dessin_asterix_Image_Centre_Small.png");      // Import du premier joueur
    GC_SPRITE_INIT(&Pion_position2,
                   FILE_ACCESS ".\\Import\\Dessin_Idefix_Image_Small.png");              // Import du deuxième joeuur
    GC_SPRITE_INIT(&Pion_position3,
                   FILE_ACCESS ".\\Import\\Dessin_obelix_Image_Small.png");              // Import du troisième joueur
    GC_SPRITE_INIT(&Pion_position4,
                   FILE_ACCESS ".\\Import\\Dessin_Panoramix_Small.png");                 //Import du quatrième joueur
    GC_SPRITE_INIT(&MENU_BACKGRD,
                   FILE_ACCESS ".\\Import\\MENU_BACKGROUND.png");                          // import du fichier du fond d'écran du menu

    sprite_rotation_posi.gc_properties.gc_space.POSITION_X = EXTRA_PART_POS_X - 95;
    sprite_rotation_posi.gc_properties.gc_space.POSITION_Y = EXTRA_PART_POS_Y;
    sprite_rotation_posi.gc_properties.gc_space.ROTATION_Z = PI;

    sprite_rotation_nega.gc_properties.gc_space.POSITION_X = EXTRA_PART_POS_X + 95;
    sprite_rotation_nega.gc_properties.gc_space.POSITION_Y = EXTRA_PART_POS_Y;
    sprite_rotation_nega.gc_properties.gc_space.ROTATION_Z = PI;

    MenuChoice1.gc_properties.gc_space.POSITION_X = 250;                                                                      // Définit la position des différents choix du menu d'accueil
    MenuChoice1.gc_properties.gc_space.POSITION_Y = 400;

    MenuChoice2.gc_properties.gc_space.POSITION_X = 300;                                                                      // 2ème
    MenuChoice2.gc_properties.gc_space.POSITION_Y = 525;

    MenuChoice3.gc_properties.gc_space.POSITION_X = 400;                                                                      // 3ème
    MenuChoice3.gc_properties.gc_space.POSITION_Y = 650;

    button_rotation_posi.gc_properties.gc_space = sprite_rotation_posi.gc_properties.gc_space;
    button_rotation_nega.gc_properties.gc_space = sprite_rotation_nega.gc_properties.gc_space;

    Button_Menu_1.gc_properties.gc_space = MenuChoice1.gc_properties.gc_space;
    Button_Menu_2.gc_properties.gc_space = MenuChoice2.gc_properties.gc_space;
    Button_Menu_3.gc_properties.gc_space = MenuChoice3.gc_properties.gc_space;

    //TextMenu textMenu;
    //MenuInit(&textMenu);




    //MenuDisplay(&textMenu, &MENU_BACKGRD);



    while (1) {
        escape = 0;

        while (SelectMenu == 0) {
            GC_SPRITE_DRAW(&MENU_BACKGRD);
            GC_SPRITE_DRAW(&MenuChoice1);
            GC_SPRITE_DRAW(&MenuChoice2);
            GC_SPRITE_DRAW(&MenuChoice3);

            GC_MANAGER_UPDATE_EVENT(&manager);

            GC_BUTTON_UPDATE_EVENT(&Button_Menu_1);
            GC_BUTTON_UPDATE_EVENT(&Button_Menu_2);
            GC_BUTTON_UPDATE_EVENT(&Button_Menu_3);

            if (Button_Menu_1.state == 2) {
                SelectMenu = 1;
                break;
            }
            if (Button_Menu_2.state == 2) {
                SelectMenu = 2;
                break;
            }
            if (Button_Menu_3.state == 2) {
                SelectMenu = 3;
                break;
            }
            al_flip_display();
        }

        while (SelectMenu == 3) {
            GC_SPRITE_DRAW(&Credits);
            al_flip_display();
            if (manager.event.type == ALLEGRO_EVENT_KEY_DOWN) {
                // si clavier selon touche appuyée,
                switch (manager.event.keyboard.keycode) {
                    case ALLEGRO_KEY_ESCAPE :
                        escape = 1;
                        SelectMenu = 0;
                        break;
                }

                if (escape == 1) {
                    break;
                }

            }

            while (1) {
                GC_MANAGER_UPDATE_EVENT(&manager);

                if (manager.event.display.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
                    break;
                }

                New_Part_Deplacement(&extra_piece, &button_rotation_posi, &button_rotation_nega,
                                     list_button_decal_colonne,
                                     list_button_decal_ligne);

                int j = 0;
                for (int i = 0; i < 6; i++) {
                    if (list_button_decal_colonne[i].gc_button.state == 2) {
                        decal_colonne(tab_plateau, &extra_piece, j * 2 + 1, list_button_decal_colonne[i].sens_direct);
                        break;
                    } else if (list_button_decal_ligne[i].gc_button.state == 2) {
                        decal_ligne(tab_plateau, &extra_piece, j * 2 + 1, list_button_decal_ligne[i].sens_direct);
                        break;
                    }

                    if (j++ >= 2) {
                        j = 0;
                    }
                }

                Clear_Diplay(); // Ecran noir

                UPDATE_Part_Position_DRAW_Plateau(tab_plateau, &extra_piece);

                List_button_decal_draw(list_button_decal_colonne);
                List_button_decal_draw(list_button_decal_ligne);

                GC_SPRITE_DRAW(&sprite_rotation_posi);
                GC_SPRITE_DRAW(&sprite_rotation_nega);

                switch (nbrJoueur) {                                                                                             //initialise les textures en fonction du nombre de joueurs jouant au jeu
                    case 1:
                        InitCharacter(Pion_position1, x1, y1);
                        break;
                    case 2 : {
                        InitCharacter(Pion_position1, x1, y1);
                        InitCharacter(Pion_position2, x2, y2);
                        break;
                    }
                    case 3 : {
                        InitCharacter(Pion_position1, x1, y1);
                        InitCharacter(Pion_position2, x2, y2);
                        InitCharacter(Pion_position3, x3, y3);
                        break;
                    }
                    case 4 : {
                        InitCharacter(Pion_position1, x1, y1);
                        InitCharacter(Pion_position2, x2, y2);
                        InitCharacter(Pion_position3, x3, y3);
                        InitCharacter(Pion_position4, x4, y4);
                        break;
                    }
                }

                // fin de l'intialisation des positions des pièces et du plateau



                switch (JoueurPlay) {
                    case 1: {
                        if (manager.event.type == ALLEGRO_EVENT_KEY_DOWN) {
                            // si clavier selon touche appuyée,
                            switch (manager.event.keyboard.keycode) {
                                case ALLEGRO_KEY_UP:
                                    y1 -= PART_H;
                                    break;
                                case ALLEGRO_KEY_RIGHT:
                                    x1 += PART_W;
                                    break;
                                case ALLEGRO_KEY_DOWN:
                                    y1 += PART_H;
                                    break;
                                case ALLEGRO_KEY_LEFT:
                                    x1 -= PART_W;
                                    break;
                                case ALLEGRO_KEY_ENTER :
                                    finM = 1;
                                    break;
                                case ALLEGRO_KEY_ESCAPE :
                                    escape = 1;
                                    SelectMenu = 0;
                                    break;
                            }
                        }
                        break;
                    }

                    case 2: {
                        if (manager.event.type == ALLEGRO_EVENT_KEY_DOWN) {
                            // si clavier selon touche appuyée,
                            switch (manager.event.keyboard.keycode) {
                                case ALLEGRO_KEY_UP:
                                    y2 -= PART_H;
                                    break;
                                case ALLEGRO_KEY_RIGHT:
                                    x2 += PART_W;
                                    break;
                                case ALLEGRO_KEY_DOWN:
                                    y2 += PART_H;
                                    break;
                                case ALLEGRO_KEY_LEFT:
                                    x2 -= PART_W;
                                    break;
                                case ALLEGRO_KEY_ENTER :
                                    finM = 1;
                                    break;
                                case ALLEGRO_KEY_ESCAPE :
                                    escape = 1;
                                    SelectMenu = 0;
                                    break;
                            }
                        }
                    }

                    case 3: {
                        if (manager.event.type == ALLEGRO_EVENT_KEY_DOWN) {
                            // si clavier selon touche appuyée,
                            switch (manager.event.keyboard.keycode) {
                                case ALLEGRO_KEY_UP:
                                    y3 -= PART_H;
                                    break;
                                case ALLEGRO_KEY_RIGHT:
                                    x3 += PART_W;
                                    break;
                                case ALLEGRO_KEY_DOWN:
                                    y3 += PART_W;
                                    break;
                                case ALLEGRO_KEY_LEFT:
                                    x3 -= PART_H;
                                    break;
                                case ALLEGRO_KEY_ENTER :
                                    finM = 1;
                                    break;
                                case ALLEGRO_KEY_ESCAPE :
                                    escape = 1;
                                    SelectMenu = 0;
                                    break;
                            }
                        }
                    }

                    case 4: {
                        if (manager.event.type == ALLEGRO_EVENT_KEY_DOWN) {
                            // si clavier selon touche appuyée,
                            switch (manager.event.keyboard.keycode) {
                                case ALLEGRO_KEY_UP:
                                    y4 -= PART_H;
                                    break;
                                case ALLEGRO_KEY_RIGHT:
                                    x4 += PART_W;
                                    break;
                                case ALLEGRO_KEY_DOWN:
                                    y4 += PART_H;
                                    break;
                                case ALLEGRO_KEY_LEFT:
                                    x4 -= PART_W;
                                    break;
                                case ALLEGRO_KEY_ENTER :
                                    finM = 1;
                                    break;
                                case ALLEGRO_KEY_ESCAPE :
                                    escape = 1;
                                    SelectMenu = 0;
                                    break;
                            }
                        }
                    }
                }

                al_flip_display(); //affichage du plateau de base

                if (escape == 1) {
                    break;
                }
            }
        }
        //GC_MANAGER_DESTROY(&manager);
        //return 0;
    }
}