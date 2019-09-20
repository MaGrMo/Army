#include "RougeAttack.h"

RougeAttack::RougeAttack(Unit* owner) : 
PAttack(owner) {
    // std::cout << "RougeAttack-Constructor"<<std::endl;
};

RougeAttack::~RougeAttack(){
    
};

void RougeAttack::attack(Unit* enemy){
    if (enemy->isDead()) {
        return;
    }
    enemy->uState->takePDmg(this->Owner->uState->getDmg());
    // enemy->takePDmg(this->Owner->getState().getDmg());
    // enemy->uPAttack->counterAttack(this->Owner);
    
};
    
void RougeAttack::counterAttack(Unit* enemy){
    if (enemy->isDead()) {
        return;
    }
    enemy->uState->takePDmg(this->Owner->uState->getDmg() / 2);
};