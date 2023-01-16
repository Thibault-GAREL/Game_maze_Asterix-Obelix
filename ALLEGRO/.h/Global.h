#ifndef GLOBAL
#define GLOBAL

#define PLAYER_MAX_COUNT 4

#define PART_H 95
#define PART_W 95
#define PART_ON_PLATEAU (PLATEAU_H * PLATEAU_W)
#define PART_COUNT (PART_ON_PLATEAU + 1)
#define PART_MOVABLE_COUNT 34

#define EXTRA_PART_POS_X (190 + 190)
#define EXTRA_PART_POS_Y (PART_H * 8 + PART_H + 30)

#define PLATEAU_H 7
#define PLATEAU_W 7
#define PLATEAU_LOGIC_PATH_H PLATEAU_H * 3
#define PLATEAU_LOGIC_PATH_W PLATEAU_W * 3
#define PLATEAU_H_MAX_I (PLATEAU_H - 1)
#define PLATEAU_W_MAX_I (PLATEAU_W - 1)
#define PLATEAU_OFFSET_X 95
#define PLATEAU_OFFSET_Y 95

#define TAB_BUTTONS_SIDE 3
#define PI 3.14

#define BUTTONS_SETPART_COUNT (3*4+2)

#define LOGIC_PATH_L 0
#define LOGIC_PATH_T 1
#define LOGIC_PATH_I 2

#define FILE_ACCESS ""
#define BUTTON_PATH FILE_ACCESS ".\\Import\\Fleche_1.PNG"
#define FONT_PATH FILE_ACCESS ".\\Import\\BruceForeverRegular.ttf"
#define BUTTON_ROTA_POSI FILE_ACCESS ".\\Import\\Fleche_Rota_Posi.png"
#define BUTTON_ROTA_NEGA FILE_ACCESS ".\\Import\\Fleche_Rota_Nega.png"
#define MENUCHOICE1_PATH FILE_ACCESS".\\Import\\Choixmenu1Allegro.png"
#define MENUCHOICE2_PATH FILE_ACCESS ".\\Import\\Choixmenu2Allegro.png"
#define MENUCHOICE3_PATH FILE_ACCESS ".\\Import\\Choixmenu3Allegro.png"
#define MENU_ESCAPE_PATH FILE_ACCESS ".\\Import\\CroixEscape.png"
#define MENU_BACKGROUND FILE_ACCESS ".\\Import\\MENU_BACKGROUND.jpg"
#define SAVE_DIRECTORY FILE_ACCESS ".\\Sauvegardes"

#endif