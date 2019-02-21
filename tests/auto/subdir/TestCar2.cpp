#include <test/catch.hpp>
#include "subdir/Ambulance.hpp"

TEST_CASE("TESTS EX2", "[Ex2]")
{
    Car *v(0);
    Ambulance *samu = new Ambulance(100, 200);
    v = samu;
    std::cout << v->display() << std::endl;

    delete v;
    delete samu;
}
TEST_CASE("TESTS EX3", "[Ex3]")
{
    PriorityCar *pc (0);
    Car *car (0);
    Ambulance *amb1 = new Ambulance(100,200);
    Ambulance *amb2 = new Ambulance(100,200);
    pc = amb1;
    car = amb2;
    
}