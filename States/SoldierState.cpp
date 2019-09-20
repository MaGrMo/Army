#include "SoldierState.h"
SoldierState::SoldierState(Soldier* owner, int hp, int dmg, int maxHp):
State(owner,hp,dmg,maxHp){
    // this->name  = ((std::string)SOLDIER::NAME);
};

SoldierState::~SoldierState(){
    
};

void SoldierState::takePDmg(int dmg){
    if (this->isDead()) {
        return;
    }
    this->hp -= dmg;
    if (this->hp <= 0) {
        this->dead = true;
        this->hp = 0;
    }
};
std::string SoldierState::getStateName(){
    return "Soldier";
};


void SoldierState::takeMDmg(int dmg){
    // std::cout << "SoldierState----- takeMDmg"<< dmg<<std::endl;
    if (this->isDead()) {
        return;
    }
    this->hp -= dmg;
    if (this->hp <= 0) {
        this->dead = true;
        this->hp = 0;
    }
};

void SoldierState::takeHp(int hp){
    if (this->isDead()) {
        return;
    }
    this->hp += hp;
    if (this->hp > this->maxHp) {
        this->hp = this->maxHp;
    }
};