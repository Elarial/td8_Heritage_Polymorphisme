
#include <test/catch.hpp>

#include "subdir/Car.hpp"

TEST_CASE("CAR OBJECT TEST","[CAR]"){
    Car voiture1(100,"Red",320);
    Car voiture2(voiture1);
    std::string display = "100\n320\nRed\nFalse\n";

    REQUIRE(voiture2.display().compare(display));
}