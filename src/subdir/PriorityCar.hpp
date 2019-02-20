#include "Car.hpp"
class PriorityCar:public Car{
    private:
        
    protected:
        bool beacon;
        int code;

    public:
        void startWithCode (int code);
        PriorityCar();
};