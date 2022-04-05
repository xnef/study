#include <iostream>
#include <string>
#include <stdexcept>
#include "oop.hpp"
using namespace std;


bool Mechanism::Break(int value, int max_size){
    bool res = value > max_size;
    string isBreakStr = res ? " " : " no ";
    cout<< ( " and" + isBreakStr + "break");
    return res;
}

bool Wheel::Work(){
    cout<<"\nwheel spiin";
    return !Break(size, WheelMaxSize);
}

bool Engine::Work(){
    cout << "\nengine puuuuuuuuuuuuuuuuuuuulllllllllll";
    return !Break(power, EngineMaxPower);
}

Car::Car(int wheel_size, int power){
    for (int i =0; i< numOfWheels; i++){
        this->wheel[i] = new Wheel(wheel_size);
    }
    this->engine = new Engine(power);
}

Car::~Car(){
    for (int i =0; i< numOfWheels; i++){
        delete wheel[i];
    }
    delete engine;
}

void Car::Ride(){
    for (int i =0; i< numOfWheels; i++){
        wheel[i]->Work();
    }
    engine->Work();
}
