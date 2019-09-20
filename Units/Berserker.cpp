#include "Berserker.h"
//непонятно если мы создаем uState в Юните и создаем uState в Берсеркере..... то мы Объект из Юнита просто проябуем? 

Berserker::Berserker(std::string name):
    Unit(name){
    this->uState = new BerserkerState(this, (int)BERSERKER::HP, (int)BERSERKER::DMG, (int)BERSERKER::HP);
    this->uAbility = new Ability(this);
    this->uPAttack = new PAttack(this);
};
Berserker::~Berserker(){
    
};


// std::ostream& operator<<(std::ostream& out, const Berserker& berserker){
//     out << "Berserker{name = "<< berserker.getName();
//     out <<", HP = " <<berserker.getState()->getHp()<< "/" <<berserker.getState()->getMaxHp();
//     out <<", Dmg = "<<berserker.getState()->getDmg()<<"}";
//     return out;
// };