#ifndef PLATEAU_h
#define PLATEAU_h

#include "Part.h"
#include "Global.h"
#include "utils.h"
#include "Gc.h"

typedef struct
{
    PART parts[PLATEAU_H][PLATEAU_W];
    PART part_extra;
}PLATEAU;

void Plateau_Init(PLATEAU* pPlateau, GC_MANAGER* pManager);
void Plateau_Draw(PLATEAU* pPlateau);

void Rotate_Part(PLATEAU* pPlateau, int direction);
void Shift_Line(PLATEAU* pPlateau, const int ln, bool direct_sens);
void Shift_Column(PLATEAU* pPlateau, const int col, const bool direct_sens);

PART* Plateau_Get_Part_Click(PLATEAU* pPlateau);

#endif