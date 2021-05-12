#ifndef Punto_h
#define Punto_h

class Punto
{
private:
    double x;
    double y;

public:
    Punto();
    Punto(double x, double y);
    ~Punto();
    double getX();
    void setX(double x);
    double getY();
    void setY(double y);
    double distancia(Punto p);
};

Punto::Punto()
{
    this->x = 0;
    this->y = 0;
}

Punto::Punto(double x, double y)
{
}

Punto::~Punto()
{
}

double Punto::getX()
{
    return this->x;
}

void Punto::setX(double x)
{
    this->x = x;
}

double Punto::getY()
{
    return this->y;
}
void Punto::setY(double y)
{
    this->y = y;
}

double Punto::distancia(Punto p){
    return sqrt(pow(this->x - p.getX(), 2) + pow(this->y - p.getY(), 2));
}

#endif