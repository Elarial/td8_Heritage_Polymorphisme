#include "Ambulance.hpp"

std::string Ambulance::display(){
    return "Ambulance\n"+Car::display();
}
Ambulance::Ambulance(int power,int code):PriorityCar(){
    checkColor();
    _power = power;
    _code = code;
}
Ambulance::Ambulance(const Car &v, int code):PriorityCar(v) {
    
    checkColor();
    _code = code;
}
bool Ambulance::checkColor (){
    if( Car::toLower(_color) != "blue-white"){
        throw InvalidColorException();
        std::cerr << "Color is "<<_color<<" but should be blue-white" << std::endl;
        return false;
    }
    return true;
}