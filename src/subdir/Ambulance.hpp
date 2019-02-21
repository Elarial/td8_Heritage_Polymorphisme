#ifndef AMBULANCE_HPP
#define AMBULANCE_HPP
#include "PriorityCar.hpp"
class Ambulance:public PriorityCar{
    private:
    public:
        std::string display();
        Ambulance(const int power,const std::string color,const int speed,const int code);
        Ambulance(const Car &v,int code);
        bool checkColor();
        
};
#endif /*AMBULANCE_HPP*/