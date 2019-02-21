
#include <test/catch.hpp>

#include "subdir/Ambulance.hpp"

TEST_CASE("Ambulance OBJECT TEST","[Ambulance]"){
    Car v(200,"blue-white",320);
    Ambulance samu(v,123);

    std::string display = "Ambulance\n200\n320\nblue-white\n0\n";

    REQUIRE((samu.display().compare(display)==0));
    REQUIRE(samu.getIsStarted()==false);
    samu.startWithCode(123);
    REQUIRE(samu.getIsStarted()==true);
    REQUIRE(samu.getColor()=="blue-white");
    REQUIRE(samu.getPower()==200);
    REQUIRE(samu.getSpeed()==320);
    
}
TEST_CASE("Ambulance Exceptions Test","[FireFighterExceptions]" ){
    Car v(200,"Blue",320);
    try
    {
        Ambulance samu (v,123);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        const char *exceptionMsg = "Color is invalid for this Car";
        CHECK(e.what() == exceptionMsg);
    }
    Car v2(300,"BLUE-WHITE",400);
    try
    {
        Ambulance samu2 (v2,123);
        try
        {
            samu2.start();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            const char *exceptionMsg = "Start method can't be used for priority's cars, use startWhithCode instead";
            CHECK(e.what() == exceptionMsg);
        }
        try
        {
            samu2.startWithCode(0);
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