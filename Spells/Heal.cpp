#include "Heal.h"
#define NAME "Heal"

Heal::Heal(double multiplier):
Spell(){
    this->effect = (int)HEAL::DMG * multiplier ;
    this->manaCost = (int)HEAL::MANACOST;
    this->attakable = false;
};

Heal::~Heal(){
    
};

void Heal::useSpell(Unit* target){
    target->uState->takeHp(this->effect);
};

std::string Heal::getName(){
    return NAME;
};