#include "..\.h\SaveManager.h"

void Save_Party(PARTY party, char* save_name)
{
    FILE* pFile;
    pFile = fopen(save_name, "w");

    fwrite(&party, sizeof(PARTY), 1, pFile);

    fclose(pFile);
}

void Load_Party(PARTY* pParty, char* save_name, GC_MANAGER* pManager)
{
    Party_Init(pParty, 4, pManager);

    FILE* pFile;
    pFile = fopen(save_name, "r");

    PARTY loaded_Party;
    long long unsigned int size = 0;
    size += sizeof(PARTY) * fread(&loaded_Party, sizeof(PARTY), 1, pFile);

    fclose(pFile);

    if (size < sizeof(PARTY))
    {
        printf("Sauvegarde non valide (size=%llu)", size);
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
        }
    }
    
    Part_Init(&pParty->plateau.part_extra, loaded_Party.plateau.part_extra.filePath, loaded_Party.plateau.part_extra.position_on_plateau, true, pManager, loaded_Party.plateau.part_extra.logicPath, 0);
    pParty->plateau.part_extra.rotation = loaded_Party.plateau.part_extra.rotation;

    pParty->player_count = loaded_Party.player_count;
    pParty->player_turn = loaded_Party.player_turn;;
}