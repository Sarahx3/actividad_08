#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <fstream>
#include "computadora.h"
class Laboratorio{
    private:
    Computadora arreglo[5];
    size_t cont;
    public:
    Laboratorio();

    void agregar(const Computadora &c);
    void mostrar();
    void respaldar_tabla();
    void respaldar();
    void recuperar();

    //INSERSION
    friend Laboratorio& operator >>(Laboratorio &l, const Computadora &c){
        l.agregar(c);
        return l;

    }

};
#endif