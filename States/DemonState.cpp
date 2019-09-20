#include "DemonState.h"
DemonState::DemonState(Demon* owner, int hp, int dmg, int maxHp):
State(owner,hp,dmg,maxHp){
    
};

DemonState::~DemonState(){
    
};

void DemonState::takePDmg(int dmg){
    if (this->isDead()) {
        return;
    }
    this->hp -= dmg;
    if (this->hp <= 0) {
        this->dead = true;
        this->hp = 0;
        // ((Demon*)this->Owner)->getMaster()->removeDemon((Demon*)this->Owner);
    }
};
std::string DemonState::getStateName(){
    return "Demon";
};


void DemonState::takeMDmg(int dmg){
    if (this->isDead()) {
        return;
    }
    this->hp -= dmg;
    if (this->hp <= 0) {
        this->dead = true;
        this->hp = 0;
        // ((Demon*)this->Owner)->getMaster()->removeDemon((Demon*)this->Owner);
    }
};

void DemonState::takeHp(int hp){

};