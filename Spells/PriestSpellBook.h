#ifndef PRIESTSPELLBOOK_H
#define  PRIESTSPELLBOOK_H value
#include "SpellBook.h"
#include "FireBoll.h"
#include "Heal.h"


class PriestSpellBook : public SpellBook{
public:
    PriestSpellBook(Unit* owner);
    virtual ~PriestSpellBook();
    
};
#endif //PRIESTSPELLBOOK_H