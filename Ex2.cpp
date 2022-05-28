#include <iostream>

using namespace std;

class Car
{
public:
    Car(string _company, string _model) : company(_company), model(_model) { cout << _company << " " << _model << endl; }
private:
    string company, model;
};

class PassengerCar : Car
{
public:
    PassengerCar(string _company, string _model) : Car(_company, _model) { cout << _company << " " << _model << endl; }
    ~PassengerCar() {}
};

class Bus : Car
{
public:
    Bus(string _company, string _model) : Car(_company, _model) { cout << _company << " " << _model << endl; }
    ~Bus() {}
};

class Minivan : PassengerCar, Bus
{
public:
    Minivan(string _company, string _model) : PassengerCar(_company, _model), Bus(_company, _model) { cout << _company << " " << _model << endl; }
    ~Minivan() {}
};

int main()
{
    PassengerCar P("LDC", "ASC");
    Bus B("Lavsd", "CVSS");
    Minivan M("Lada", "Ccvv2");
    
}

