#ifndef LABORATORIO_H
#define LABORATORIO_H

#include <fstream>
#include <vector>
#include <algorithm>

#include "computadora.h"

class Laboratorio{
    private:
    vector<Computadora> compus;

    public:
    Laboratorio();

    void agregar(const Computadora &c);
    void mostrar();
    void respaldar_tabla();
    void respaldar();
    void recuperar();

    void insertar(const Computadora &c, size_t pos);
    size_t size();
    void inicializar(const Computadora &c, size_t n);
    void eliminar(size_t pos);
    void eliminarUltimo();
    void ordenar();

    Computadora* buscar(const Computadora &c);

    //INSERSION
    friend Laboratorio& operator >>(Laboratorio &l, const Computadora &c){
        l.agregar(c);
        return l;

    }

};
#endif