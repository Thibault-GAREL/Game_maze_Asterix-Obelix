#include "fonction_t.h"

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

    while (1) {

        GC_MANAGER_UPDATE_EVENT(&manager);

        if (manager.event.display.type == ALLEGRO_EVENT_DISPLAY_CLOSE) {
            break;
        }

        List_button_decal_update_event(list_button_decal_colonne);
        List_button_decal_update_event(list_button_decal_ligne);

        List_button_decal_draw(list_button_decal_ligne);
        
        int j=0;
        for (int i = 0; i < 6; i++)
        {
            if (list_button_decal_colonne[i].gc_button.state == 2)
            {
                decal_colonne(tab_plateau, &extra_piece, j*2 +1, list_button_decal_colonne[i].sens_direct);
                Clear_Diplay();
                UPDATE_Part_Position_DRAW_Plateau(tab_plateau, &extra_piece);
            }
            if (j++ >= 2)
            {
                j=0;
            }          
        }

        j=0;
        for (int i = 0; i < 6; i++)
        {
            if (list_button_decal_ligne[i].gc_button.state == 2)
            {
                decal_ligne(tab_plateau, &extra_piece, j*2+ 1, list_button_decal_ligne[i].sens_direct);
                Clear_Diplay();
                UPDATE_Part_Position_DRAW_Plateau(tab_plateau, &extra_piece);
            }
            if (j++ >= 2)
            {
                j=0;
            }
        }

        List_button_decal_draw(list_button_decal_colonne);
        List_button_decal_draw(list_button_decal_ligne);

        al_flip_display();
    }

    GC_MANAGER_DESTROY(&manager);

    return 0;
}