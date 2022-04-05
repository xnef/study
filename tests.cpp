#include "oop.hpp"
#include "tests.hpp"
#include <cassert>
void Tests::InvokeTests(){
    EngineOverflowPowerTest();
    WheelMaxSizeTest();
}

void Tests::EngineOverflowPowerTest(){

    Engine engine = {500};

    assert(!engine.Work());

}

void Tests::WheelMaxSizeTest(){
    Wheel wheel = {25};

    assert(wheel.Work());
}
