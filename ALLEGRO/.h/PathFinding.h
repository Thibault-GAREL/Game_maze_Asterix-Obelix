#ifndef PATHFINDING_h
#define PATHFINDING_h

#include <stdio.h>
#include "utils.h"
#include "Global.h"

#define X 7*3
#define Y 7*3
#define WALL 1
#define PATH_VOID 0
#define START 2
#define END 3
#define ND -1


void Algo_PathFinding(int walls[X][Y], int distances[X][Y], int sx, int sy, int eX, int eY, int way[100][2]);

int Pass(int walls[X][Y], int distances[X][Y]);
int Set_Distance(int distances[X][Y], int oX, int oY);
void Reverse(int distances[X][Y], int way[100][2], int eX, int eY);
int Get_Distance_Min(int distances[X][Y], int* out_X, int* out_Y, int oX, int oY);
void Console_Draw_Tableau(int tab[X][Y], char* title);
void Console_Draw_Way(int way[100][2]);

#endif