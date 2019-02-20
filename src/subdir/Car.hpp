#include <string>
class Car{
    private:
        
    protected:
        int power;
        std::string color;
        int speed;
        bool isStarted;
        
    public:
        void start();
        std::string display();
        void accelerate(int v);
        Car();
        //Car(Car v);

};