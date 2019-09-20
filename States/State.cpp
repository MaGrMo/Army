#include "State.h"

State::State(Unit* Owner, int hp, int dmg, int maxHp, double x, double y){
    this->hp = hp;
    this->maxHp = maxHp;
    this->dmg = dmg;
    this->Owner = Owner;
    this->dead = false;
    this->isBiteble = true;
    this->isUndead  = false;
    this->location = Point(x,y);
};

State:: ~State(){
// delete(Owner);
};
    
int State::getMaxHp(){
    return this->maxHp;
};

int State::getHp(){
    return this->hp;
};

int State::getDmg(){
    return this->dmg;
};

bool State::isDead(){
    return this->dead;
};

bool State::getIsBiteble(){
    return this->isBiteble;
};

std::string State::getStateName(){
    return "Unit";
};

bool State::getIsUndead(){
    return this->isUndead;
};
bool State::getIsWolf() const{
    return 0;
};
void State::takePDmg(int dmg){
    if (this->isDead()) {
        return;
    }
    this->hp -= dmg;
    if (this->hp <= 0) {
        this->dead = true;
        this->hp = 0;
    }
};

void State::takeMDmg(int dmg){
    if (this->isDead()) {
        return;
    }
    this->hp -= dmg;
    if (this->hp <= 0) {
        this->dead = true;
        this->hp = 0;
    }
};

void State::takeHp(int hp){
    if (this->isDead()) {
        return;
    }
    this->hp += hp;
    if (this->hp > this->maxHp) {
        this->hp = this->maxHp;
    }
 };
 
Unit* State::getOwner(){
    return Owner;
};
