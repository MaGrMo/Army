#ifndef WARLOCKSPELLBOOK_K
#define WARLOCKSPELLBOOK_K 
#include "SpellBook.h"
#include "Summon.h"

class WarlockSpellBook: public SpellBook{
public:
    WarlockSpellBook(Unit* owner);
    ~WarlockSpellBook();
    
};
#endif //WARLOCKSPELLBOOK_K