
#include <test/catch.hpp>

#include "subdir/FireFighterCar.hpp"

TEST_CASE("FireFighterCar OBJECT TEST","[FireFighterCar]"){
    Car voiture1(200,"Red",320,true);
    FireFighterCar fireTruck(voiture1,123);

    std::string display = "200\n320\nRed\ntrue\n";

    REQUIRE(fireTruck.display().compare(display));
}