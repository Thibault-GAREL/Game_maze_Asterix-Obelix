#include "../.h/Plateau.h"

char parts_filePath[50][50] = {     FILE_ACCESS ".\\Import\\tuile_2.png",
                                    FILE_ACCESS ".\\Import\\tuile_4.png",
                                    FILE_ACCESS ".\\Import\\tuile_6.png",
                                    FILE_ACCESS ".\\Import\\tuile_8.png",
                                    FILE_ACCESS ".\\Import\\tuile_9.png",
                                    FILE_ACCESS ".\\Import\\tuile_10.png",
                                    FILE_ACCESS ".\\Import\\tuile_11.png",
                                    FILE_ACCESS ".\\Import\\tuile_12.png",
                                    FILE_ACCESS ".\\Import\\tuile_13.png",
                                    FILE_ACCESS ".\\Import\\tuile_14.png",
                                    FILE_ACCESS ".\\Import\\tuile_16.png",
                                    FILE_ACCESS ".\\Import\\tuile_18.png",
                                    FILE_ACCESS ".\\Import\\tuile_20.png",
                                    FILE_ACCESS ".\\Import\\tuile_22.png",
                                    FILE_ACCESS ".\\Import\\tuile_23.png",
                                    FILE_ACCESS ".\\Import\\tuile_24.png",
                                    FILE_ACCESS ".\\Import\\tuile_25.png",
                                    FILE_ACCESS ".\\Import\\tuile_26.png",
                                    FILE_ACCESS ".\\Import\\tuile_27.png",
                                    FILE_ACCESS ".\\Import\\tuile_28.png",
                                    FILE_ACCESS ".\\Import\\tuile_30.png",
                                    FILE_ACCESS ".\\Import\\tuile_32.png",
                                    FILE_ACCESS ".\\Import\\tuile_34.png",
                                    FILE_ACCESS ".\\Import\\tuile_36.png",
                                    FILE_ACCESS ".\\Import\\tuile_37.png",
                                    FILE_ACCESS ".\\Import\\tuile_38.png",
                                    FILE_ACCESS ".\\Import\\tuile_39.png",
                                    FILE_ACCESS ".\\Import\\tuile_40.png",
                                    FILE_ACCESS ".\\Import\\tuile_41.png",
                                    FILE_ACCESS ".\\Import\\tuile_42.png",
                                    FILE_ACCESS ".\\Import\\tuile_44.png",
                                    FILE_ACCESS ".\\Import\\tuile_46.png",
                                    FILE_ACCESS ".\\Import\\tuile_48.png",
                                    FILE_ACCESS ".\\Import\\tuile_50.png",
                                    FILE_ACCESS ".\\Import\\tuile_1.png",
                                    FILE_ACCESS ".\\Import\\tuile_3.png",
                                    FILE_ACCESS ".\\Import\\tuile_5.png",
                                    FILE_ACCESS ".\\Import\\tuile_7.png",
                                    FILE_ACCESS ".\\Import\\tuile_15.png",
                                    FILE_ACCESS ".\\Import\\tuile_17.png",
                                    FILE_ACCESS ".\\Import\\tuile_19.png",
                                    FILE_ACCESS ".\\Import\\tuile_21.png",
                                    FILE_ACCESS ".\\Import\\tuile_29.png",
                                    FILE_ACCESS ".\\Import\\tuile_31.png",
                                    FILE_ACCESS ".\\Import\\tuile_33.png",
                                    FILE_ACCESS ".\\Import\\tuile_35.png",
                                    FILE_ACCESS ".\\Import\\tuile_43.png",
                                    FILE_ACCESS ".\\Import\\tuile_45.png",
                                    FILE_ACCESS ".\\Import\\tuile_47.png",
                                    FILE_ACCESS ".\\Import\\tuile_49.png"};

void Generate_Parts_filePath_Index(int parts_filePath_Index[PART_COUNT])
{
    int parts_movable_index = 0;
    int parts_fixe_index = 34;
    
    int parts_movable_filePath_Index[PART_MOVABLE_COUNT];
    Random_LessDiscount(parts_movable_filePath_Index, PART_MOVABLE_COUNT, 200);

    for (int x = 0; x < PLATEAU_W; x++)
    {
        for (int y = 0; y < PLATEAU_H; y++)
        {
            if (x % 2 || y % 2)
            {
                parts_filePath_Index[Position2Index(x, y)] = parts_movable_filePath_Index[parts_movable_index++];
            }
            else
            {
                parts_filePath_Index[Position2Index(y, x)] = parts_fixe_index++;
            } 
        }
    }
    parts_filePath_Index[PART_COUNT - 1] = parts_movable_filePath_Index[parts_movable_index++];
}

void Plateau_Init(PLATEAU* pPlateau, GC_MANAGER* pManager)
{
    int parts_filePath_index[PART_COUNT];
    Generate_Parts_filePath_Index(parts_filePath_index);

    for (int x = 0; x < PLATEAU_W; x++)
    {
        for (int y = 0; y < PLATEAU_H; y++)
        {
            PART* pPart_current = &pPlateau->parts[x][y];
            Vector2Int part_position = {x,y};
            Part_Init(pPart_current, parts_filePath[parts_filePath_index[Vector2Int2Index(&part_position)]], part_position, false, pManager);
        }
    }

    Vector2Int extra_part_position = {EXTRA_PART_POS_X, EXTRA_PART_POS_Y};
    Part_Init(&pPlateau->part_extra, parts_filePath[parts_filePath_index[PART_COUNT - 1]], extra_part_position, true, pManager);


}

void Plateau_Draw(PLATEAU* pPlateau)
{
    for (int x = 0; x < PLATEAU_W; x++)
    {
        for (int y = 0; y < PLATEAU_H; y++)
        {
            Part_Draw(&pPlateau->parts[x][y]);
        }
    }

    Part_Draw(&pPlateau->part_extra);
}

void Rotate_Part(PLATEAU* pPlateau, int direction)
{
    pPlateau->part_extra.rotation += direction;
    pPlateau->part_extra.rotation %= 4;

    if (pPlateau->part_extra.rotation < 0)
    {
        pPlateau->part_extra.rotation = 3;
    }
}

void Shift_Line(PLATEAU* pPlateau, const int ln, bool direct_sens)
{
    PART buffer_part = pPlateau->part_extra;

    if (direct_sens)
    {
        pPlateau->part_extra = pPlateau->parts[PLATEAU_W-1][ln];
        pPlateau->part_extra.isExtra = true;

        for (int x = 1; x < PLATEAU_H; x ++)
        {
            pPlateau->parts[PLATEAU_H-x][ln] = pPlateau->parts[PLATEAU_H_MAX_I-x][ln];

            pPlateau->parts[PLATEAU_H-x][ln].position_on_plateau.x = PLATEAU_H-x;
            pPlateau->parts[PLATEAU_H-x][ln].position_on_plateau.y = ln;
        }

        pPlateau->parts[0][ln] = buffer_part;

        pPlateau->parts[0][ln].isExtra = false;
        pPlateau->parts[0][ln].position_on_plateau.x = 0;
        pPlateau->parts[0][ln].position_on_plateau.y = ln;
    }
    else
    {
        pPlateau->part_extra = pPlateau->parts[0][ln];
        pPlateau->part_extra.isExtra = true;

        for (int x = 0; x < PLATEAU_H_MAX_I; x ++)
        {
            pPlateau->parts[x][ln] = pPlateau->parts[x+1][ln];
            
            pPlateau->parts[x][ln].position_on_plateau.x = x;
            pPlateau->parts[x][ln].position_on_plateau.y = ln;
        }

        pPlateau->parts[PLATEAU_H_MAX_I][ln] = buffer_part;

        pPlateau->parts[PLATEAU_H_MAX_I][ln].isExtra = false;
        pPlateau->parts[PLATEAU_H_MAX_I][ln].position_on_plateau.x = PLATEAU_H_MAX_I;
        pPlateau->parts[PLATEAU_H_MAX_I][ln].position_on_plateau.y = ln;
    }
}

void Shift_Column(PLATEAU* pPlateau, const int col, const bool direct_sens)
{
    PART buffer_part = pPlateau->part_extra;

    if (direct_sens)
    {
        pPlateau->part_extra = pPlateau->parts[col][PLATEAU_H_MAX_I];
        pPlateau->part_extra.isExtra = true;

        for (int y = PLATEAU_H_MAX_I ; y > 0; y --)
        {
            pPlateau->parts[col][y] = pPlateau->parts[col][y-1];

            pPlateau->parts[col][y].position_on_plateau.x = col;
            pPlateau->parts[col][y].position_on_plateau.y = y;
        }

        pPlateau->parts[col][0] = buffer_part;

        pPlateau->parts[col][0].isExtra = false;
        pPlateau->parts[col][0].position_on_plateau.x = col;
        pPlateau->parts[col][0].position_on_plateau.y = 0;
    }
    else
    {
        pPlateau->part_extra = pPlateau->parts[col][0];
        pPlateau->part_extra.isExtra = true;

        for (int y = 0; y < PLATEAU_H_MAX_I; y ++)
        {
            pPlateau->parts[col][y] = pPlateau->parts[col][y+1];

            pPlateau->parts[col][y].position_on_plateau.x = col;
            pPlateau->parts[col][y].position_on_plateau.y = y;
        }

        pPlateau->parts[col][PLATEAU_H_MAX_I] = buffer_part;

        pPlateau->parts[col][PLATEAU_H_MAX_I].isExtra = false;
        pPlateau->parts[col][PLATEAU_H_MAX_I].position_on_plateau.x = col;
        pPlateau->parts[col][PLATEAU_H_MAX_I].position_on_plateau.y = PLATEAU_H_MAX_I;
    }
}

PART* Plateau_Get_Part_Click(PLATEAU* pPlateau)
{
    for (int x = 0; x < PLATEAU_W; x++)
    {
        for (int y = 0; y < PLATEAU_H; y++)
        {
            Part_Update_Event(&pPlateau->parts[x][y]);

            if (pPlateau->parts[x][y].button.gc_button.state == GC_BUTTON_STATE_RELEASED)
            {
                return &pPlateau->parts[x][y];
            }
        }
    }

    return NULL;
}