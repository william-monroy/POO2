#ifndef Fraccion_h
#define Fraccion_h

class Fraccion
{
private:
    int num;
    int den;

public:
    Fraccion();
    Fraccion(int num, int den);
    ~Fraccion();
    int getNum();
    void setNum(int);
    int getDen();
    void setDen(int);
    Fraccion operator+(Fraccion);
};

Fraccion::Fraccion()
{
    this->num = 1;
    this->den = 2;
}

Fraccion::Fraccion(int num, int den)
{
    this->num = num;
    this->den = den;
}

Fraccion::~Fraccion()
{
}

int Fraccion::getNum()
{
    return this->num;
}
void Fraccion::setNum(int num)
{
    this->num = num;
}

int Fraccion::getDen()
{
    return this->den;
}
void Fraccion::setDen(int den)
{
    this->den = den;
}

Fraccion Fraccion::operator+(Fraccion fraccion){
    
}


#endif
