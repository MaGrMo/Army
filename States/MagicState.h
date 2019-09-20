#ifndef MAGICSTATE_H
#define MAGICSTATE_H value
#include "../Units/Unit.h"
#include "../Properties.h"
#include "../Spells/SpellBook.h"
class SpellBook;
class MagicState {
public:
    SpellBook* spellBook;
    Unit* owner;
    int mana;
    int maxMana;
    MagicState(Unit* owner);
    virtual ~MagicState();
    virtual void spendMana(int mana);
    virtual void addMana(int mana);
    virtual int getMana();
    virtual int getMaxMana();
    SpellBook*  getSpellBook();

};
#endif //MAGICSTATE_H