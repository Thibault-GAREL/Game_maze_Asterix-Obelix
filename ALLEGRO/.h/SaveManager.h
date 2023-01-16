#ifndef SAVEMANAGER_h
#define SAVEMANAGER_h

#include <stdio.h>
#include "Global.h"
#include "Party.h"

void Save_Party(PARTY party, int save_id);
void Load_Party(PARTY* pParty, int save_id, GC_MANAGER* pManager);
int Get_Last_Party_Saved();
#endif