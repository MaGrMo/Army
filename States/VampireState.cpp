#include "VampireState.h"

VampireState::VampireState(Unit* owner, int hp, int dmg,int maxHp):
    State(owner, hp, dmg, maxHp){
    this->isBiteble = false;
};

VampireState::~VampireState(){
    
};

std::string VampireState::getStateName(){
    return "Vampire";
};