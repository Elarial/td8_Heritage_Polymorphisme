#include "Car.hpp"

void Car::start(){

}
std::string Car::display(){
    return std::to_string(_power) +'\n'+std::to_string(_speed)+'\n'+_color+'\n'+std::to_string(_isStarted)+'\n';
}
void Car::accelerate(int v){

}
Car::Car(){

}
Car::Car(const Car &v){
    _power = v._power;
    _color = v._color;
    _speed = v._speed;
    _isStarted = v._isStarted;    
}
Car::Car(int power,std::string color,int speed,bool isStarted):_power(power),_color(color),_speed(speed),_isStarted(isStarted){}