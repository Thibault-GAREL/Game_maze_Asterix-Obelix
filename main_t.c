#include "fonction_t.h"

int main() 
{
    GC_MANAGER manager;
    GC_MANAGER_CREATE(&manager, 1000, 1000);

    GC_SPRITE tab_plateau[PLATEAU_H][PLATEAU_W] = {0};
    GC_SPRITE extra_piece;
    int tab_index[MOVABLE_PARTS];
    initalisation_affichage_plateau(random_sans_remise(tab_index), tab_plateau, &extra_piece);


    GC_SPRITE tab_buttons_sprite[1][1];
    GC_SPRITE_INIT(&tab_buttons_sprite[0][0], "..\\Import\\Fleche_1.PNG"); //"..\\Import\\Fleche_1.PNG"

    tab_buttons_sprite[0][0].gc_properties.gc_space.POSITION_X = PART_W *2;

    GC_BUTTON button1;
    GC_BUTTON_INIT(&button1, &manager.event);
    button1.gc_properties.gc_space = tab_buttons_sprite[0][0].gc_properties.gc_space;



    //GC_SPRITE tab_buttons_sprite[0][0];
    GC_SPRITE_INIT(&tab_buttons_sprite[0][0], "..\\Import\\Fleche_1.PNG"); //"..\\Import\\Fleche_1.PNG"

    tab_buttons_sprite[0][0].gc_properties.gc_space.POSITION_X = PART_H *4;

    GC_BUTTON button2;
    GC_BUTTON_INIT(&button2, &manager.event);
    button2.gc_properties.gc_space = tab_buttons_sprite[0][0].gc_properties.gc_space;

    GC_SPRITE_INIT(&tab_buttons_sprite[0][0], "..\\Import\\Fleche_1.PNG"); //"..\\Import\\Fleche_1.PNG"

    tab_buttons_sprite[0][0].gc_properties.gc_space.POSITION_X = PART_H *6;

    GC_BUTTON button3;
    GC_BUTTON_INIT(&button3, &manager.event);
    button3.gc_properties.gc_space = tab_buttons_sprite[0][0].gc_properties.gc_space;

    while (1) {
        //al_clear_to_color(al_map_rgb(0,0,0));
        GC_MANAGER_UPDATE_EVENT(&manager);
        if (manager.event.display.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            break;
        }
        GC_BUTTON_UPDATE_EVENT(&button1);
        printf("\n[%d] (%d; %d), mouse=%d", button1.state, button1.event->mouse.x, button1.event->mouse.y,
               button1.isMouseOver);
        GC_BUTTON_UPDATE_EVENT(&button2);
        GC_BUTTON_UPDATE_EVENT(&button3);
        GC_SPRITE_DRAW(&tab_buttons_sprite[0][0]);

        if (button1.state == 2)
        {
            decal_colonne(tab_plateau, &extra_piece, 1, true);
            Clear_Diplay(tab_plateau, &extra_piece, tab_buttons_sprite);

        }
        if (button2.state == 2)
        {
            decal_colonne(tab_plateau, &extra_piece, 3, true);
            Clear_Diplay(tab_plateau, &extra_piece, tab_buttons_sprite);

        }
        if (button3.state == 2)
        {
            decal_colonne(tab_plateau, &extra_piece, 5, true);
            Clear_Diplay(tab_plateau, &extra_piece, tab_buttons_sprite);

        }

        al_flip_display();
    }

    GC_MANAGER_DESTROY(&manager);

    return 0;
}