
// INSTRUCCIONES:
// Escribe la clase Tiempo de acuerdo con
// los comentarios que se encuentran enseguida

// Nombre de la clase: Tiempo
class Tiempo
{
    // parte privada
private:
    // atributos hora, minu
    int hora;
    int minu;

    // parte pública
public:
    // * constructor default que inicialice la hora con 0 horas y 0 minutos
    Tiempo();
    // * constructor con parámetros que recibe hora y minutos (en ese orden)
    Tiempo(int hora, int minu);
    // * métodos de acceso y de modificación para los 2 atributos
    int getHora() { return this->hora; }
    void setHora(int hora) { this->hora = hora; }
    int getMinu() { return this->minu; }
    void setMinu(int minu) { this->minu = minu; }
    // * método duracion, que recibe como parámetro un objeto de tipo tiempo y regresa un entero
    int duracion(Tiempo tiempo);
    //   calcula la duración de un evento que tiene como hora de inicio la del objeto actual
    //   y como hora de terminación la del objeto que se recibe como parámetro
    //   sugerencia, para calcular la diferencia convierte ambos tiempos a minutos
};

// implementa los métodos
Tiempo::Tiempo()
{
    this->hora = 0;
    this->minu = 0;
}

Tiempo::Tiempo(int hora, int minu)
{
    this->hora = hora;
    this->minu = minu;
}

int Tiempo::duracion(Tiempo tiempo){
    int minutosInicio = (this->hora * 60) + this->minu;
    int minutosFin = (tiempo.hora*60) + tiempo.minu;
    return minutosFin - minutosInicio;
}