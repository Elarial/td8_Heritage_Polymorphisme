#include "PriorityCar.hpp"
PriorityCar::PriorityCar(const Car &v):Car(v),_beacon(false){}
PriorityCar::PriorityCar():Car(){}
bool PriorityCar::getBeacon(){
    return _beacon;
}
void PriorityCar::startWithCode(int code){
    if (code != _code){
        throw PriorityCarInvalidCodeException();
    }else{
        Car::start();
    }        
}
void start(){
    throw InvalidStartUseException();
}
