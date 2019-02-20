#include "PriorityCar.hpp"
class FireFighterCar:public PriorityCar{
    private:
        
    public:
        std::string display();
        FireFighterCar(int power,int code);
        FireFighterCar(const Car &v,int code);
};