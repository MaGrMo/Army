#ifndef HEAL_H
#define HEAL_H
#include <iostream>
#include "Spell.h"

class Heal : public Spell{
public:
    Heal(double multiplier = 1);
    ~Heal();
    
    virtual void useSpell(Unit* target);
    virtual std::string getName();
};
#endif