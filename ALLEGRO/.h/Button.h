#ifndef BUTTON_h
#define BUTTON_h

#include "Gc.h"

typedef struct
{
    int id;
    GC_BUTTON gc_button;
    GC_SPRITE sprite;
}BUTTON;

void Button_Init(BUTTON* pButton, int id, GC_MANAGER* pManager, const char* filePath);
void Button_Set_Space(BUTTON* pButton, float x, float y, float z);
void Button_Update_Event(BUTTON* pButton);
void Button_Draw(BUTTON* pButton);

#endif