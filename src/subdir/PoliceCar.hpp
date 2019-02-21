#ifndef POLICECAR_HPP
#define POLICECAR_HPP
#include "PriorityCar.hpp"
class PoliceCar:public PriorityCar{
    private:
    public:
        std::string display();
        PoliceCar(int power,int code);
        PoliceCar(const Car &v,int code);
        bool checkColor();
};
#endif/*<POLICECAR_HPP>*/