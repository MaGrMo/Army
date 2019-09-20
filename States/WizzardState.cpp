#include "WizzardState.h"


    WizzardState::WizzardState(Wizzard* owner, int hp, int dmg,int maxHp):
    State(owner, hp, dmg, maxHp){
        this->isUndead = true;
    };
    
    WizzardState::~WizzardState(){
        
    };
    
    std::string WizzardState::getStateName(){
        return "Wizzard";
    };