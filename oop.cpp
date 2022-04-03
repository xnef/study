#include <iostream>

class Mechanism{
protected:
    virtual void DontBreak() = 0;
};

class Wheel : Mechanism{

private:
    int size ;
    void DontBreak(){std::cout<<"wheel no break"<<std::endl;}
public:
    Wheel(int size){
        this->size = size;
    }
    void Spin(){std::cout << "wheel spinnnnninn"<<std::endl; DontBreak();}
    int GetSize(){return size;};
};

//----
class Engine : Mechanism{
private:
    int power;
    bool breakTrigger = false;
    void DontBreak(){
        if(breakTrigger) {
            std::cout<<"engine break"<<std::endl;
            breakTrigger = false;
        }
        else {
            std::cout<<"engine no break"<<std::endl;
            breakTrigger = true;
        }
    }
public:
    Engine(int power){
        this->power = power;
    }
    void Pull(){std::cout << "engine puuuuuuuuuuuuuuuuuuuulllllllllll"<<std::endl; DontBreak();}
    int GetPower(){return power;};
};



const int numOfWheels = 4;
class Car{
private:
    Wheel* wheel[numOfWheels];
    Engine* engine;

public:
    Car(int wheel_size, int power){
        for (int i =0; i< numOfWheels; i++){
            wheel[i] = new Wheel(wheel_size);
        }
        engine = new Engine(power);
    }

    ~Car(){
        for (int i =0; i< numOfWheels; i++){
            delete wheel[i];
        }
        delete engine;
    }
public:
    void Ride(){
        for (int i =0; i< numOfWheels; i++){
            wheel[i]->Spin();
        }
        engine->Pull();
    }
};



int main(){
    Car goodCar(14,150);
    goodCar.Ride();
}
