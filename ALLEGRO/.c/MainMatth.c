#include "../.h/Gc.h"
//gcc -g -Wall .\MainMatth.c .\Gc.c .\fonction_t.c  -lallegro -lallegro_image -lallegro_font -lallegro_ttf -oProject; .\Project.exe
/* Exemple d'utilisation d'un Boutton */

int main()
{
    GC_MANAGER manager;
    GC_MANAGER_CREATE(&manager, 640, 420);

    GC_SPRITE sprite;
    GC_SPRITE_INIT(&sprite, "Import\\tuile_1.png");

    GC_BUTTON button;
    GC_BUTTON_INIT(&button, &manager.event);
    button.gc_properties.gc_space = sprite.gc_properties.gc_space;

    while (1)
    {
        GC_MANAGER_UPDATE_EVENT(&manager);

        if (manager.event.display.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
        {
            break;
        }

        GC_BUTTON_UPDATE_EVENT(&button);
        printf("\n[%d] (%d; %d), mouse=%d", button.state, button.event->mouse.x, button.event->mouse.y, button.isMouseOver);
        GC_SPRITE_DRAW(&sprite);
    
        al_flip_display();
    }

    GC_MANAGER_DESTROY(&manager);
}/**/



/* Exemple d'entrée texte 

int main()
{
    GC_MANAGER manager;
    GC_MANAGER_CREATE(&manager, 640, 420);

    GC_INPUT_FIELD gc_input_field;
    GC_INPUT_FIELD_INIT(&gc_input_field, &manager.event);
    
    GC_TEXT gc_text;
    GC_TEXT_INIT(&gc_text, gc_input_field.text);

    while (!gc_input_field.isValidated)
    {
        GC_MANAGER_UPDATE_EVENT(&manager);

        if (manager.event.display.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
        {
            break;
        }

        GC_INPUT_FIELD_UPDATE_EVENT(&gc_input_field);       
        printf("\n<DEBUG> [GC_INPUT_FIELD_UPDATE_EVENT] INPUT: [%d] --> \'%c\'", gc_input_field.event->keyboard.unichar, gc_input_field.event->keyboard.unichar);
        al_clear_to_color(al_map_rgb(0,0,0));
        GC_TEXT_DRAW(&gc_text); 

        al_flip_display();
    }
    printf("\n<OUTPUT> \'%s\'", gc_text.text);

    GC_MANAGER_DESTROY(&manager);
}/**/



/* Exemple d'affichage de texte 

int main()
{
    GC_MANAGER manager;
    GC_MANAGER_CREATE(&manager, 640, 420);
    
    char text_out[] = "Texte 1";

    GC_TEXT gc_text;
    GC_TEXT_INIT(&gc_text, text_out);

    GC_TEXT_DRAW(&gc_text);
    al_flip_display();
    al_rest(2);

    al_clear_to_color(al_map_rgb(0,0,0));

    text_out[6] = '2';

    GC_TEXT_DRAW(&gc_text);
    al_flip_display();
    al_rest(2);

    GC_MANAGER_DESTROY(&manager);
}/**/
