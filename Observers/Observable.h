#ifndef OBSERVABLE_H
#define OBSERVABLE_H
#include <set>
#include "Observer.h"
// #include "../Units/Unit.h"
class Observer;

class Observable
{
public:
    std::set<Observer*> observers;
    
    Observable();
    ~Observable();
    virtual void attach(Observer* observer) = 0;
    virtual void deAttach(Observer* observer) = 0;
    // virtual void notify(Observer* observer) = 0;
    
};
#endif //OBSERVABLE_H
