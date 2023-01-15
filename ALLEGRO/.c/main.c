#include "../.h/fonction_t.h"
#include "../.h/Party.h"

// gcc -g -Wall main_t.c Gc.c fonction_t.c Menu.c Plateau.c Player.c Part.c -lallegro -lallegro_image -lallegro_font -oProject; .\Project.exe
//gcc -g -Wall main_t.c Gc.c fonction_t.c Menu.c Plateau.c Player.c Part.c utils.c Party.c -lallegro -lallegro_image -lallegro_font -lallegro_ttf -oProject

//int SelectMenu=0; //permet de valider la sélection dans le menu

void Switch_Part_Loop(GC_MANAGER* pManager, PARTY* pParty, MENU* pMenu);
void Deplacement_Player_Loop(GC_MANAGER* pManager, PARTY* pParty, MENU* pMenu);
void Draw_Clear_Plateau_Player(PARTY* pParty, MENU* pMenu);
void Update_Event_In_Menu(GC_MANAGER* pManager, MENU* pMenu);
void Update_Event_In_Party(GC_MANAGER* pManager, MENU* pMenu);


int main() 
{
    //al_set_new_display_flags(ALLEGRO_FULLSCREEN_WINDOW);
    GC_MANAGER manager;
    GC_MANAGER_CREATE(&manager, 1920, 1080);            //Les dimensions en pixel ne servent plus à rien vu qu'on affiche en plein écran

    MENU menu;
    Menu_Init(&menu, &manager);

    while (menu.menu_Selected != 1) 
    {
        Update_Event_In_Menu( &manager, &menu);
        Button_Game_Update_Event(&menu);
        Button_exe(&menu, &manager);
        
        ALLEGRO_COLOR blk = al_map_rgb(0, 0, 0);
        al_clear_to_color(blk);
        MENU_Draw(&menu);
        al_flip_display();
    }

    PARTY party;
    Party_Init(&party, 4, &manager);

    while (1) {
        Switch_Part_Loop(&manager, &party, &menu);
        Deplacement_Player_Loop(&manager, &party, &menu);
        //Button_exe(&menu, &manager);
    }

    GC_MANAGER_DESTROY(&manager);
    return 0;
}

void Switch_Part_Loop(GC_MANAGER* pManager, PARTY* pParty, MENU* pMenu)
{
    while (!pParty->player_turn_step)
    {
        Update_Event_In_Party(pManager, pMenu);
        //Button_Update_Event(&pMenu->Button_Escape_1);

        Party_Buttons_Update_Event(pParty);
        Party_Buttons_Exe(pParty);

        Draw_Clear_Plateau_Player(pParty, pMenu);
        Party_Buttons_Draw(pParty);
        al_flip_display();
    }

    pParty->player_turn_step = 0;
}

void Deplacement_Player_Loop(GC_MANAGER* pManager, PARTY* pParty, MENU* pMenu)
{
    Draw_Clear_Plateau_Player(pParty, pMenu);
    al_flip_display();

    PART* pPart_target = 0;
    while (!Player_Deplacement(&pParty->players[pParty->player_turn], pPart_target, &pParty->plateau)) //&pParty->plateau.parts[pParty->players[pParty->player_turn].position_on_plateau.x][pParty->players[pParty->player_turn].position_on_plateau.y] == pPart_target
    {
        Update_Event_In_Party(pManager, pMenu);
        pPart_target = Plateau_Get_Part_Click(&pParty->plateau);
    }

    Party_Next_Turn(pParty);
    Draw_Clear_Plateau_Player(pParty, pMenu);
    Party_Buttons_Draw(pParty);
    al_flip_display();
}

void Draw_Clear_Plateau_Player(PARTY* pParty, MENU* pMenu)
{
    ALLEGRO_COLOR blk = al_map_rgb(0,0,0);
    al_clear_to_color(blk);
    Party_Plateau_Draw(pParty);
    Party_Player_Draw(pParty);
    Treasure_draw(&pParty->players[pParty->player_turn]);

    Button_Draw(&pMenu->Button_Escape_1);
}

void Update_Event_In_Menu(GC_MANAGER* pManager, MENU* pMenu)
{
    GC_MANAGER_UPDATE_EVENT(pManager);

    if (pManager->event.display.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
    {
        GC_MANAGER_DESTROY(pManager);
        exit(0);
    }
}

void Update_Event_In_Party(GC_MANAGER* pManager, MENU* pMenu)
{
    GC_MANAGER_UPDATE_EVENT(pManager);

    if (pManager->event.display.type == ALLEGRO_EVENT_DISPLAY_CLOSE)
    {
        GC_MANAGER_DESTROY(pManager);
        exit(0);
    }

    Button_Update_Event(&pMenu->Button_Escape);

    if (pMenu->Button_Escape.gc_button.state == GC_BUTTON_STATE_RELEASED)
    {
        GC_MANAGER_DESTROY(pManager);
        exit(0);
    }
}