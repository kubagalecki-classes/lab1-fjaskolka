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