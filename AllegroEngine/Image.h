#ifndef GAMEIMAGE
#define GAMEIMAGE

#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>


typedef struct
{   
    int x;
    int y;
}Vector2Int;

typedef struct
{
    ALLEGRO_BITMAP* pImage;
    Vector2Int* pPosition;
}GameImage;


void LoadImage(GameImage* gameImage, const char *filePath);


#endif