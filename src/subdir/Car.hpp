#include <string>
class Car{
    private:
        
    protected:
        int _power;
        std::string _color;
        int _speed;
        bool _isStarted;
        
    public:
        void start();
        std::string display();
        void accelerate(int v);
        Car();
        Car(const Car &v);
        Car(int power,std::string color,int speed,bool isStarted);

};