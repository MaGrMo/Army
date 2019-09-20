#ifndef WAZZARDSPELLBOOK_H
#define  WAZZARDSPELLBOOK_H value
#include "SpellBook.h"
#include "FireBoll.h"
#include "Heal.h"


class WizzardSpellbook : public SpellBook{
public:
    WizzardSpellbook(Unit* owner);
    virtual ~WizzardSpellbook();
    
};
#endif //WAZZARDSPELLBOOK_H