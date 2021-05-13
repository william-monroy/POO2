class Fraccion
{
private:
    int num;
    int den;
public:
    Fraccion(int num, int den);
    Fraccion(); 
    void reducir();
    void imprimir();
    Fraccion suma(Fraccion f2);
    Fraccion multiplicacion(Fraccion f3);
};

Fraccion::Fraccion(int num, int den)
{   
    this->num = num;
    this->den = den;    
}

Fraccion::Fraccion()
{
    this->num = 0;
    this->den = 1;
}

void Fraccion::reducir(){
    for (int i = 10; i >= 2; i--)
    {
        while (num%i==0 && den%i==0)
        {
            num = num / i;
            den = den / i;
        }        
    }
}

void Fraccion::imprimir(){
    cout << num << "/" << den << endl;
}

Fraccion Fraccion::suma(Fraccion f2){
    Fraccion resultado;
    resultado.num = (this->num * f2.den) + (this-> den * f2.num);
    resultado.den = this->den * f2.den;
    resultado.reducir();
    return resultado;
}

Fraccion Fraccion::multiplicacion(Fraccion f3){
    Fraccion resultado;
    resultado.num = (this->num * f3.num);
    resultado.den = (this->den * f3.den);
    resultado.reducir();
    return resultado;
}