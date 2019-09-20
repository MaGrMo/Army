#ifndef SPELLBOOK_H
#define SPELLBOOK_H
#include <iostream>
#include<map>
#include "Spell.h"
#include "../Units/Unit.h"

class Spell;
class Unit;
class SpellBook{
public:
    std::map<std::string, Spell* > wareHouse;
    Spell* curentSpell;
    Unit* owner;
    
    SpellBook(Unit* owner);
    virtual ~SpellBook();

    /*virtual*/ void selectSpell(std::string spellName);
    Spell* getCurentSpell();
    // /*virtual*/ void selectSpell();
    void nextSpell();
    /*virtual*/ void deleteSpell(std::string spellName);
    /*virtual*/ void showSpells();
    /*virtual*/ void showCurentSpell();
};
#endif //SPELLBOOK_H
