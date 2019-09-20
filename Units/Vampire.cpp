#include "Vampire.h"

Vampire::Vampire(std::string name):
    Unit(name){
    this->uPAttack = new VampirePAttack(this);
    this->uState = new VampireState(this, (int)VAMPIRE::HP, (int)VAMPIRE::DMG, (int)VAMPIRE::HP);
    this->uAbility = new VampireAbility(this);
};

Vampire::~Vampire(){
    
};

// void Vampire::useAbility(){
    
// };

// std::ostream& operator<<(std::ostream& out, const Vampire& vampire){
//     out << "Vampire{name = "<< vampire.getName();
//     out <<", HP = " <<vampire.getState()->getHp()<< "/" <<vampire.getState()->getMaxHp();
//     out <<", Dmg = "<<vampire.getState()->getDmg()<<"}";
//     return out;
// };

