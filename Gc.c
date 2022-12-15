#include "Gc.h"


bool GC_INIT_ALLEGRO()
{
    //al_set_new_bitmap_flags(ALLEGRO_MIN_LINEAR | ALLEGRO_MAG_LINEAR) ;

    if (!al_init())
    {
        fprintf(stderr, "Erreur dans l'initialisation d'Allegro");
        return false;
    }

    if (!al_install_keyboard())
    {
        fprintf(stderr, "Erreur dans l'installation du clavier");
        return false;
    }

    if (!al_init_image_addon())
    {
        fprintf(stderr, "Erreur dans l'initialisation de allegro_image");
        return false;
    }

    if (!al_init_font_addon())
    {
        fprintf(stderr, "Erreur dans l'initialisation de allegro_font");
        return false;
    }

    return true;
}


void GC_SPACE_INIT(GC_SPACE* gc_space)
{
    gc_space->POSITION_X = 0;
    gc_space->POSITION_Y = 0;
    gc_space->ROTATION_Z = 0;
    gc_space->HEIGH = 0;
    gc_space->WIDTH = 0;
}


void GC_PROPERTIES_INIT(GC_PROPERTIES* gc_properties)
{
    gc_properties->ERROR = 0;

    int nameSize = sizeof(gc_properties->name);
    for (int i = 0; i < nameSize; i++)
    {
        gc_properties->name[i] = 32;
    }
    gc_properties->name[nameSize] = '\0';
    
    GC_SPACE_INIT(&gc_properties->gc_space);
}


void GC_BUTTON_INIT(GC_BUTTON* gc_button)
{
    int textSize = sizeof(gc_button->text);
    for (int i = 0; i < textSize - 1; i++)
    {
        printf("\n<DEBUG> Init button text %d", i);
        gc_button->text[i] = 32;
    }
    gc_button->text[textSize - 1] = '\0';

    GC_PROPERTIES_INIT(&gc_button->gc_properties);
}


void GC_INPUT_FIELD_INIT(GC_INPUT_FIELD* gc_input_field)
{
    int textSize = sizeof(gc_input_field->text);
    for (int i = 0; i < textSize; i++)
    {
        gc_input_field->text[i] = 32;
    }
    gc_input_field->text[textSize] = '\0';

    gc_input_field->cursor = 0;

    gc_input_field->isValidated = false;

    GC_PROPERTIES_INIT(&gc_input_field->gc_properties);
}

int GC_INPUT_FIELD_GET_CURSOR_OFFSET(GC_INPUT_FIELD* gc_input_field)
{
    return sizeof(gc_input_field->text) - 1 - gc_input_field->cursor;
}

void GC_INPUT_FIELD_UPDATE_EVENT(GC_INPUT_FIELD* gc_input_field, ALLEGRO_EVENT event)
{
    if (event.type != ALLEGRO_EVENT_KEY_CHAR)
    {
        printf("\n<WARNING> [GC_INPUT_FIELD_UPDATE_EVENT] Invalid event");
        return;
    }
    
    if (event.keyboard.unichar < 0)
    {
        printf("\n<ERROR> [GC_INPUT_FIELD_UPDATE_EVENT] Invalid input: %d", event.keyboard.unichar);
        return;
    }

    if (gc_input_field->isValidated)
    {
        printf("\n<ERROR> [GC_INPUT_FIELD_UPDATE_EVENT] Input field already validated");
        gc_input_field->gc_properties.ERROR = 2;
        return;
    }
    
    
    if (GC_INPUT_FIELD_GET_CURSOR_OFFSET(gc_input_field) < 0)
    {
        printf("\n<ERROR> [GC_INPUT_FIELD_UPDATE_EVENT] Cursor too high: %d", gc_input_field->cursor);
        gc_input_field->gc_properties.ERROR = 2;
        return;
    }
    
    gc_input_field->text[gc_input_field->cursor++] = event.keyboard.unichar;
    printf("\n<DEBUG> [GC_INPUT_FIELD_UPDATE_EVENT] INPUT: %c", event.keyboard.unichar);

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
        printf("\n<ERROR> [GC_SPRITE_INIT] Can't load bitmap file");
        gc_sprite->gc_properties.ERROR = 2;
    }
}

void GC_SPRITE_DRAW(GC_SPRITE gc_sprite)
{
    al_draw_bitmap(gc_sprite.pBitmap, gc_sprite.gc_properties.gc_space.POSITION_X, gc_sprite.gc_properties.gc_space.POSITION_X, 0);
}


void GC_TEXT_INIT(GC_TEXT* gc_text, char* text)
{
    gc_text->text = text;

    gc_text->police = al_create_builtin_font();

    gc_text->color = al_map_rgb(255,255,255);

    GC_PROPERTIES_INIT(&gc_text->gc_properties);
}

void GC_TEXT_DRAW_F(GC_TEXT gc_text)
{
    al_draw_textf(gc_text.police, gc_text.color, gc_text.gc_properties.gc_space.POSITION_X, gc_text.gc_properties.gc_space.POSITION_Y, 0, gc_text.text);
}
