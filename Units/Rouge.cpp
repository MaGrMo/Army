#include "Rouge.h"


Rouge::Rouge(std::string name) :
Unit(name){
        this->uPAttack = new RougeAttack(this);
        this->uState = new RougeState(this, (int)ROUGE::HP, (int)ROUGE::DMG, (int)ROUGE::HP);
        this->uAbility = new RougeAbility(this);
};
    
Rouge::~Rouge(){
        
};

// void Rouge::useAbility(){
//     this->uAbility->useAbility();
// };

// std::ostream& operator<<(std::ostream& out, const Rouge& rouge){
//     out << "Rouge{name = "<< rouge.getName();
//     out <<", HP = " <<rouge.getState()->getHp()<< "/" <<rouge.getState()->getMaxHp();
//     out <<", Dmg = "<<rouge.getState()->getDmg()<<"}";
//     return out;
// };
