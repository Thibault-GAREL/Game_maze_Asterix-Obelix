#include "..\.h\SaveManager.h"

void Save_Party(PARTY party, int save_id)
{
    if (save_id < 0)
    {
        save_id = 0;
    }
    
    FILE* pFile;
    char fileName[9] = ".\\SAVE_ ";
    printf("\nSave in %d", save_id);
    fileName[7] = 48 + save_id;
    pFile = fopen(fileName, "w");

    fwrite(&party, sizeof(PARTY), 1, pFile);

    fclose(pFile);
}

void Load_Party(PARTY* pParty, int save_id, GC_MANAGER* pManager)
{
    if (save_id < 0)
    {
        save_id = 0;
    }

    Party_Init(pParty, 4, pManager);

    FILE* pFile;
    char fileName[9] = ".\\SAVE_ ";
    fileName[7] = 48 + save_id;
    pFile = fopen(fileName, "r");

    PARTY loaded_Party;
    long long unsigned int size = 0;
    size += sizeof(PARTY) * fread(&loaded_Party, sizeof(PARTY), 1, pFile);

    fclose(pFile);

    if (size < sizeof(PARTY))
    {
        //printf("\nSauvegarde non valide (size=%llu) numero %d \"%s\"", size, save_id, fileName[0]);
        return;
    }
    
    for (int i = 0; i < loaded_Party.player_count; i++)
    {
        loaded_Party.players[i].sprite = pParty->players[i].sprite;
        pParty->players[i] = loaded_Party.players[i];
    }

    for (int x = 0; x < PLATEAU_W; x++)
    {
        for (int y = 0; y < PLATEAU_W; y++)
        {
            Part_Init(&pParty->plateau.parts[x][y], loaded_Party.plateau.parts[x][y].filePath, loaded_Party.plateau.parts[x][y].position_on_plateau, false, pManager, loaded_Party.plateau.parts[x][y].logicPath, 0);
            pParty->plateau.parts[x][y].rotation = loaded_Party.plateau.parts[x][y].rotation;
            pParty->plateau.parts[x][y].treasure = loaded_Party.plateau.parts[x][y].treasure;
        }
    }
    
    Part_Init(&pParty->plateau.part_extra, loaded_Party.plateau.part_extra.filePath, loaded_Party.plateau.part_extra.position_on_plateau, true, pManager, loaded_Party.plateau.part_extra.logicPath, 0);
    pParty->plateau.part_extra.rotation = loaded_Party.plateau.part_extra.rotation;

    pParty->player_count = loaded_Party.player_count;
    pParty->player_turn = loaded_Party.player_turn;
}

int Get_Last_Party_Saved()
{
    FILE* pFile;
    PARTY loaded_Party;
    char fileName[9] = ".\\SAVE_ ";
    for (int i = 0; i < 10; i++)
    {
        fileName[7] = 48 + i;
        pFile = fopen(fileName, "r");

        long long unsigned int size = 0;
        size += sizeof(PARTY) * fread(&loaded_Party, sizeof(PARTY), 1, pFile);

        fclose(pFile);

        if (size != sizeof(PARTY) || loaded_Party.victory != -1)
        {
            printf("\nDerniere sauvegarde -> SAVE_%d", i-1);
            return i-1;
        }
    }

    return 8;
}