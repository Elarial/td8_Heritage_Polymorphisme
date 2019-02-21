
#include <test/catch.hpp>

#include "subdir/PriorityCar.hpp"

TEST_CASE("PriorityCar OBJECT TEST","[PriorityCar]"){
    Car v(200,"Blue",320);
    PriorityCar pc(v);

    std::string display = "200\n320\nBlue\n0\n";

    REQUIRE((pc.display().compare(display)==0));
    REQUIRE(pc.getIsStarted()==false);
    REQUIRE(pc.getBeacon()==false);
    REQUIRE(pc.getColor()=="Blue");
    REQUIRE(pc.getPower()==200);
    REQUIRE(pc.getSpeed()==320);
    
}
TEST_CASE("PriorityCar Exceptions Test","[PriorityCar Exceptions]" ){
    Car v2(300,"BLUE",400);
        PriorityCar pc2 (v2);
        try
        {
            pc2.start();
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            const char *exceptionMsg = "Start method can't be used for priority's cars, use startWhithCode instead";
            CHECK(e.what() == exceptionMsg);
        }
        try
        {
            pc2.startWithCode(0);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            const char *exceptionMsg = "The Priority Car can't be started, code is invalid";
            CHECK(e.what() == exceptionMsg);
        }
    
    
}