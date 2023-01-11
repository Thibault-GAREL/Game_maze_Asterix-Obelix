#ifndef UTILS_h
#define UTILS_h

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "Global.h"

typedef struct
{
    int x,y;
}Vector2Int;

void Set_Vector2Int(Vector2Int* pVector, int x, int y);
void Get_Vector2Int(Vector2Int* pVector, int* pOut_x, int* pOut_y);
Vector2Int PlateauPosition2PixelPosition(Vector2Int plateau_position);

int Vector2Int2Index(Vector2Int* pVector);
int Position2Index(int x, int y);

void Random_LessDiscount(int values[], int size, int pass);

#endif