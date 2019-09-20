#ifndef CURSE_H
#define CURSE_H 
#include <iostream>
#include "Spell.h"

class Unit;

class Curse : public Spell{
public:
    Curse();
    ~Curse();
    virtual void useSpell(Unit* target);
    virtual std::string getName();
};

#endif //CURSE_H