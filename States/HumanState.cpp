#include "HumanState.h"

HumanState::HumanState(Unit* owner, int hpH, int dmgH, int maxHp):
State(owner, hpH, dmgH, maxHp){
    this->isBiteble = false;
};
HumanState::~HumanState(){
    
};
std::string HumanState::getStateName(){
    return "WereWolfHuman";
};
// int HumanState::getMaxHp(){
//     return this->maxHp;
// };

// int HumanState::getHp(){
//     return this->hp;
// };

// int HumanState::getDmg(){
//     return this->dmg;
// };
