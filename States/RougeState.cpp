#include "RougeState.h"

RougeState::RougeState(Rouge* owner, int hp, int dmg,int maxHp) :
    State(owner, hp, dmg, maxHp){
    
};

RougeState::~RougeState(){
    
};

std::string RougeState::getStateName(){
    return "Rouge";
};

void RougeState::takePDmg(int dmg){
    // std::cout << "RougeState----- takeMDmg"<< dmg<<std::endl;
    if (this->isDead()) {
        return;
    }
    this->hp -= dmg;
    if (this->hp <= 0) {
        this->dead = true;
        this->hp = 0;
    }
};
void RougeState::takeMDmg(int dmg){
    // std::cout << "RougeState----- takeMDmg"<< dmg<<std::endl;
    if (this->isDead()) {
        return;
    }
    this->hp -= dmg;
    if (this->hp <= 0) {
        this->dead = true;
        this->hp = 0;
    }
};
void RougeState::takeHp(int hp){
    // std::cout << "RougeState----- takeMDmg"<< dmg<<std::endl;
    if (this->isDead()) {
        return;
    }
    this->hp += hp;
    if (this->hp > this->maxHp) {
        this->hp = this->maxHp;
    }
};