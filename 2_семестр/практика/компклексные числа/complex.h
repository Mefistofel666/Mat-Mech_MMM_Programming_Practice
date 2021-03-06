#include <iostream>

// интерфейс класса Complex
class Complex
{
public:
    Complex(double x = 0, double y = 0):real(x), im(y){}
    friend Complex operator+(Complex &x, Complex &y);
    friend Complex operator-(Complex &x, Complex &y);
    friend Complex operator*(Complex &x, Complex &y);
    friend Complex operator/(Complex &x, Complex &y);
    Complex conjugate();
    double module();
    friend std::ostream &operator<<(std::ostream &os, const Complex &cls);

private:
    double real;
    double im;
};