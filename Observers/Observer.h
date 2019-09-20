#ifndef OBSERVER_H
#define OBSERVER_H
#include <set>
#include "Observable.h"
// #include "../Units/Unit.h"

class Observable;

class Observer
{
public:
    std::set<Observable*> observables;
    Observer();
    ~Observer();
    virtual void update(Observable* observable) = 0;
};
#endif //OBSERVER_H