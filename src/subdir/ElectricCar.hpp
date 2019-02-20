#include "Car.hpp"
class ElectricCar: public Car{
    private:
        bool breaker;
    public:
        void start();
        std::string display();
        ElectricCar();
        ElectricCar(Car ve);
};