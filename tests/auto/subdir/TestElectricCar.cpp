
#include <test/catch.hpp>

#include "subdir/ElectricCar.hpp"

TEST_CASE("ElectricCar OBJECT TEST","[ElectricCar]"){
    Car v(200,"White",320);
    ElectricCar elec(v);

    std::string display = "Electric Car\n200\n320\nWhite\n0\n";

    REQUIRE((elec.display().compare(display)==0));
    REQUIRE(elec.getIsStarted()==false);
    elec.start();
    REQUIRE(elec.getIsStarted()==true);
    REQUIRE(elec.getBreaker()==true);
    REQUIRE(elec.getColor()=="White");
    REQUIRE(elec.getPower()==200);
    REQUIRE(elec.getSpeed()==320);
    
}
TEST_CASE("ElectricCar Exceptions Test","[ElectricCar Exceptions]" ){
    Car v(200,"Red",320);
    try
    {
        ElectricCar elec (v);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        const char *exceptionMsg = "Color is invalid for this Car";
        CHECK(e.what() == exceptionMsg);
    }
}