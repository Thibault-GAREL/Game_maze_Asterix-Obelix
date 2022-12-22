#include "fonction_t.h"

// gcc -g -Wall .\main_t.c .\Gc.c .\fonction_t.c  -lallegro -lallegro_image -lallegro_font -oProject; .\Project.exe

int main()
{
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

    while (1)
    {
        GC_MANAGER_UPDATE_EVENT(&manager);

        if (manager.event.display.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
        {
            break;
        }

        GC_BUTTON_UPDATE_EVENT(&button_rotation_posi);
        GC_BUTTON_UPDATE_EVENT(&button_rotation_nega);

        if (button_rotation_posi.state == 2)
        {
            extra_piece.gc_properties.gc_space.ROTATION_Z += PI / 2;
        }
        else if (button_rotation_nega.state == 2)
        {
            extra_piece.gc_properties.gc_space.ROTATION_Z -= PI / 2;
        }

        List_button_decal_update_event(list_button_decal_colonne);
        List_button_decal_update_event(list_button_decal_ligne);

        int j = 0;
        for (int i = 0; i < 6; i++)
        {
            if (list_button_decal_colonne[i].gc_button.state == 2)
            {
                decal_colonne(tab_plateau, &extra_piece, j * 2 + 1, list_button_decal_colonne[i].sens_direct);
                break;
            }
            else if (list_button_decal_ligne[i].gc_button.state == 2)
            {
                decal_ligne(tab_plateau, &extra_piece, j * 2 + 1, list_button_decal_ligne[i].sens_direct);
                break;
            }

            if (j++ >= 2)
            {
                j = 0;
            }
        }

        Clear_Diplay();

        UPDATE_Part_Position_DRAW_Plateau(tab_plateau, &extra_piece);

        List_button_decal_draw(list_button_decal_colonne);
        List_button_decal_draw(list_button_decal_ligne);

        GC_SPRITE_DRAW(&sprite_rotation_posi);
        GC_SPRITE_DRAW(&sprite_rotation_nega);

        al_flip_display();
    }

    GC_MANAGER_DESTROY(&manager);

    return 0;
}