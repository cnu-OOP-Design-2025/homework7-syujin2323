#include "duck.h"

/* TODO */
void Duck::performFly(){
    flyBehavior->fly();
}

/* TODO */
void Duck::performQuack(){
    quackBehavior->quack();
}

/* TODO */
void Duck::setFlyBehavior(FlyBehavior* fb){
    if(flyBehavior){
        delete flyBehavior;
    }
    flyBehavior = fb;
}

/* TODO */
void Duck::setQuackBehavior(QuackBehavior* qb){
    if(quackBehavior){
        delete quackBehavior;
    }
    quackBehavior = qb;
}

/* TODO */
MallardDuck::MallardDuck() {
    setFlyBehavior(new FlyWithWings());
    setQuackBehavior(new Quack());
}
/* TODO */
RedheadDuck::RedheadDuck() {
    setFlyBehavior(new FlyWithWings());
    setQuackBehavior(new Quack());
}
/* TODO */
RubberDuck::RubberDuck() {
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new Squeak()); 
}
/* TODO */
DecoyDuck::DecoyDuck() {
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new MuteQuack());
}
/* TODO */
ModelDuck::ModelDuck() {
    setFlyBehavior(new FlyNoWay());
    setQuackBehavior(new MuteQuack());
}