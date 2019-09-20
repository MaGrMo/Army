#ifndef  NEKROMANCERSPELLBOOK_H
#define  NEKROMANCERSPELLBOOK_H
#include "SpellBook.h"
#include "Curse.h"
#include "FireBoll.h"

class NecromacerSpellBook : public SpellBook{
public:
    NecromacerSpellBook(Unit* owner);
    virtual ~NecromacerSpellBook();
    
    
};

#endif //NEKROMANCERSPELLBOOK_H