#include <iostream>
#include <typeinfo>
#include <set>
#include <map>

#include "./States/State.h"
#include "./Units/Unit.h"
#include "./Units/Soldier.h"
#include "./Units/Rouge.h"
#include "./Units/Werewolf.h"
#include "./Units/Berserker.h"
#include "./Units/Vampire.h"
#include "./Units/Wizzard.h"
#include "./Spells/Spell.h"
#include "./Spells/FireBoll.h"
#include "./Spells/SpellBook.h"
#include "./Spells/WizzardSpellbook.h"
#include "./Units/Necromancer.h"
#include "./Units/Healer.h"
#include "./Units/Demon.h"
#include "./Units/Warlock.h"
#include "./Units/Priest.h"

void test1(Unit* s1,Unit* s2,Unit* v1,Unit* w1, Unit* r1) {
    std::cout <<*s1 << std::endl;
    std::cout <<*s2 << std::endl;
    std::cout <<*v1 << std::endl;
    std::cout <<*w1 << std::endl;
    std::cout <<*r1 << std::endl;
    std::cout << " -end of constr--- lets do some action!!!!!"<< std::endl;
    v1->useAbility();
    s1->useAbility();
    w1->useAbility();
    r1->useAbility();
    
    std::cout <<*s1 << std::endl;
    std::cout <<*s2 << std::endl;
    std::cout <<*v1 << std::endl;
    std::cout <<*w1 << std::endl;
    std::cout <<*r1 << std::endl;
    v1->attack(s1); 
    std::cout <<*s1 << std::endl;
    std::cout <<*v1 << std::endl;
    
    std::cout << " -end of transformation--- lets do some action!!!!!"<< std::endl;
    
    v1->useAbility(w1);
    r1->useAbility(v1);
    s1->useAbility(r1);
    w1->useAbility(v1);
    std::cout <<"Vampire Werewolf bitess rouge and Soldier"<<std::endl;
    v1->useAbility(s1);
    w1->useAbility(r1);
    
    std::cout <<*s1 << std::endl;
    std::cout <<*s2 << std::endl;
    std::cout <<*v1 << std::endl;
    std::cout <<*w1 << std::endl;
    std::cout <<*r1 << std::endl;
    std::cout <<"Vampire(s1)  bitess rouge and Soldier(s2)"<<std::endl;
    s1->useAbility(s2);
    s1->attack(s2); 
    std::cout <<*s1 << std::endl;
    std::cout <<*s2 << std::endl;
    std::cout <<*v1 << std::endl;
    std::cout <<*w1 << std::endl;
    std::cout <<*r1 << std::endl;
    
};

void test1MemLeak(){
    Soldier* s1 = new Soldier("Soldier");
    Rouge* r1 = new Rouge("Rouge");
    Necromancer* n1 = new Necromancer("Pro100Nekr");
    Werewolf* ww1 = new Werewolf("Werewolf");
    Berserker* b1 = new Berserker("Berserker");
    Vampire* v1 = new Vampire("Vampire");
    Wizzard* wz1 = new Wizzard("Wizzard");
    Healer* h1 = new Healer("Healer");
    Warlock* wl1= new Warlock("Warlock");
    Priest* p1 = new Priest("Priest");
    
    ww1->useAbility();
    ww1->useAbility();
    wl1->cast();
    wl1->cast();
    wl1->cast();
    wl1->cast();
    
    wl1->cast(s1);
    wl1->cast(s1);
    
    wl1->cast(r1);
    wl1->cast(r1);
    n1->cast(r1);
    s1->attack(n1);
    v1->useAbility(wz1);
    
    wl1->cast();
    n1->cast(r1);
    s1->attack(r1);
    
    
        delete(s1); 
        delete(r1); 
        delete(n1); 
        delete(ww1); 
        delete(b1); 
        delete(v1); 
        delete(wz1); 
        delete(h1); 
        delete(wl1);
        delete(p1); 
}

int main(){
    
    // for( ; 1; ) {
    //     test1MemLeak();
    // }
    
    
    
    Healer* h1 = new Healer("Healer");
    h1->showCurentSpell();
    h1->nextSpell();
    h1->showCurentSpell();
    h1->nextSpell();
    h1->showCurentSpell();
    // Warlock* warl1 = new Warlock("warlock");
    
    // warl1->cast();
    // warl1->cast();
    // warl1->cast();
    // warl1->cast();
    // warl1->cast();
    // warl1->cast();
    
    // delete(warl1);
    //     for(int i = 0; i < 4 ;i++) {
        
    //     warl1->cast();
    //     }
    //     warl1->showDemons();
    //     for(int i = 0; i < 4 ;i++) {
        
    //     warl1->cast();
    //     }
    //     for(int i = 0; i < 4 ;i++) {
        
    //     warl1->cast();
    //     }
        
    //     delete(warl1);
    //     Warlock* warl2 = new Warlock("warr");
    //     for(int i = 0; i < 4 ;i++) {
        
    //     warl2->cast();
    // }
    //             for(int i = 0; i < 4 ;i++) {
        
    //     warl2->cast();
    //     }
    
    // warl2->showDemons();
    // // delete(h1);
    // delete(warl1);

    
    // Soldier* s1 = new Soldier("soldate");
    // Soldier* s2 = new Soldier("british");
    // Rouge* r1 = new  Rouge("Robin");
    
    
    
    
    // Berserker* ber1 = new Berserker("ololo");
    // s1->attack(ber1);
    // ber1->attack(s1);
    // ((Unit*)ber1)->takePDmg(10);
    
    // std::cout<<*ber1<<std::endl;
    
    
    // ber1->attack(r1);
    
    // Healer* h1 = new Healer("Bish");
    // Warlock* warl1 = new Warlock("warlock");
    // Berserker* ber1 = new Berserker("ololo");
    // Demon* dmn1 = new Demon(warl1);
    // Demon* dmn2 = new Demon(warl1);
    // Demon* dmn3 = new Demon(warl1);
    
    
    // Wizzard* wizz1 = new Wizzard("Merlin");
    
    // std::cout<< *warl1<< std::endl;
    // std::cout<< *ber1<< std::endl;
    // warl1->addDemon(dmn1);
    // warl1->addDemon(dmn2);
    // warl1->addDemon(dmn3);
    // for(int i = 0; i < 4 ;i++) {
        
    //     warl1->cast();
    //     warl1->showDemons();
    // }
    // delete(warl1);
    // warl1->cast(r1);
    // // warl1->showDemons();
    //     warl1->cast(r1);
    //     warl1->cast(r1);
    //     warl1->cast(r1);
    // warl1->showDemons();
    // warl1->cast(r1);
    // warl1->cast(r1);
    
    // for ( ;!r1->isDead(); ) {
    //     warl1->cast(r1);
    //     warl1->showDemons();
    // }
    // ber1->attack(wizz1);
    // std::cout<< *r1<< std::endl;
    // // dmn1->attack(ber1);

    

    
    
    
    // Unit* u1 = new Unit("Vovan", 100, 20);
    // Unit* u2 = new Unit("Maman", 100, 20);
    // std::map<std::string,FireBoll*> spels;
    // std::set<std::string,Spell*>*::iterator it;
    // std::set<int*> spels;
    // std::set<int*>::iterator it;

    

    
    // test1(s1, s2, v1, w1, r1);
    
    // FireBoll* fb1 = new FireBoll();
    // it = spels->begin();
    // std::pair<char,int>('b',300)
    
    // void TextHandler::insert(char symbol, std::map<char, int>* lst) {
    // if ( lst->find(symbol) == lst->end() ) {
    //     lst->insert(std::pair<char, int>(symbol, 0));
    // }
    // lst->at(symbol) += 1;
    // }
    //
    // std::cout <<(new FireBoll())->getName() <<std::endl;
    
    
    // spels.insert( std::pair<std::string, FireBoll*>(FireBoll().getName(), new FireBoll()));
    // spels.insert(new FireBoll());
    // spels.insert(new FireBoll());
    // spels.insert(new FireBoll());
    // spels.insert(new FireBoll());
    
    // spels.insert(new int(10));
    // spels.insert(new int(20));
    // spels.insert(new int(30));
    // spels.insert(new int(40));
    // spels.insert(new int(50));
    
    
    
    // for(it = spels.begin() ; it !=spels.end(); it++){
    //     Soldier* s3 = new Soldier("Faina");
    //     std::cout <<*s3<<std::endl;
    //     // std::cout <<*it<<std::endl;
    //     std::cout <<(*it)->getName()<<std::endl;
    //     (*it)->useSpell(s3);
    //     std::cout <<*s3<<std::endl;
    //     delete(s3);
    //     std::cout <<"-----------------"<<std::endl;
    // }
    // test1(s1, s2, v1, w1, r1);
    // std::cout <<*s1 << std::endl;
    // spels[FireBoll().getName()]->useSpell(s1);
    // w1->cast(s1);
    
    // fb1->useSpell(s1);
    // if(!fb1->owner) {
    //     std::cout <<"no OWNER " <<fb1->getName() <<std::endl;
    // }
    
    
    // std::cout <<*s1 << std::endl;
    
    return 0;
}