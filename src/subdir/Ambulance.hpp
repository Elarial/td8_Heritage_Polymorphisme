#include "PriorityCar.hpp"
class Ambulance:public PriorityCar{
    private:
    public:
        std::string display();
        Ambulance(int power,int code);
        Ambulance(Car v,int code);

}