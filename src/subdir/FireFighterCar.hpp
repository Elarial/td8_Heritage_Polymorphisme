#ifndef FIREFIGHTERCAR_HPP
#define FIREFIGHTERCAR_HPP
#include "PriorityCar.hpp"
class FireFighterCar:public PriorityCar{
    private:
        
    public:
        std::string display();
        FireFighterCar(const int power,const std::string color,const int speed,const int code);
        FireFighterCar(const Car &v,int code);
        bool checkColor();
};
#endif /*FIREFIGHTERCAR_HPP*/