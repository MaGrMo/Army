#include "Curse.h"
#define NAME "Curse"

Curse::Curse():
    Spell(){
    this->effect = (int)CURSE::DMG;
    this->manaCost = (int)CURSE::MANACOST;
    this->attakable = true;
};
Curse::~Curse(){
    
};

// void Curse::useSpell(Unit* target){
//     target->uState->takeMDmg(this->effect);
    
// };

void Curse::useSpell(Unit* target){
    target->getState()->takeMDmg(effect);
};

std::string Curse::getName(){
    return NAME;
};
