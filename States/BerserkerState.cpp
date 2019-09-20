#include "BerserkerState.h"

BerserkerState::BerserkerState(Berserker* owner, int hp, int dmg,int maxHp):
 State(owner, hp, dmg, maxHp){

};

BerserkerState::~BerserkerState(){
    
};

std::string BerserkerState::getStateName(){
    return "Berserker";
};
void BerserkerState::takeMDmg(int dmg){
    return;
};


// void BerserkerState::takePDmg(int dmg){
//     if (this->isDead()) {
//         return;
//     }
//     this->hp -= dmg;
//     if (this->hp <= 0) {
//         this->dead = true;
//         this->hp = 0;
//     }
// };


// void BerserkerState::takeHp(int hp){
//     if (this->isDead()) {
//         return;
//     }
//     this->hp += hp;
//     if (this->hp > this->maxHp) {
//         this->hp = this->maxHp;
//     }
//  };