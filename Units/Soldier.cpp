#include "Soldier.h"

Soldier::Soldier(std::string name): 
    Unit(name) {
        this->uPAttack = new PAttack(this);
        this->uState = new SoldierState(this, (int)SOLDIER::HP, (int)SOLDIER::DMG, (int)SOLDIER::HP);
        this->uAbility = new SoldierAbility(this);
};

Soldier::~Soldier() {
    
};
// SoldierState Soldier::getState() const{
//     return *sState;
// };
// bool Soldier::isDead(){
//     return this->uState->isDead();
// };
// void Soldier::useAbility(){
//     this->uAbility->useAbility();
// };

// std::ostream& operator<<(std::ostream& out, const Soldier& soldier){
//     out << "Soldier{name = "<< soldier.getName();
//     out <<", HP = " <<soldier.getState()->getHp()<< "/" <<soldier.getState()->getMaxHp();
//     out <<", Dmg = "<<soldier.getState()->getDmg()<<"}";
//     return out;
// };