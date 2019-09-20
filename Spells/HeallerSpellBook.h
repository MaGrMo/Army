#ifndef HELLERSPELLBOOK_H
#define  HELLERSPELLBOOK_H value
#include "SpellBook.h"
#include "FireBoll.h"
#include "Heal.h"


class HeallerSpellBook : public SpellBook{
public:
    HeallerSpellBook(Unit* owner);
    virtual ~HeallerSpellBook();
    
};
#endif //HELLERSPELLBOOK_H