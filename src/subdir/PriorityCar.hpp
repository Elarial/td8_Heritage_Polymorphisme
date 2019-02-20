#include "Car.hpp"
class PriorityCar:public Car{
    private:
        
    protected:
        bool _beacon;
        int _code;

    public:
        void startWithCode (int code);
        PriorityCar();
        PriorityCar(const Car &v);
};