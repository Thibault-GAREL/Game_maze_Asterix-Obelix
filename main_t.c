#include "fonction_t.h"
// gcc -g -Wall .\main_t.c .\Gc.c .\fonction_t.c  -lallegro -lallegro_image -lallegro_font -oProject; .\Project.exe



int main() {
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

    GC_BUTTON button_rotation_posi, button_rotation_nega;
    GC_SPRITE sprite_rotation_posi, sprite_rotation_nega;

    GC_BUTTON_INIT(&button_rotation_posi, &manager.event);
    GC_BUTTON_INIT(&button_rotation_nega, &manager.event);

    GC_SPRITE_INIT(&sprite_rotation_posi, BUTTON_PATH);
    GC_SPRITE_INIT(&sprite_rotation_nega, BUTTON_PATH);

    sprite_rotation_posi.gc_properties.gc_space.POSITION_X = EXTRA_PART_POS_X - 95;
    sprite_rotation_posi.gc_properties.gc_space.POSITION_Y = EXTRA_PART_POS_Y;
    sprite_rotation_posi.gc_properties.gc_space.ROTATION_Z = PI;

    sprite_rotation_nega.gc_properties.gc_space.POSITION_X = EXTRA_PART_POS_X + 95;
    sprite_rotation_nega.gc_properties.gc_space.POSITION_Y = EXTRA_PART_POS_Y;
    sprite_rotation_nega.gc_properties.gc_space.ROTATION_Z = PI;

    button_rotation_posi.gc_properties.gc_space = sprite_rotation_posi.gc_properties.gc_space;
    button_rotation_nega.gc_properties.gc_space = sprite_rotation_nega.gc_properties.gc_space;

    GC_SPRITE Pion_position1;
    GC_SPRITE Pion_position2;
    GC_SPRITE Pion_position3;
    GC_SPRITE Pion_position4;

    GC_SPRITE_INIT(&Pion_position1, FILE_ACCESS ".\\Import\\Dessin_asterix_Image_Centre_Small.png");
    GC_SPRITE_INIT(&Pion_position2, FILE_ACCESS ".\\Import\\Dessin_Idefix_Image_Small.png");
    GC_SPRITE_INIT(&Pion_position3, FILE_ACCESS ".\\Import\\Dessin_obelix_Image_Small.png");
    GC_SPRITE_INIT(&Pion_position4, FILE_ACCESS ".\\Import\\Dessin_Panoramix_Small.png");


    TextMenu textMenu;
    MenuInit(&textMenu);

    while (SelectMenu==0) {

        MenuDisplay(&textMenu);


        if (manager.event.type == ALLEGRO_EVENT_KEY_DOWN) {
            // si clavier selon touche appuyée,
            switch (manager.event.keyboard.keycode) {
                case ALLEGRO_KEY_A : {size1=28; size2=24; size3=24;} break;
                case ALLEGRO_KEY_PAD_2 : {size1=24; size2=28; size3=24;} break;
                case ALLEGRO_KEY_PAD_3 : {size1=24; size2=24; size3=28;} break;
            }
        }
        switch (SelectMenu) {
            case 0: break;
            case 1 : al_clear_to_color(al_map_rgb(0,0,0)); break;
        }
    }

    while (1) {
        GC_MANAGER_UPDATE_EVENT(&manager);

        if (manager.event.display.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            break;
        }

        New_Part_Deplacement(&extra_piece, &button_rotation_posi, &button_rotation_nega, list_button_decal_colonne, list_button_decal_ligne);

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

        switch (nbrJoueur){ //initialise les textures en fonction du nombre de joueurs jouant au jeu
            case 1: 
                InitCharacter(Pion_position1, x1, y1); 
                break;
            case 2 : 
                { InitCharacter(Pion_position1, x1, y1); InitCharacter(Pion_position2, x2, y2); 
                break; }
            case 3 : 
                { InitCharacter(Pion_position1, x1, y1); 
                InitCharacter(Pion_position2, x2, y2); InitCharacter(Pion_position3, x3, y3); 
                break; }
            case 4 : 
                {InitCharacter(Pion_position1, x1, y1); 
                InitCharacter(Pion_position2, x2, y2); 
                InitCharacter(Pion_position3, x3, y3); 
                InitCharacter(Pion_position4, x4, y4); 
                break; }
        }

        // fin de l'intialisation des positions des pièces et du plateau



        switch (JoueurPlay){
            case 1:{
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
                        }
                    }
                }
        }

        al_flip_display(); //affichage du plateau de base
    }

    GC_MANAGER_DESTROY(&manager);
    return 0;
}