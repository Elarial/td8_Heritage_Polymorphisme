
#include <test/catch.hpp>

#include "subdir/Car.hpp"

TEST_CASE("CAR OBJECT TEST","[CAR]"){
    Car voiture1(100,"Red",320,true);
    Car voiture2(voiture1);
    std::string display = "100\n320\nRed\ntrue\n";

    REQUIRE(voiture2.display().compare(display));
}