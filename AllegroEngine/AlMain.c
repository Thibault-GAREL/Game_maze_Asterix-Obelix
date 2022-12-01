#include "AlMain.h"


int main()
{
    int frame = 0;
    InitAllegro();

    ALLEGRO_DISPLAY* display = al_create_display(1920,1080);

    if (display == NULL)
    {
        fprintf(stderr, "Erreur dans la crétion de l'écran");
        return 1;
    }

    al_set_new_bitmap_flags(ALLEGRO_MIN_LINEAR | ALLEGRO_MAG_LINEAR);
    ALLEGRO_BITMAP* image = al_load_bitmap("Grass.png");

    Vector2Int imagePos = {100,100};

    GameImage myImage;
    
    LoadImage(&myImage, "Grass.png");
    myImage.pPosition = &imagePos;
    
    
    ALLEGRO_KEYBOARD_STATE kbdstate;

    /*int w = al_get_display_width(display);
	int h = al_get_display_height(display);
	int bw = al_get_bitmap_width(image);
	int bh = al_get_bitmap_height(image);

	if (h > w)
	{
		al_draw_scaled_bitmap(image, 0, 0, bw, bh, 0, (h - w) / 2, w, w, 0);
	}
	else
	{
		al_draw_scaled_bitmap(image, 0, 0, bw, bh, (w - h) / 2, 0, h, h, 0);
    }*/

    int bw = al_get_bitmap_width(image);
	int bh = al_get_bitmap_height(image);

    int offset_w = 100;
    int offset_h = 50;

    while (1) 
    {
        al_get_keyboard_state(&kbdstate);

        if (al_key_down(&kbdstate, ALLEGRO_KEY_E)) 
        {
            break;
        }

        al_clear_to_color(al_map_rgb(125,100,100));

        Vector2Int pos = *myImage.pPosition;
        
        al_draw_bitmap(myImage.pImage, pos.x, pos.y, 0);
        
        al_flip_display();

        frame++;
        al_rest(0.1);
    }

    al_destroy_display(display);
    
    return 0;
}

void InitAllegro()
{
    if (!al_init())
    {
        fprintf(stderr, "Erreur dans l'initialisation d'Allegro");
        return;
    }

    if (!al_install_keyboard())
    {
        fprintf(stderr, "Erreur dans l'installation du clavier");
    }

    if (!al_init_image_addon())
    {
        fprintf(stderr, "Erreur dans l'initialisation de allegro_image");
        return;
    }    
}

