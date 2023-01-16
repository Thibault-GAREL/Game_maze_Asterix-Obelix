#ifndef SAVEMANAGER_h
#define SAVEMANAGER_h

#include <stdio.h>
#include "Global.h"
#include "Party.h"

void Save_Party(PARTY party, char* save_name);
void Load_Party(PARTY* pParty, char* save_name, GC_MANAGER* pManager);

#endif