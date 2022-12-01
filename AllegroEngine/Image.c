#include "Image.h"


void LoadImage(GameImage* gameImage, const char *filePath)
{
    gameImage->pImage = al_load_bitmap(filePath);

    if (gameImage->pImage ==  NULL)
    {
        fprintf(stderr, "<ERREUR> dans le chargement de l'image");
        return;
    }
};