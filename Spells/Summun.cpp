#include "Summon.h"
#define NAME "Summon"

Summon::Summon():
    Spell(){
    this->effect = 0;
    this->manaCost = (int)SUMMON::MANACOST;
    this->attakable = false;
};

Summon::~Summon(){
    
};

// void FireBoll::useSpell(Unit* target){
//     target->uState->takeMDmg(this->effect);
    
// };

void Summon::useSpell(){
    // target->getState()->takeMDmg(effect);
};

std::string Summon::getName(){
    return NAME;
};
