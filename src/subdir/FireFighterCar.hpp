#include "PriorityCar.hpp"
class FireFighterCar:public PriorityCar{
    private:
        
    public:
        std::string display(int power,int code);
        FireFighterCar();
        FireFighterCar(Car v,int code);
};