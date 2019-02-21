#include "Car.hpp"

void Car::start(){
    _isStarted = true;
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
//isStarted is false by default and can be set true by starts methods only
Car::Car(int power,std::string color,int speed):_power(power),_color(color),_speed(speed),_isStarted(false){}

//Method used for string comparison ignoring case sensitivity
std::string Car::toLower(std::string s){
    std::transform(s.begin(),s.end(),s.begin(),::tolower);
    return s;
}
int Car::getPower(){
    return _power;
}

std::string Car::getColor(){
    return _color;
}
int Car::getSpeed(){
    return _speed;
}
bool Car::getIsStarted(){
    return _isStarted;
}