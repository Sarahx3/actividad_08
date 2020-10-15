#ifndef LABORATORIO_H
#define LABORATORIO_H


#include "computadora.h"
class Laboratorio{
    private:
    Computadora arreglo[5];
    size_t cont;
    public:
    Laboratorio();

    void agregar(const Computadora &c);
    void mostrar();

};
#endif