#ifndef PRIORITYCAR_HPP
#define PRIORITYCAR_HPP
#include "Car.hpp"

class PriorityCar : public Car
{
  private:
  protected:
    bool _beacon;
    int _code;

  public:
    void startWithCode(int code);
    PriorityCar();
    PriorityCar(const Car &v);
    bool getBeacon();
};

class PriorityCarInvalidCodeException : public std::exception
{
  private:
  public:
    const char *what() const throw()
    {
        return "The Priority Car can't be started, code is invalid";
    }
};

class InvalidStartUseException : public std::exception
{
  private:
  public:
    const char *what() const throw()
    {
        return "Start method can't be used for priority's cars, use startWhithCode instead";
    }
};
#endif /*PRIORITYCAR_HPP*/



