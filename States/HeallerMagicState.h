#ifndef HEALLERMAGICSTATE_H
#define HEALLERMAGICSTATE_H value
#include "MagicState.h"
#include "../Spells/HeallerSpellBook.h"
class SpellBook;
class HeallerSpellBook;
// class Unit;
class HeallerMagicState : public MagicState {
public:
    HeallerMagicState(Unit* owner);
    virtual ~HeallerMagicState();
    
};
#endif // HEALLERMAGICSTATE_H
