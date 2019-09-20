#include "Werewolf.h"
Werewolf::Werewolf(std::string name):
    Unit(name){
    // По хорошему передаелять на ХУман Стайт Или на Солдат Стейт Хотябы) 
    this->uState = new HumanState(this, (int)WEREWOLFHUMAN::HP, (int)WEREWOLFHUMAN::DMG, (int)WEREWOLFHUMAN::HP);
    // this->humanState = this->uState;
    
    // this->isWolf = false;
    this->uPAttack = new PAttack(this);
    this->uAbility = new WerewolfAbility(this);
};
    
Werewolf::~Werewolf(){
    
};

//code style)???? 
// void Werewolf::transform(){
//     if(this->isWolf){
//         // this->isWolf = false;
//         this->uState = this->humanState;
//     } else {
//         // this->isWolf = true;
//         this->uState = this->wolfState;
//     }
//     this->isWolf = !this->isWolf;
// };


// void Werewolf::useAbility(){
//     this->uAbility->useAbility();
// };
// void Werewolf::useAbility(Unit* victum){
//     // std::cout << "werwolf Bites(this->uAbility->useAbility(victum);)"<<std::cout;
//     this->uAbility->useAbility(victum);
// };

bool Werewolf::isWolf() const{
     return this->uState->getIsWolf();
    // return false;
};

// std::ostream& operator<<(std::ostream& out, const Werewolf& werewolf){
//     out << "Werewolf{name = "<< werewolf.getName();
//     out <<", HP = " <<werewolf.getState()->getHp()<< "/" <<werewolf.getState()->getMaxHp();
//     out <<", Dmg = "<<werewolf.getState()->getDmg();
//     out<<", isWolf = "<<werewolf.isWolf()<<"}";
//     return out;
// };