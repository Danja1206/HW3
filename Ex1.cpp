#include <iostream>
#include <cmath>

using namespace std;

class Figure 
{
public:
    Figure() {}
    virtual void area() {}
protected:
    const double PI = acos(-1.0);
};

class Parallelogram : public Figure
{
public:
    Parallelogram(double _a, double _b, double _h) : a(_a), b(_b), h(_h) {}
    ~Parallelogram() {}
    virtual void area() { S = a * h; cout << S << endl; }
protected:
    double a, b, h, S;
};

class Circle : public Figure
{
public:
    Circle(double _a) : a(_a) {}
    ~Circle() {}
    virtual void  area() { S = PI * pow(a, 2); cout << S << endl; }
private:
    double a, S;
};

class Rectangle : public Parallelogram
{
public:
    Rectangle(double _a, double _b, double _h) : Parallelogram(_a, _b, _h) {}
    ~Rectangle() {}
    virtual void area() { S = a * b; cout << S << endl; }
};

class Square : public Parallelogram
{
public:
    Square(double _a, double _b, double _h) : Parallelogram(_a, _b, _h) {}
    ~Square() {}
    virtual void area() { S = pow(a, 2); cout << S << endl; }
};

class Rhombus : public Parallelogram
{
public:
    Rhombus(double _a, double _b, double _h) : Parallelogram(_a, _b, _h) {}
    ~Rhombus() {}
    virtual void area() { S = a * h; cout << S << endl; }
};

int main()
{
    Parallelogram P(10,0,5);
    Circle C(3);
    Rectangle R(5, 2, 0);
    Square S(10, 0, 0);
    Rhombus Rh(11, 0, 5);
    P.area();
    C.area();
    R.area();
    S.area();
    Rh.area();


    
}
