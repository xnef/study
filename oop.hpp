#ifndef OOP
#define OOP

class Mechanism{
protected:
    bool Break(int value, int max_size);
    virtual bool Work() = 0;
};

const int WheelMaxSize = 30;
class Wheel : Mechanism{
private:
    int size ;
public:
    Wheel(int size){
        this->size = size;
    }
    bool Work();
    int GetSize(){return size;};
};


const int EngineMaxPower = 400;
class Engine : Mechanism{
private:
    int power;
public:
    Engine(int power){
        this->power = power;
    }
    bool Work();
    int GetPower(){return power;};
};

const int numOfWheels = 4;

class Car{
private:
    Wheel* wheel[numOfWheels];
    Engine* engine;

public:
    Car(int wheel_size, int power);
    ~Car();
    void Ride();
};

#endif // OOP

