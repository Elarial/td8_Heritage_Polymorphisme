#include "PoliceCar.hpp"

std::string PoliceCar::display(){
    return "Police Car\n"+Car::display();
}

PoliceCar::PoliceCar(int power,int code):PriorityCar(){
    checkColor();
    _power = power;
    _code = code;
}
PoliceCar::PoliceCar(const Car &v, int code):PriorityCar(v) {
    
    checkColor();
    _code = code;
}

bool PoliceCar::checkColor () {
    if( Car::toLower(_color) != "blue"){
        throw InvalidColorException();
        std::cerr << "Color is "<<_color<<" but should be red" << std::endl;
        return false;
    }
    return true;
}