#include "Gc.h"


bool GC_INIT_ALLEGRO()
{
    //al_set_new_bitmap_flags(ALLEGRO_MIN_LINEAR | ALLEGRO_MAG_LINEAR) ;

    if (!al_init())
    {
        fprintf(stderr, "\n<ERROR> dans l'initialisation d'Allegro");
        return false;
    }

    if (!al_install_keyboard())
    {
        fprintf(stderr, "\n<ERROR> dans l'installation du clavier");
        return false;
    }

    if (!al_install_mouse())
    {
        fprintf(stderr, "\n<ERROR> dans l'installation de la souris");
        return false;
    }

    if (!al_init_image_addon())
    {
        fprintf(stderr, "\n<ERROR> dans l'initialisation de allegro_image");
        return false;
    }
    
    al_init_font_addon();

    al_init_ttf_addon();

    //Pour les certaines version d'Allegro
    /*if (!al_init_font_addon())
    {
        fprintf(stderr, "Erreur dans l'initialisation de allegro_font");
        return false;
    }*/

    return true;
}


void GC_MANAGER_CREATE(GC_MANAGER* pManager, int width, int height)
{       
    if (!GC_INIT_ALLEGRO())
    {
        fprintf(stderr, "\n<ERROR> Impossible to initialize allegro and his addons");
        return;
    }

    if ((pManager->display = al_create_display(width, height)) == NULL)
    {
        fprintf(stderr, "\n<ERROR> Impossible to create diplay");
        return;
    }

    if (!(pManager->events = al_create_event_queue()))
    {
        fprintf(stderr, "\n<ERROR> Impossible to create event queue");
        return;
    }

    al_register_event_source(pManager->events, al_get_keyboard_event_source());
    /*if (!al_is_event_source_registered(pManager->events, al_get_keyboard_event_source())) //Pour les certaines version d'Allegro
    {
        fprintf(stderr, "\n<FAIL> Impossible to register keyboard event source");
    }*/
    
    al_register_event_source(pManager->events, al_get_mouse_event_source());
    /*if (!al_is_event_source_registered(pManager->events, al_get_mouse_event_source())) //Pour les certaines version d'Allegro
    {
        fprintf(stderr, "\n<FAIL> Impossible to register mouse event source");
    }*/

    al_register_event_source(pManager->events, al_get_display_event_source(pManager->display));
    /*if (!al_is_event_source_registered(pManager->events, al_get_display_event_source(pManager->display))) //Pour les certaines version d'Allegro
    {
        fprintf(stderr, "\n<FAIL> Impossible to register keyboard event source");
    }*/

    ALLEGRO_EVENT emptyEvent = {0};
    pManager->event = emptyEvent;
    pManager->event_time = 0;
}

void GC_MANAGER_UPDATE_EVENT(GC_MANAGER* pManager)
{
    ALLEGRO_EVENT emptyEvent = {0};
    pManager->event = emptyEvent;

    if (pManager->event_time == 0)
    {
        al_wait_for_event(pManager->events, &pManager->event);
    }
    else if (pManager->event_time > 0)
    {
        al_wait_for_event_timed(pManager->events, &pManager->event, pManager->event_time);
    }
    else
    {
        fprintf(stderr, "\n<ERROR> event_time doit être positif");
    }
}

void GC_MANAGER_DESTROY(GC_MANAGER* pManger)
{
    al_destroy_display(pManger->display);
}


void GC_SPACE_INIT(GC_SPACE* gc_space)
{
    gc_space->POSITION_X = 0;
    gc_space->POSITION_Y = 0;
    gc_space->ROTATION_Z = 0;
    gc_space->HEIGHT = 0;
    gc_space->WIDTH = 0;
}


void GC_PROPERTIES_INIT(GC_PROPERTIES* gc_properties)
{

    /*if (!gc_properties->pManager)
    {
        fprintf(stderr, "\n<ERROR> Impossible to initialize properties: invalid pManager");
        gc_properties->error = 1;
        return;
    }*/

    gc_properties->error = 0;

    int nameSize = sizeof(gc_properties->name);
    for (int i = 0; i < nameSize; i++)
    {
        gc_properties->name[i] = 32;
    }
    gc_properties->name[nameSize] = '\0';
    
    GC_SPACE_INIT(&gc_properties->gc_space);
}


void GC_BUTTON_INIT(GC_BUTTON* gc_button, ALLEGRO_EVENT* event)
{
    int textSize = sizeof(gc_button->text);
    for (int i = 0; i < textSize - 1; i++)
    {
        //printf("\n<DEBUG> Init button text %d", i);
        gc_button->text[i] = '\0';
    }
    gc_button->text[textSize - 1] = '\0';

    gc_button->isMouseOver = false;
    gc_button->state = GC_BUTTON_STATE_NONE;

    gc_button->event = event;

    GC_PROPERTIES_INIT(&gc_button->gc_properties);
}

void GC_BUTTON_UPDATE_EVENT(GC_BUTTON* gc_button)
{
    if (gc_button->state == GC_BUTTON_STATE_RELEASED)
    {
        gc_button->state = GC_BUTTON_STATE_NONE;
    }

    if (gc_button->event->type == ALLEGRO_EVENT_MOUSE_AXES)
    {
        GC_SPACE btSpace = gc_button->gc_properties.gc_space;

        if (btSpace.POSITION_X <= gc_button->event->mouse.x 
        && btSpace.POSITION_Y <= gc_button->event->mouse.y 
        && btSpace.POSITION_X + btSpace.WIDTH >= gc_button->event->mouse.x 
        && btSpace.POSITION_Y + btSpace.HEIGHT >= gc_button->event->mouse.y)
        {
            gc_button->isMouseOver = true;
        }
        else
        {
            gc_button->isMouseOver = false;
        }
    } 
    else if (gc_button->event->type == ALLEGRO_EVENT_MOUSE_BUTTON_DOWN && gc_button->isMouseOver)
    {
        gc_button->state = GC_BUTTON_STATE_PRESSED;
    }
    else if (gc_button->event->type == ALLEGRO_EVENT_MOUSE_BUTTON_UP && gc_button->state == GC_BUTTON_STATE_PRESSED)
    {
        gc_button->state = GC_BUTTON_STATE_RELEASED;
    }
}


void GC_INPUT_FIELD_INIT(GC_INPUT_FIELD* gc_input_field, ALLEGRO_EVENT* event)
{
    int textSize = sizeof(gc_input_field->text);
    for (int i = 0; i < textSize; i++)
    {
        gc_input_field->text[i] = '\0';
    }
    gc_input_field->text[textSize] = '\0';

    gc_input_field->cursor = 0;

    gc_input_field->isValidated = false;

    gc_input_field->event = event;

    GC_PROPERTIES_INIT(&gc_input_field->gc_properties);
}

int GC_INPUT_FIELD_GET_CURSOR_OFFSET(GC_INPUT_FIELD* gc_input_field)
{
    return sizeof(gc_input_field->text) - 1 - gc_input_field->cursor;
}

void GC_INPUT_FIELD_UPDATE_EVENT(GC_INPUT_FIELD* gc_input_field)
{
    if (gc_input_field->event->type != ALLEGRO_EVENT_KEY_CHAR)
    {
        //printf("\n<DEBUG> [GC_INPUT_FIELD_UPDATE_EVENT] Invalid event: %d", gc_input_field->event->type);
        return;
    }  

    if (gc_input_field->isValidated)
    {
        printf("\n<ERROR> [GC_INPUT_FIELD_UPDATE_EVENT] Input field already validated");
        gc_input_field->gc_properties.error = 2;
        return;
    }
    
    if (GC_INPUT_FIELD_GET_CURSOR_OFFSET(gc_input_field) < 0)
    {
        printf("\n<ERROR> [GC_INPUT_FIELD_UPDATE_EVENT] Cursor too high: %d", gc_input_field->cursor);
        gc_input_field->gc_properties.error = 2;
        return;
    }

    if (gc_input_field->event->keyboard.unichar < 0)
    {
        //printf("\n<DEBUG> [GC_INPUT_FIELD_UPDATE_EVENT] Invalid input: %d", gc_input_field->event->keyboard.unichar);
        return;
    }

    if (gc_input_field->event->keyboard.unichar == GC_KEY_BACKSPACE)
    {
        //printf("\n<DEBUG> [GC_INPUT_FIELD_UPDATE_EVENT] BKS");

        if (gc_input_field->cursor > 0)
        {
            gc_input_field->text[--gc_input_field->cursor] = '\0';
        }
        
        return;
    }

    if (gc_input_field->event->keyboard.unichar == GC_KEY_ENTER)
    {
        //printf("\n<DEBUG> [GC_INPUT_FIELD_UPDATE_EVENT] ENTER");

        if (gc_input_field->cursor > 0)
        {
            gc_input_field->isValidated = true;
        }
        
        return;
    }
    
    gc_input_field->text[gc_input_field->cursor++] = gc_input_field->event->keyboard.unichar;

    if (GC_INPUT_FIELD_GET_CURSOR_OFFSET(gc_input_field) < 0)
    {
        gc_input_field->isValidated = true;
    }
}


void GC_SPRITE_INIT(GC_SPRITE* gc_sprite, const char *filePath)
{
    GC_PROPERTIES_INIT(&gc_sprite->gc_properties);

    gc_sprite->pBitmap = al_load_bitmap(filePath);

    if (gc_sprite->pBitmap ==  NULL)
    {
        printf("\n<ERROR> [GC_SPRITE_INIT] Can't load bitmap file: \'%s\'", filePath);
        gc_sprite->gc_properties.error = 2;
    }

    gc_sprite->gc_properties.gc_space.HEIGHT = al_get_bitmap_height(gc_sprite->pBitmap);
    gc_sprite->gc_properties.gc_space.WIDTH = al_get_bitmap_width(gc_sprite->pBitmap);
}

void GC_SPRITE_DRAW(GC_SPRITE* gc_sprite)
{
    //al_draw_bitmap(gc_sprite.pBitmap, gc_sprite.gc_properties.gc_space.POSITION_X, gc_sprite.gc_properties.gc_space.POSITION_Y, 0);
    al_draw_rotated_bitmap(gc_sprite->pBitmap,
        (al_get_bitmap_width(gc_sprite->pBitmap)+1)/2,
        (al_get_bitmap_height(gc_sprite->pBitmap)+1)/2,
        gc_sprite->gc_properties.gc_space.POSITION_X + (al_get_bitmap_width(gc_sprite->pBitmap)+1)/2, 
        gc_sprite->gc_properties.gc_space.POSITION_Y + (al_get_bitmap_height(gc_sprite->pBitmap)+1)/2,
        gc_sprite->gc_properties.gc_space.ROTATION_Z,
        0);
}


void GC_TEXT_INIT(GC_TEXT* gc_text, char* text_out)
{
    gc_text->text = text_out;

    gc_text->al_flag = 0;

    gc_text->police = al_create_builtin_font();

    gc_text->color = al_map_rgb(255,255,255);

    GC_PROPERTIES_INIT(&gc_text->gc_properties);
}

void GC_TEXT_SET_FONT(GC_TEXT* gc_text, char* filePath, int size)
{
    gc_text->police = al_load_ttf_font("..\\Import\\BruceForeverRegular.ttf",  size , 0);
}

void GC_TEXT_DRAW(GC_TEXT* gc_text)
{
    al_draw_text(gc_text->police, gc_text->color, gc_text->gc_properties.gc_space.POSITION_X, gc_text->gc_properties.gc_space.POSITION_Y, gc_text->al_flag, gc_text->text);
}

/*
 *
 * Gc by Matthieu Gros
 *
 */