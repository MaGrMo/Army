#include "VampireAbility.h"

VampireAbility::VampireAbility(Unit* owner):
Ability(owner){
    
};

VampireAbility::~VampireAbility(){
    
};

    // virtual void useAbility();

// void useAbility(SpellCaster* victum){

    
//     std::cout << victum->getMState() << std::endl;
//     if (victum->getMState() != NULL) {
//         delete(victum->getMState());
//     }
    
//     std::cout << victum->getMState() << std::endl;
    
    
//     std::cout << this->owner->getName() << " has bitten "<<victum->getName() <<std::endl;
//     int tmpHp = victum->uState->getHp();
//     delete(victum->uState);
//     delete(victum->uAbility);
//     delete(victum->uPAttack);
//     if (tmpHp > (int)VAMPIRE::HP) {
//         tmpHp = (int)VAMPIRE::HP;
//     }
//     victum->uState = new VampireState(victum,tmpHp,(int)VAMPIRE::DMG, (int)VAMPIRE::HP);
//     victum->uAbility = new VampireAbility(victum);
//     victum->uPAttack = new VampirePAttack(victum);
    
// };

void VampireAbility::useAbility(Unit* victum){
    if(!victum->isBiteble()){
        std::cout << "you can't bite Unbiteble Unit "<< victum->getState()->getStateName()<<std::endl;
        return;
    }
    
    // std::cout <<victum->getMState() << std::endl;
    if (victum->getMState() != NULL) {
        victum->clearMState();
    }
    
    // std::cout << victum->getMState() << std::endl;
    
    
    std::cout << this->owner->getName() << " has bitten "<<victum->getName() <<std::endl;
    int tmpHp = victum->uState->getHp();
    delete(victum->uState);
    delete(victum->uAbility);
    delete(victum->uPAttack);
    if (tmpHp > (int)VAMPIRE::HP) {
        tmpHp = (int)VAMPIRE::HP;
    }
    victum->uState = new VampireState(victum,tmpHp,(int)VAMPIRE::DMG, (int)VAMPIRE::HP);
    victum->uAbility = new VampireAbility(victum);
    victum->uPAttack = new VampirePAttack(victum);
};

    