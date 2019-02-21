#include "FireFighterCar.hpp"

std::string FireFighterCar::display(){
    return "Fire Fighter Car\n"+Car::display();
}

FireFighterCar::FireFighterCar(const int power,const std::string color,const int speed,const int code){
    _power = power;
    _color = color;
    _speed = speed;
    _code = code;
    checkColor();
}
FireFighterCar::FireFighterCar(const Car &v, int code):PriorityCar(v) {
    
    checkColor();
    _code = code;
}

bool FireFighterCar::checkColor () {
    if( Car::toLower(_color) != "red"){
        throw InvalidColorException();
        std::cerr << "Color is "<<_color<<" but should be red" << std::endl;
        return false;
    }
    return true;
}