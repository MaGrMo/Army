#include "Demon.h"
int Demon::counter = 1;
Demon::Demon(Warlock* master):
Unit(std::to_string(counter)){
    
    this->uPAttack = new PAttack(this);
    this->uState = new DemonState(this, (int)DEMON::HP, (int)DEMON::DMG, (int)DEMON::HP);
    this->uAbility = new Ability(this);
    this->master = master;
    counter += 1;
    // std::cout << "Demon Coustructor" << std::endl;
};

Demon::~Demon(){
    counter -= 1;
    // std::cout << "Demon Destructor" << std::endl;
};
Warlock* Demon::getMaster(){
    return this->master;
};

std::ostream& operator<<(std::ostream& out, const Demon& demon){
    out << "Demon"<<"{# = "<< demon.getName();
    out <<", HP = " <<demon.getState()->getHp()<< "/" <<demon.getState()->getMaxHp();
    out <<", Dmg = "<<demon.getState()->getDmg()<<"}";
    return out;
};