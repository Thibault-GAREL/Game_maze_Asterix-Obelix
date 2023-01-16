//
// Created by RobinK on 25/12/2022.
//

#include "../.h/Menu.h"


char text_0[] = " Bienvenue Dans Le Labyrinthe ! ";
char text_1[] = " Récupérez tous les trésors afin de compléter le jeu ! ";
char text_2[] = " Bonne Chance ! ";
char text_3[] = " 1- Lancer Une Nouvelle Partie ";
char text_4[] = " 2- Charger Une Partie ";
char text_5[] = " 3- Crédits ";

const int TableauTailleTypo[6]={48,40,48,36,36,36}; //Définit les tailles de police pour les différentes lignes du menu de démarrage
const int TableauTextOffsetY[6]={300,400,575,750,825,900};  //définit les positions en Y du texte du menu

void TMenuInit(TextMenu* pTextMenu){

    GC_TEXT_INIT(&pTextMenu->tableauTextes[0], text_0);
    GC_TEXT_INIT(&pTextMenu->tableauTextes[1], text_1);
    GC_TEXT_INIT(&pTextMenu->tableauTextes[2], text_2);
    GC_TEXT_INIT(&pTextMenu->tableauTextes[3], text_3);
    GC_TEXT_INIT(&pTextMenu->tableauTextes[4], text_4);
    GC_TEXT_INIT(&pTextMenu->tableauTextes[5], text_5);


    for (int i = 0; i < 6; ++i) {
        GC_TEXT_SET_FONT(&pTextMenu->tableauTextes[i], FONT_PATH, TableauTailleTypo[i]);
        pTextMenu->tableauTextes[i].al_flag = ALLEGRO_ALIGN_CENTER;
        pTextMenu->tableauTextes[i].gc_properties.gc_space.POSITION_X=TextOffsetX;
        pTextMenu->tableauTextes[i].gc_properties.gc_space.POSITION_Y=TableauTextOffsetY[i];
    }
}

void Menu_Init(MENU* pMenu, GC_MANAGER* pManager)
{
    GC_SPRITE_INIT(&pMenu->Credits, FILE_ACCESS ".\\Import\\Credits_FHD_ALLEGRO.png");                            // Initialisation de la texture des crédits
    GC_SPRITE_INIT(&pMenu->MENU_BACKGRD, FILE_ACCESS ".\\Import\\Menu_FHD_ALLEGRO.png");
    GC_SPRITE_INIT(&pMenu->ChargerSauvegarde, FILE_ACCESS ".\\Import\\ALLEGRO_SAVE.png");
    pMenu->ChargerSauvegarde.gc_properties.gc_space.POSITION_X = 450;
    GC_TEXT_INIT(&pMenu->GamesSaved, "Save1");
    GC_TEXT_SET_FONT(&pMenu->GamesSaved, FILE_ACCESS ".\\Import\\CaesarDressing-Regular.ttf", 50);
    
    for (int i = 0; i < 10; i++)
    {
        GC_BUTTON_INIT(&pMenu->GamesSaved_bt[i], &pManager->event);
        pMenu->GamesSaved_bt[i].gc_properties.gc_space.HEIGHT = 50;
        pMenu->GamesSaved_bt[i].gc_properties.gc_space.WIDTH = 200;
    }
    

    Button_Init(&pMenu->Button_Menu_1, 0, pManager, MENUCHOICE1_PATH);
    Button_Init(&pMenu->Button_Menu_2, 0, pManager, MENUCHOICE2_PATH);
    Button_Init(&pMenu->Button_Menu_3, 0, pManager, MENUCHOICE3_PATH);
    Button_Init(&pMenu->Button_Escape, 0, pManager, MENU_ESCAPE_PATH);
    Button_Init(&pMenu->Button_Escape_1, 0,pManager, MENU_ESCAPE_PATH);

    Button_Init(&pMenu->PLAYER_TWO, 0, pManager, FILE_ACCESS ".\\Import\\Player_2.png");
    Button_Init(&pMenu->PLAYER_THREE, 0, pManager, FILE_ACCESS ".\\Import\\Player_3.png");
    Button_Init(&pMenu->PLAYER_FOUR, 0, pManager, FILE_ACCESS ".\\Import\\Player_4.png");
    Button_Init(&pMenu->PLAYER_CONTINUE, 0, pManager, FILE_ACCESS ".\\Import\\Logo Continue_Party ALLEGRO.png");

    Button_Set_Space(&pMenu->Button_Menu_1, 750, 400, 0);
    Button_Set_Space(&pMenu->Button_Menu_2, 800, 525, 0);
    Button_Set_Space(&pMenu->Button_Menu_3, 875, 650, 0);
    Button_Set_Space(&pMenu->Button_Escape, 1850, 25, 0);
    Button_Set_Space(&pMenu->Button_Escape_1, 1850,25,0);
    Button_Set_Space(&pMenu->PLAYER_TWO, 780 , 550, 0);
    Button_Set_Space(&pMenu->PLAYER_THREE, 940, 550, 0);
    Button_Set_Space(&pMenu->PLAYER_FOUR, 1100, 550, 0);
    Button_Set_Space(&pMenu->PLAYER_CONTINUE, 750, 650, 0);

    pMenu->menu_Selected = 0;
}

void MENU_Draw(MENU* pMenu)
{
    if (pMenu->menu_Selected == 0)
    {
        GC_SPRITE_DRAW(&pMenu->MENU_BACKGRD);

        Button_Draw(&pMenu->Button_Menu_1);
        Button_Draw(&pMenu->Button_Menu_2);
        Button_Draw(&pMenu->Button_Menu_3);
        Button_Draw(&pMenu->Button_Escape);
    }
    if (pMenu->menu_Selected == 2)
    {
        GC_SPRITE_DRAW(&pMenu->ChargerSauvegarde);
        Button_Draw(&pMenu->Button_Escape_1);
        char name[6] = "Save ";
        //printf("\n");
        for (int i = 0; i < pMenu->save_count; i++)
        {   
            //printf("\nnumero=%d", i);
            name[5] = 48 + i;
            pMenu->GamesSaved.text = name;
            pMenu->GamesSaved.gc_properties.gc_space.POSITION_X = 600;
            pMenu->GamesSaved.gc_properties.gc_space.POSITION_Y = 300 + i * 60;
            pMenu->GamesSaved_bt[i].gc_properties.gc_space.POSITION_X = pMenu->GamesSaved.gc_properties.gc_space.POSITION_X;
            pMenu->GamesSaved_bt[i].gc_properties.gc_space.POSITION_Y = pMenu->GamesSaved.gc_properties.gc_space.POSITION_Y;
            GC_TEXT_DRAW(&pMenu->GamesSaved);
        }
    }
    if (pMenu->menu_Selected == 3)
    {
        GC_SPRITE_DRAW(&pMenu->Credits);
        Button_Draw(&pMenu->Button_Escape_1);
    }
    if (pMenu->menu_Selected == 1)
    {
        Button_Draw(&pMenu->PLAYER_TWO);
        Button_Draw(&pMenu->PLAYER_THREE);
        Button_Draw(&pMenu->PLAYER_FOUR);
        Button_Draw(&pMenu->PLAYER_CONTINUE);
    }
}

void Button_Game_Update_Event(MENU* pMenu)
{
    if (pMenu->menu_Selected == 0)
    {
        Button_Update_Event(&pMenu->Button_Menu_1);
        Button_Update_Event(&pMenu->Button_Menu_2);
        Button_Update_Event(&pMenu->Button_Menu_3);
        //Button_Update_Event(&pMenu->Button_Escape);
        Button_Update_Event(&pMenu->Button_Escape_1);
    }
    if (pMenu->menu_Selected == 2)
    {
        Button_Update_Event(&pMenu->Button_Escape_1);
        for (int i = 0; i < 10; i++)
        {
            GC_BUTTON_UPDATE_EVENT(&pMenu->GamesSaved_bt[i]);
        }
        
    }
    if (pMenu->menu_Selected == 3)
    {
        Button_Update_Event(&pMenu->Button_Escape_1);
    }
    if (pMenu->menu_Selected == 1)
    {
        Button_Update_Event(&pMenu->PLAYER_TWO);
        Button_Update_Event(&pMenu->PLAYER_THREE);
        Button_Update_Event(&pMenu->PLAYER_FOUR);
        Button_Update_Event(&pMenu->PLAYER_CONTINUE);
    }
}

void Button_exe(MENU* pMenu, GC_MANAGER* pManager)
{
    if (pMenu->Button_Menu_1.gc_button.state == GC_BUTTON_STATE_RELEASED)
    {
        pMenu->menu_Selected = 1;
        //printf("condit1");
    }
    if (pMenu->Button_Menu_2.gc_button.state == GC_BUTTON_STATE_RELEASED)
    {
        pMenu->menu_Selected = 2;
        //printf("condit2");
    }
    if (pMenu->Button_Menu_3.gc_button.state == GC_BUTTON_STATE_RELEASED)
    {
        pMenu->menu_Selected = 3;
        //printf("condit3");
    }

    if (pMenu->Button_Escape_1.gc_button.state == GC_BUTTON_STATE_RELEASED)
    {
        pMenu->menu_Selected = 0;
    }
    //printf("%d  %d  %d \n", pMenu->Button_Escape_1.gc_button.state, pMenu->menu_Selected, GC_BUTTON_STATE_RELEASED );

    if (pMenu->PLAYER_TWO.gc_button.state == GC_BUTTON_STATE_RELEASED)
    {
        pMenu->PlayerCount = 2;
        //pMenu->menu_Selected = 1;
    }
    if (pMenu->PLAYER_THREE.gc_button.state == GC_BUTTON_STATE_RELEASED)
    {
        pMenu->PlayerCount = 3;
        //pMenu->menu_Selected = 1;
    }
    if (pMenu->PLAYER_FOUR.gc_button.state == GC_BUTTON_STATE_RELEASED)
    {
        pMenu->PlayerCount = 4;
        //pMenu->menu_Selected = 1;
    }
    if (pMenu->PLAYER_CONTINUE.gc_button.state == GC_BUTTON_STATE_RELEASED)
    {
        pMenu->PlayerCount = -1;
        //pMenu->menu_Selected = 1;
    }
    if (pMenu->menu_Selected == 2)
    {
        for (int i = 0; i < 10; i++)
        {
            if (pMenu->GamesSaved_bt[i].state == GC_BUTTON_STATE_RELEASED)
            {
                pMenu->save_selected = i;
                printf("\nSauvegarde %d selectionee", i);
            }
        }
    }
}





/*void TMenuDisplay(TextMenu* pTextMenu, int* pMENU_BACKGRD){                                               //fonction permettant d'afficher le menu
    al_clear_to_color(al_map_rgb(0,0,0));
    GC_SPRITE_DRAW(pMENU_BACKGRD);
    for (int i = 0; i < 6; ++i) {
        GC_TEXT_DRAW(&pTextMenu->tableauTextes[i]);
    }
    al_flip_display();
}*/

/*void ButtonMenu(){
    GC_BUTTON Button_Menu1;
    Button_Menu1.gc_properties.gc_space.POSITION_X= al_get_text_width();
    GC_BUTTON_INIT(&Button_Menu1, &manager);
}*/