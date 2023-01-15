#include "..\.h\PathFinding.h"


/*int main()
{
	int sx = 10;
	int sy = 17;
	int eX = 19;
	int eY = 5;

	int walls[X][Y];
	int distances[X][Y];
	int path[X][Y];
	int ways_pos[100][2];

	for (int x = 0; x < X; x++)
	{
		for (int y = 0; y < Y; y++)
		{
			walls[x][y] = VOID;
			distances[x][y] = ND;
			path[x][y] = ND;
		}
	}

	for (int y = 2; y < Y; y++)
	{
		walls[11][y] = WALL;
	}

	for (int x = 5; x < 12; x++)
	{
		walls[x][2] = WALL;
		walls[x][9] = WALL;
		walls[x+3][0] = WALL;
	}

	Algo_PathFinding(walls, distances, sx, sy, eX, eY, ways_pos);

	for (int i = 0; i < 100; i++)
	{	
		if (ways_pos[i][0] == ND && ways_pos[i][1] == ND)
		{
			printf("\nDistance=%d", i);
			break;
		}

		path[ways_pos[i][0]][ways_pos[i][1]] = i;
	}

	//Console_Draw_Tableau(walls, "[WALLS]");
	//Console_Draw_Tableau(distances, "[DISTANCES]");
	//Console_Draw_Tableau(path, "[PATH]");
	Console_Draw_Way(ways_pos);
	scanf(" ");

	return 0;
}*/

void Algo_PathFinding(int walls[X][Y], int distances[X][Y], int sx, int sy, int eX, int eY, int way[100][2])
{
	distances[sx][sy] = 0;

	for (int i = 0; i < 100; i++)
	{
		Pass(walls, distances);
	}

	Reverse(distances, way, eX, eY);
}

int Pass(int walls[X][Y], int distances[X][Y])
{	
	//int distances_Count = 0;
	for (int x = 0; x < X; x++)
	{
		for (int y = 0; y < Y; y++)
		{
			if (distances[x][y] != ND)
			{
				continue;
			}

			if (walls[x][y] != WALL)
			{
				Set_Distance(distances, x, y);
			}
		}
	}

	return 0;
}

int Set_Distance(int distances[X][Y], int oX, int oY)
{
	int offset[4][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}};
	int x, y;
	int distance_lowest = ND;
	
	for (int i = 0; i < 4; i++)
	{
		x = oX + offset[i][0];
		y = oY + offset[i][1];

		if (x < 0 || y < 0 || x >= X || y >= Y)
		{
			continue;;
		}

		if (distances[x][y] == ND)
		{
			continue;
		}

		if (distance_lowest == ND)
		{
			distance_lowest = distances[x][y];
			continue;
		}
		
		if (distances[x][y] < distance_lowest)
		{
			distance_lowest = distances[x][y];
			continue;
		}
	}

	if (distance_lowest != ND)
	{
		distances[oX][oY] = distance_lowest + 1;
	}

	return distance_lowest;
}

void Reverse(int distances[X][Y], int way[100][2], int eX, int eY)
{
	way[0][0] = eX;
	way[0][1] = eY;
	int distance;

	for (int i = 1; i < 100; i++)
	{
		distance = Get_Distance_Min(distances, &way[i][0], &way[i][1], way[i-1][0], way[i-1][1]);
		if (distance <= 0)
		{
			way[i][0] = ND;
			way[i][1] = ND;
			break;
		}
	}
}

int Get_Distance_Min(int distances[X][Y], int* out_X, int* out_Y, int oX, int oY)
{
	int offset[4][2] = {{1,0}, {0,1}, {-1,0}, {0,-1}};
	int distance_Min = ND;
	int x, y;

	for (int i = 0; i < 4; i++)
	{
		x = oX + offset[i][0];
		y = oY + offset[i][1];

		if (x < 0 || y < 0 || x >= X || y >= Y)
		{
			continue;
		}

		if (distances[x][y] == ND)
		{
			continue;
		}

		if (distance_Min == ND || distances[x][y] < distance_Min)
		{
			distance_Min = distances[x][y];
			*out_X = x;
			*out_Y = y;
		}
	}

	return distance_Min;
}

void Console_Draw_Tableau(int tab[X][Y], char* title)
{
	printf("\n%s", title);

	for (int y = 0; y < X; y++) //int y = Y-1; y >= 0; y--
	{
		printf("\ny=%d| ", y);
		
		if (y < 10)
		{
			printf(" ");
		}

		for (int x = 0; x < Y; x++)
		{
			if (tab[x][y] < 0)
			{
				printf("  - ");
				continue;
			}
			
			if (tab[x][y] <  100)
			{
				printf(" ");
			}

			if (tab[x][y] <  10)
			{
				printf(" ");
			}
								
			printf("%d ", tab[x][y]);

		}
	}

	printf("\n");
}

void Console_Draw_Way(int way[100][2])
{	
	int way_Per_Line = 10;
	int wl = 0;
	
	printf("\n[WAY]\n");
	
	for (int i = 0; i < 100; i++)
	{
		if (way[i][0] == ND && way[i][1] == ND)
		{
			break;
		}

		printf("(%d;%d) ", way[i][0], way[i][1]);

		if (++wl >= way_Per_Line)
		{
			wl = 0;
			printf("\n");
		}
	}
}
