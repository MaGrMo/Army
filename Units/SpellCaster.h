#ifndef SPELLCASTER_H
#define SPELLCASTER_H
#include <iostream>
#include <set>
#include <map>
#include "../States/MagicState.h"
#include "../Spells/SpellBook.h"
#include "../Units/Unit.h"


class SpellCaster {
public:
    MagicState* mState;
    // SpellBook* spellbook;
    SpellCaster();
    virtual ~SpellCaster();
    
    virtual MagicState* getMState();
    
    virtual void showSpellBook();
    virtual void cast(Unit* target);
    virtual void cast();
    virtual void showCurentSpell();
    virtual void nextSpell();
    // virtual void clearMState();
};

#endif //SPELLCASTER_H
