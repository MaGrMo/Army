#include "WerewolfAbility.h"

WerewolfAbility::WerewolfAbility(Unit* owner):
Ability(owner){
    // this->wOwner = owner;
    this->isWolf = false;
};

WerewolfAbility::~WerewolfAbility(){
    
};

void WerewolfAbility::useAbility(){
    this->transform();
};

void WerewolfAbility::transform(){
    int tmpHp = owner->uState->getHp();
    // int tmpDmg = owner->uState->getDmg();
    // int tmpMaxHp = owner->uState->getMaxHp();
    
    if(this->isWolf) {
        delete(owner->uState);
        if (tmpHp > (int)WEREWOLFHUMAN::HP) {
            tmpHp = (int)WEREWOLFHUMAN::HP;
        }
        owner->uState = new HumanState(owner,tmpHp, (int)WEREWOLFHUMAN::DMG, (int)WEREWOLFHUMAN::HP);
    } else {
        delete(owner->uState);
        if (tmpHp > (int)WEREWOLFWOLF::HP) {
            tmpHp = (int)WEREWOLFWOLF::HP;
        }
        owner->uState = new WolfState(owner,tmpHp,(int)WEREWOLFWOLF::DMG, (int)WEREWOLFWOLF::HP);
    }
    this->isWolf = !this->isWolf;

};

void WerewolfAbility::useAbility(Unit* victum){
    // std::cout<<victum->isBiteble()<< std::endl;
    if(!victum->isBiteble()){
        std::cout << "you can't bite Unbiteble Unit "<< victum->getState()->getStateName()<<std::endl;
        return;
    }
    if (victum->getMState() != NULL) {
        victum->clearMState();
    }
    
    std::cout << this->owner->getName() << " has bitten "<<victum->getName() <<std::endl;
    int tmpHp = victum->uState->getHp();
    delete(victum->uState);
    delete(victum->uAbility);
    //delete(victum->uPAttack);
    victum->uState = new HumanState(victum,tmpHp,20, 100);
    victum->uAbility = new WerewolfAbility(victum);
    //victum->uPAttack = new HumanPAttack(victum)
};
