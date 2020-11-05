#include <cmath>
#include <iostream>
#include <string>
using namespace std;

class Wektor2D
{
public:
    Wektor2D()
    {
        x = 0;
        y = 0;
    }

    void setX(int x_n1) { x = x_n1; }

    void setY(int y_n1) { y = y_n1; }

    double getX() { return x; }

    double getY() { return y; }

    Wektor2D(double x_n2, double y_n2)
    {
        x = x_n2;
        y = y_n2;
    }

    Wektor2D operator+(Wektor2D w2)
    {
        double suma_x = x + w2.x;
        double suma_y = y + w2.y;

        Wektor2D suma(suma_x, suma_y);
        return suma;
    }

    double operator*(Wektor2D ilo)
    {
        double iloczyn_xy = x * ilo.x + y * ilo.y;
        return iloczyn_xy;
    }

private:
    double x;
    double y;
};

int main()
{
    Wektor2D v1{};         // Konstruktor domyślny, wektor o wsp. [0, 0]
    v1.setX(1.);           // setter
    v1.setY(1.);           // setter
    double x1 = v1.getX(); // getter
    double y1 = v1.getY(); // getter

    Wektor2D v2{2., 2.}; // Konstruktor nadający współrzędne

    Wektor2D sum = v1 + v2; // dodawanie wektorów

    double prod = v1 * v2; // iloczyn skalarny
}