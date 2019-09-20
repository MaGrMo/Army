#include "NecromancerState.h"


    NecromancerState::NecromancerState(Necromancer* owner, int hp, int dmg,int maxHp):
    State(owner, hp, dmg, maxHp){
        this->isUndead = true;
    };
    
    NecromancerState::~NecromancerState(){
        
    };
    
    std::string NecromancerState::getStateName(){
        return "Necromancer";
    };