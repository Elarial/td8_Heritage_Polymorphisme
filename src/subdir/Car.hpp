#include <string>
#include <exception>
#include <iostream>
#include <algorithm>

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
        Car(int power,std::string color,int speed);
        std::string toLower (std::string s);
        int getPower();
        std::string getColor();
        int getSpeed();
        bool getIsStarted();

};

class InvalidColorException : public std::exception
{
  private:
  public:
    const char *what() const throw()
    {
        return "Color is invalid for this Car";
    }
};