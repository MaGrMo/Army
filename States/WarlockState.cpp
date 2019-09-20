#include "WarlockState.h"


WarlockState::WarlockState(Warlock* owner, int hp, int dmg,int maxHp):
State(owner, hp, dmg, maxHp){

};

WarlockState::~WarlockState(){
    
};

std::string WarlockState::getStateName(){
    return "Warlock";
};