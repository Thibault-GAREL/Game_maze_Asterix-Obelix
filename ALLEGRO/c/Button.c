#include "../.h/Button.h"

void Button_Init(BUTTON* pButton, int id, GC_MANAGER* pManager, const char* filePath)
{
    pButton->id = id;
    GC_BUTTON_INIT(&pButton->gc_button, &pManager->event);
    GC_SPRITE_INIT(&pButton->sprite, filePath);
}

void Button_Set_Space(BUTTON* pButton, float x, float y, float z)
{
    pButton->sprite.gc_properties.gc_space.POSITION_X = x;
    pButton->sprite.gc_properties.gc_space.POSITION_Y = y;
    pButton->sprite.gc_properties.gc_space.ROTATION_Z = z;

    pButton->gc_button.gc_properties.gc_space = pButton->sprite.gc_properties.gc_space;
}

void Button_Update_Event(BUTTON* pButton)
{
    GC_BUTTON_UPDATE_EVENT(&pButton->gc_button);
}

void Button_Draw(BUTTON* pButton)
{
    GC_SPRITE_DRAW(&pButton->sprite);
}