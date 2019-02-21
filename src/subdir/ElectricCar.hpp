#ifndef ELECTRICCAR_HPP
#define ELECTRICCAR_HPP
#include "Car.hpp"
class ElectricCar: public Car{
    private:
        bool _breaker;
    public:
        void start();
        std::string display();
        ElectricCar();
        ElectricCar(const Car &v);
        bool checkColor();
        bool getBreaker();
};
#endif /*ELECTRICCAR_HPP*/