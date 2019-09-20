#ifndef PRIESTMAGICSTATE_H
#define PRIESTMAGICSTATE_H value
#include "MagicState.h"
#include "../Spells/PriestSpellBook.h"
class SpellBook;
class PriestSpellBook;
// class Unit;
class PriestMagicState : public MagicState {
public:
    PriestMagicState(Unit* owner);
    virtual ~PriestMagicState();
    
};
#endif // PRIESTMAGICSTATE_H
