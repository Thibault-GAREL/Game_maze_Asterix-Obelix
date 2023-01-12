#ifndef STD
#define STD
    #include <stdio.h>
#endif

#ifndef ALLEGRO_LIB
#define ALLEGRO_LIB
    #include <allegro5/allegro.h>
    #include <allegro5/allegro_image.h>
    #include <allegro5/allegro_font.h>
    #include <allegro5/allegro_ttf.h>
#endif

#ifndef GCINITALLEGRO
#define GCINITALLEGRO

    bool GC_INIT_ALLEGRO();

#endif

#ifndef GCMANAGER
#define GCMANAGER

    #define KEYBOARD_EVENT
    typedef struct
    {
        ALLEGRO_DISPLAY* display;
        ALLEGRO_EVENT_QUEUE* events;
        ALLEGRO_EVENT event;
        float event_time;
    }GC_MANAGER;

    //Retourne l'addresse du nouveau manager si l'initialisation réussie sinon 0 
    void GC_MANAGER_CREATE(GC_MANAGER* pManager, int width, int height);
    void GC_MANAGER_UPDATE_EVENT(GC_MANAGER* pManager);
    void GC_MANAGER_DESTROY(GC_MANAGER* pManger);

#endif

#ifndef SPACE
#define SPACE

    typedef struct
    {
        float POSITION_X, POSITION_Y;
        float ROTATION_Z;
        float HEIGHT, WIDTH;
    }GC_SPACE;

    void GC_SPACE_INIT(GC_SPACE* gc_space);

#endif

#ifndef GCPROPERTIES
#define GCPROPERTIES

    typedef struct
    {
        unsigned int error; // 0 = pas d'erreur // 1 => Pas de solution // 2 => Réinitializer le composent
        char name[100];
        GC_SPACE gc_space;
        //GC_MANAGER* pManager;
    }GC_PROPERTIES;

    void GC_PROPERTIES_INIT(GC_PROPERTIES* gc_properties);

#endif

#ifndef GC_COMPONENT
#define GC_COMPONENT


    #define GC_BUTTON_STATE_NONE 0
    #define GC_BUTTON_STATE_PRESSED 1
    #define GC_BUTTON_STATE_RELEASED 2
    typedef struct
    {
        char text[200];
        bool isMouseOver;
        char state;
        ALLEGRO_EVENT* event;
        GC_PROPERTIES gc_properties;        
    }GC_BUTTON;

    void GC_BUTTON_INIT(GC_BUTTON* gc_button, ALLEGRO_EVENT* event);
    void GC_BUTTON_UPDATE_EVENT(GC_BUTTON* gc_button);


    #define GC_KEY_BACKSPACE 8
    #define GC_KEY_ENTER 13
    typedef struct
    {
        char text[100];
        int cursor;
        bool isValidated;
        ALLEGRO_EVENT* event;
        GC_PROPERTIES gc_properties;
    }GC_INPUT_FIELD;

    void GC_INPUT_FIELD_INIT(GC_INPUT_FIELD* gc_input_field, ALLEGRO_EVENT* event);
    int GC_INPUT_FIELD_GET_CURSOR_OFFSET(GC_INPUT_FIELD* gc_input_field);
    void GC_INPUT_FIELD_UPDATE_EVENT(GC_INPUT_FIELD* gc_input_field);


    typedef struct
    {
        ALLEGRO_BITMAP* pBitmap;
        GC_PROPERTIES gc_properties;
    }GC_SPRITE;

    void GC_SPRITE_INIT(GC_SPRITE* gc_sprite, const char *filePath);
    void GC_SPRITE_DRAW(GC_SPRITE* gc_sprite);


    typedef struct
    {
        char* text;
        int al_flag;
        ALLEGRO_FONT* police;
        ALLEGRO_COLOR color;
        GC_PROPERTIES gc_properties;
    }GC_TEXT;

    void GC_TEXT_INIT(GC_TEXT* gc_text, char* text_out);
    void GC_TEXT_SET_FONT(GC_TEXT* gc_text, char* filePath, int size);
    void GC_TEXT_DRAW(GC_TEXT* gc_text);

#endif


/*
 *
 * Gc by Matthieu Gros
 *
 */