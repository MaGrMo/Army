 #include "WolfState.h"
//Exclude to Properties.h
#define MAGIC_DAMAG_MULTIPLICATOR 1.2

WolfState::WolfState(Unit* owner,int hp, int dmg, int maxHp) :
    State(owner, hp, dmg, maxHp){
    this->isBiteble = false;
};

WolfState::~WolfState(){
    
};
// int WolfState::getMaxHp(){
//     return this->maxHp;
// };

// int WolfState::getHp(){
//     return this->hp;
// };

// int WolfState::getDmg(){
//     return this->dmg;
// };
std::string WolfState::getStateName(){
    return "WerewolfWolf";
};

void WolfState::takeMDmg(int dmg){
    if (this->isDead()) {
        return;
    }
    this->hp -= dmg*MAGIC_DAMAG_MULTIPLICATOR;
    if (this->hp <= 0) {
        this->dead = true;
        this->hp = 0;
    }
};
