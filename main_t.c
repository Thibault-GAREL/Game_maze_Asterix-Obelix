#include "fonction_t.h"

int main() {

    GC_SPRITE tab_plateau[7][7] = {0};

    GC_MANAGER manager;
    GC_MANAGER_CREATE(&manager, 1000, 1000);


    int tab_index[50] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
                         26, 27, 28, 29, 30, 31, 32, 33};

    random_sans_remise(tab_index);

    initalisation_affichage_plateau(tab_index, tab_plateau);


    //GC_SPRITE_INIT(&tab_plateau[7][0], adresse_tuile_mobile[tab_index[33]]);
    //tab_plateau[7][0].gc_properties.gc_space.POSITION_Y = 95 * 8;
    //GC_SPRITE_DRAW(&tab_plateau[7][0]);

    //tab_plateau[0][1].gc_properties.gc_space.POSITION_X = 95 * 8;
    //tab_plateau[0][1].gc_properties.gc_space.POSITION_Y =  tab_plateau [0] [1].gc_properties.gc_space.POSITION_Y + 95;
    //GC_SPRITE_DRAW(tab_plateau  [0][1]);

    GC_SPRITE sprite;
    GC_SPRITE_INIT(&sprite, ".\\Import\\Fleche_1.PNG"); //"..\\Import\\Fleche_1.PNG"

    sprite.gc_properties.gc_space.POSITION_X = 190;

    GC_BUTTON button1;
    GC_BUTTON_INIT(&button1, &manager.event);
    button1.gc_properties.gc_space = sprite.gc_properties.gc_space;


    while (1) {
        //al_clear_to_color(al_map_rgb(0,0,0));
        GC_MANAGER_UPDATE_EVENT(&manager);
        if (manager.event.display.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            break;
        }
        GC_BUTTON_UPDATE_EVENT(&button1);
        printf("\n[%d] (%d; %d), mouse=%d", button1.state, button1.event->mouse.x, button1.event->mouse.y,
               button1.isMouseOver);
        GC_SPRITE_DRAW(&sprite);

        al_flip_display();

        if (button1.state == 2) {
            tab_plateau[6][1].gc_properties.gc_space.POSITION_X = 0;
            tab_plateau[6][1].gc_properties.gc_space.POSITION_Y = 95 * 8;
            GC_SPRITE_DRAW(&tab_plateau[6][1]);

            for (int i = 0; i < 7; ++i) {
                tab_plateau[i][1].gc_properties.gc_space.POSITION_Y = tab_plateau[i][1].gc_properties.gc_space.POSITION_Y + 95;
                GC_SPRITE_DRAW(&tab_plateau[i][1]);

            }

            tab_plateau[7][0].gc_properties.gc_space.POSITION_X = 190;
            tab_plateau[7][0].gc_properties.gc_space.POSITION_Y = 95;
            GC_SPRITE_DRAW(&tab_plateau [7][0]);



        }
    }
    return 0;
}