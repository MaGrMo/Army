#include "PriestState.h"


PriestState::PriestState(Priest* owner, int hp, int dmg,int maxHp):
State(owner, hp, dmg, maxHp){
};

PriestState::~PriestState(){
    
};

std::string PriestState::getStateName(){
    return "Priest";
};