
#include <test/catch.hpp>

#include "subdir/FireFighterCar.hpp"

TEST_CASE("FireFighterCar OBJECT TEST","[FireFighterCar]"){
    Car v(200,"Red",320);
    FireFighterCar fireTruck(v,123);

    std::string display = "Fire Fighter Car\n200\n320\nRed\n0\n";

    REQUIRE((fireTruck.display().compare(display)==0));
    REQUIRE(fireTruck.getIsStarted()==false);
    REQUIRE(fireTruck.getBeacon()==false);
    fireTruck.startWithCode(123);
    REQUIRE(fireTruck.getIsStarted()==true);
    REQUIRE(fireTruck.getColor()=="Red");
    REQUIRE(fireTruck.getPower()==200);
    REQUIRE(fireTruck.getSpeed()==320);
    
}
TEST_CASE("FireFighterCar Exceptions Test","[FireFighterExceptions]" ){
    Car v(200,"Blue",320);
    try
    {
        FireFighterCar fireTruck (v,123);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        const char *exceptionMsg = "Color is invalid for this Car";
        CHECK(e.what() == exceptionMsg);
    }
    Car v2(300,"RED",400);
    try
    {
        FireFighterCar fireTruck2 (v2,123);
        try
        {
            fireTruck2.start();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            const char *exceptionMsg = "Start method can't be used for priority's cars, use startWhithCode instead";
            CHECK(e.what() == exceptionMsg);
        }
        try
        {
            fireTruck2.startWithCode(0);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            const char *exceptionMsg = "The Priority Car can't be started, code is invalid";
            CHECK(e.what() == exceptionMsg);
        }
        
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        const char *exceptionMsg = "Color is invalid for this Car";
        CHECK(e.what() == exceptionMsg);
    }
    
    
}