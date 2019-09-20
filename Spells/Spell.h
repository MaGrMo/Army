#ifndef SPELL_H
#define SPELL_H 
#include <iostream>
#include "../Units/Unit.h"
#include "SpellBook.h"
#include "../SpellsProperties.h"
class SpellBook;
class Unit;

class Spell{
protected:
    bool attakable;
public:
    int effect;
    int manaCost;
    // SpellBook* owner; 
    
    Spell();
    virtual ~Spell();
    int getEffect() const;
    int getManaCost() const;
    bool isAttakable();
    void setEffect(int effect);
    
    virtual void useSpell(Unit* target);
    virtual std::string getName();
    
};
#endif //SPELL_H