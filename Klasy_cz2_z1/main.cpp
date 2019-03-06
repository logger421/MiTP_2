#include <iostream>
#include <stdio.h>
using namespace std;

class Vector
{
public:
    Vector(double);
    Vector(double,double);
    Vector(int,int,int);
    size_t dimension_;
private:
    double data_[3] = {0,0,0};
};

int main()
{
   Vector r1(1.0);
   Vector r2(1.0,1.0);
   Vector r3(1,2,4);
   cout << "Obiekt klasy Vector o wymiarze: " << r1.dimension_ << endl;
   cout << "Obiekt klasy Vector o wymiarze: " << r2.dimension_ << endl;
   cout << "Obiekt klasy Vector o wymiarze: " << r3.dimension_ << endl;
}

Vector::Vector(double element1)
{
    cout << "\nTworzenie obiektu klasy Vector w przestrzeni R1:" << endl;
    dimension_ = 1 ;
    data_[0] = element1;
}
Vector::Vector(double element1, double element2)
{
    cout << "\nTworzenie obiektu klasy Vector w przestrzeni R2:" << endl;
    dimension_ = 2;
    data_[0] = element1;
    data_[1] = element2;
}
Vector::Vector(int element1, int element2, int element3)
{
    cout << "\nTworzenie obiektu klasy Vector w przestrzeni R3:" << endl;
    dimension_ = 3;
    data_[0] = element1;
    data_[1] = element2;
    data_[2] = element3;
}
