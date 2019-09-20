#ifndef SUMMON_H
#define SUMMON_H

#include <iostream>
#include "Spell.h"

class Unit;

class Summon : public Spell{
public:
    Summon();
    ~Summon();

    virtual void useSpell();
    virtual std::string getName();
};
#endif //SUMMON_H