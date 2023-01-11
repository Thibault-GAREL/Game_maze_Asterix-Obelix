#include "../.h/utils.h"


void Set_Vector2Int(Vector2Int* pVector, int x, int y)
{
    pVector->x = x;
    pVector->y = y;
}

void Get_Vector2Int(Vector2Int* pVector, int* pOut_x, int* pOut_y)
{
    *pOut_x = pVector->x;
    *pOut_y = pVector->y;
}

Vector2Int PlateauPosition2PixelPosition(Vector2Int plateau_position)
{
    Vector2Int pixel_position;

    pixel_position.x = plateau_position.x * PART_W + PLATEAU_OFFSET_X;
    pixel_position.y = plateau_position.y * PART_H + PLATEAU_OFFSET_Y;

    return pixel_position;
}

int Vector2Int2Index(Vector2Int* pVector)
{   
    return pVector->x * PLATEAU_H + pVector->y;
}

int Position2Index(int x, int y)
{   
    return x * PLATEAU_H + y;
}

void Random_LessDiscount(int values[], int size, int pass)
{   
    srand(time(NULL));

    int value_a, value_b;
    int index_a, index_b;


    for (int i = 0; i < size; i++)
    {
        values[i] = i;
    }

    for (int i = 0; i < pass; i++)
    {
        index_a = rand() % size;
        index_b = rand() % size;

        value_a = values[index_a];
        value_b = values[index_b];

        values[index_a] = value_b;
        values[index_b] = value_a;
    }
}