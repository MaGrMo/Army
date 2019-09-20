#include "HeallerState.h"


HeallerState::HeallerState(Healer* owner, int hp, int dmg,int maxHp):
State(owner, hp, dmg, maxHp){
};

HeallerState::~HeallerState(){
    
};

std::string HeallerState::getStateName(){
    return "Healler";
};