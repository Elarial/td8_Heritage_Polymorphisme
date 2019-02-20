#include "PriorityCar.hpp"
class PoliceCar:public PriorityCar{
    private:
    public:
        std::string display();
        PoliceCar(int power,int code);
        PoliceCar(Car v,int code);
};