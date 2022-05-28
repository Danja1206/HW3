#include <iostream>

using namespace std;

class Fraction
{
public:
    Fraction(int _a = 1, int _b = 1) : a(_a), b(_b) {}
    void print()
    {
        if(b != 0)
            cout << a << "/" << b << endl; 
    }
    Fraction operator+(Fraction& r_op)
    {
        if (b != 0 && r_op.b != 0)
        {
            int up = a * r_op.b + r_op.a * b;
            int down = r_op.b * b;
            return Fraction(up, down);
        }
    }
    Fraction operator-(Fraction& r_op)
    {
        if (b != 0 && r_op.b != 0)
        {
            int up = a * r_op.b - r_op.a * b;
            int down = r_op.b * b;
            return Fraction(up, down);
        }
    }
    Fraction operator*(Fraction& r_op)
    {
        if (b != 0 && r_op.b != 0)
        {
            int up = a * r_op.a;
            int down = r_op.b * b;
            return Fraction(up, down);
        }
    }
    Fraction operator/(Fraction& r_op)
    {
        if (b != 0 && r_op.b != 0)
        {
            int up = a * r_op.b;
            int down = r_op.a * b;
            return Fraction(up, down);
        }
    }
    void operator--()
    {
        a--; b--;
    }
    void operator--(int)
    {
        a--; b--;
    }
    bool operator==(const Fraction& r_op)
    {
        if (b != 0)
        {
            if (b == r_op.b && a == r_op.a)
                return 1;
            else return 0;
        }
    }
    bool operator!=(const Fraction& r_op)
    {
        if (b != 0)
        {
            if (b != r_op.b && a != r_op.a)
                return 1;
            else return 0;
        }
    }
    bool operator<(const Fraction& r_op)
    {
        if (b != 0)
        {
            if (b < r_op.b && a < r_op.a)
                return 1;
            else return 0;
        }
    }
    bool operator>=(const Fraction& r_op)
    {
        if (b != 0)
        {
            if (!(b < r_op.b && a < r_op.a) || b == r_op.b && a == r_op.a)
                return 1;
            else return 0;
        }
    }
    bool operator>(const Fraction& r_op)
    {
        if (b != 0)
        {
            if (b > r_op.b && a > r_op.a)
                return 1;
            else return 0;
        }
    }
    bool operator<=(const Fraction& r_op)
    {
        if (b != 0)
        {
            if (!(b > r_op.b && a > r_op.a) && b == r_op.b && a == r_op.a)
                return 1;
            else return 0;
        }
    }
private:
    int a, b;
};




int main()
{
    Fraction F1(1, 5), F2(1, 5), F3;
    F3 = F1 + F2;
    F3.print();
    F3 = F1 - F2;
    F3.print();
    F3 = F1 * F2;
    F3.print();
    F3 = F1 / F2;
    F3.print();
    F2--;
    F2.print();
    bool check = F1 == F2;
    cout << check << endl;
    bool checkNotEqual = F1 != F2;
    cout << checkNotEqual << endl;
    bool checkLess = F1 < F2;
    cout << checkLess << endl;
    bool checkMoreOr = F1 >= F2;
    cout << checkMoreOr << endl;
    bool checkMore = F1 >= F2;
    cout << checkMore << endl;
    bool checkLessOr = F1 <= F2;
    cout << checkLessOr << endl;


}
