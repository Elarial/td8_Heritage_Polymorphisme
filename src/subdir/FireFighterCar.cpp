#include "FireFighterCar.hpp"
std::string FireFighterCar::display(){
    return "Fire Figther Car\n"+Car::display();
}
FireFighterCar::FireFighterCar(int power,int code):PriorityCar(){
    _power = power;
    _code = code;
}
FireFighterCar::FireFighterCar(const Car &v, int code):PriorityCar(v) {
    _code = code;
}