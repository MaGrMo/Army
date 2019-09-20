#ifndef NECROMANCERMAGICSTATE_H
#define NECROMANCERMAGICSTATE_H

#include "MagicState.h"
#include "../Spells/NecromacerSpellBook.h"
class SpellBook;
class NecromacerSpellBook;
class NecromancerMagicState : public MagicState{
public:
    NecromancerMagicState(Unit* owner);
    ~NecromancerMagicState();
    
};

#endif //NECROMANCERMAGICSTATE_H