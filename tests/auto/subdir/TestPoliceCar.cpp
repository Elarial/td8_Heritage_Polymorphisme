
#include <test/catch.hpp>

#include "subdir/PoliceCar.hpp"

TEST_CASE("PoliceCar OBJECT TEST","[PoliceCar]"){
    Car v(200,"Blue",320);
    PoliceCar police(v,123);

    std::string display = "Police Car\n200\n320\nBlue\n0\n";

    REQUIRE((police.display().compare(display)==0));
    REQUIRE(police.getIsStarted()==false);
    REQUIRE(police.getBeacon()==false);
    police.startWithCode(123);
    REQUIRE(police.getIsStarted()==true);
    REQUIRE(police.getColor()=="Blue");
    REQUIRE(police.getPower()==200);
    REQUIRE(police.getSpeed()==320);
    
}
TEST_CASE("PoliceCar Exceptions Test","[PoliceCar Exceptions]" ){
    Car v(200,"Red",320);
    try
    {
        PoliceCar police (v,123);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        const char *exceptionMsg = "Color is invalid for this Car";
        CHECK(e.what() == exceptionMsg);
    }
    Car v2(300,"BLUE",400);
    try
    {
        PoliceCar police2 (v2,123);
        try
        {
            police2.start();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            const char *exceptionMsg = "Start method can't be used for priority's cars, use startWhithCode instead";
            CHECK(e.what() == exceptionMsg);
        }
        try
        {
            police2.startWithCode(0);
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