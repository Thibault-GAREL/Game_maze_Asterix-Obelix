#ifndef STD
#define STD
    #include <stdio.h>
#endif

#ifndef ALLEGRO_LIB
#define ALLEGRO_LIB
    #include <allegro5/allegro.h>
    #include <allegro5/allegro_image.h>
    #include <allegro5/allegro_font.h>
#endif

#ifndef GCINITALLEGRO
#define GCINITALLEGRO

    bool GC_INIT_ALLEGRO();

#endif

#ifndef SPACE
#define SPACE

    typedef struct
    {
        float POSITION_X;
        float POSITION_Y;
        float ROTATION_Z;
        int HEIGH;
        int WIDTH;
    }GC_SPACE;

    void GC_SPACE_INIT(GC_SPACE* gc_space);

#endif

#ifndef GCPROPERTIES
#define GCPROPERTIES

    typedef struct
    {
        unsigned int ERROR; // 0 = pas d'erreur // 1 => Pas de solution // 2 => Réinitializer le composent  
        char name[100];
        GC_SPACE gc_space;
    }GC_PROPERTIES;

    void GC_PROPERTIES_INIT(GC_PROPERTIES* gc_properties);

#endif

#ifndef GC_COMPONENT
#define GC_COMPONENT

    typedef struct
    {
        char text[200];
        GC_PROPERTIES gc_properties;
    }GC_BUTTON;

    void GC_BUTTON_INIT(GC_BUTTON* gc_button);


    typedef struct
    {
        char text[10];
        int cursor;
        bool isValidated;
        GC_PROPERTIES gc_properties;
    }GC_INPUT_FIELD;

    void GC_INPUT_FIELD_INIT(GC_INPUT_FIELD* gc_input_field);
    int GC_INPUT_FIELD_GET_CURSOR_OFFSET(GC_INPUT_FIELD* gc_input_field);
    void GC_INPUT_FIELD_UPDATE_EVENT(GC_INPUT_FIELD* gc_input_field, ALLEGRO_EVENT event);


    typedef struct
    {
        ALLEGRO_BITMAP* pBitmap;
        GC_PROPERTIES gc_properties;
    }GC_SPRITE;

    void GC_SPRITE_INIT(GC_SPRITE* gc_sprite, const char *filePath);
    void GC_SPRITE_DRAW(GC_SPRITE gc_sprite);


    typedef struct
    {
        char* text;
        ALLEGRO_FONT* police;
        ALLEGRO_COLOR color;
        GC_PROPERTIES gc_properties;
    }GC_TEXT;

    void GC_TEXT_INIT(GC_TEXT* gc_text, char* text);
    void GC_TEXT_DRAW_F(GC_TEXT gc_text);

#endif