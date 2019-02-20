#include "PriorityCar.hpp"
void PriorityCar::startWithCode (int code){
    _code = code;
}
PriorityCar::PriorityCar(const Car &v):Car(v){}
PriorityCar::PriorityCar():Car(){}