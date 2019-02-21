#include "ElectricCar.hpp"

std::string ElectricCar::display(){
    return "Electric Car\n"+Car::display();
}

void ElectricCar::start(){
    _breaker = true;
    Car::start();
}

ElectricCar::ElectricCar():Car(){
}

ElectricCar::ElectricCar(const Car &v):Car(v) {
    checkColor();
}

bool ElectricCar::getBreaker(){
    return _breaker;
}

bool ElectricCar::checkColor () {
    if( Car::toLower(_color) != "white"){
        throw InvalidColorException();
        std::cerr << "Color is "<<_color<<" but should be red" << std::endl;
        return false;
    }
    return true;
}