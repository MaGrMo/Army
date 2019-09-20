#ifndef WIZZARDMAGICSTATE_H
#define WIZZARDMAGICSTATE_H value
#include "MagicState.h"
#include "../Spells/WarlockSpellBook.h"
class SpellBook;
class WarlockSpellBook;
// class Unit;
class WizzardMagicState : public MagicState {
public:
    WizzardMagicState(Unit* owner);
    virtual ~WizzardMagicState();
    
};
#endif //WIZZARDMAGICSTATE_H
