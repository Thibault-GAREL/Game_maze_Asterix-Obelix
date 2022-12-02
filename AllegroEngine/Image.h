#ifndef GAMEIMAGE
#define GAMEIMAGE

#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
//#include "AlMain.h"


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
/*{
    gameImage->pImage = al_load_bitmap(filePath);

    if (gameImage->pImage ==  NULL)
    {
        fprintf(stderr, "<ERREUR> dans le chargement de l'image");
    }
};*/

#include "Image.c"

#endif