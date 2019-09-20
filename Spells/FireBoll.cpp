#include "FireBoll.h"
#define NAME "FireBoll"

FireBoll::FireBoll(double multiplier):
    Spell(){
    this->effect = (int)FIREBOLL::DMG * multiplier;
    this->manaCost = (int)FIREBOLL::MANACOST;
    this->attakable = true;
};

FireBoll::~FireBoll(){
    
};

// void FireBoll::useSpell(Unit* target){
//     target->uState->takeMDmg(this->effect);
    
// };

void FireBoll::useSpell(Unit* target){
    target->getState()->takeMDmg(this->effect);
};

std::string FireBoll::getName(){
    return NAME;
};

