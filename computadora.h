#ifndef COMPUTADORA_H
#define PERSONAJE_H

#include <iostream>
#include <iomanip>

using namespace std;

class Computadora{
    private:
    string nombre;//1
    string os;//2
    string fabricante;//3
    int ram;//4  
    
    public:
    Computadora();
    Computadora(const string &nombre,
                const string &os,
                const string &fabricante,
                int ram);
    
    void setNombre(const string &v);
    void setOs(const string &v);
    void setFabricante(const string &v);
    void setRam(int v);

    string getNombre();
    string getOs();
    string getFabricante();
    int getRam();

    friend ostream& operator <<(ostream &out, const Computadora &p)
    {
        out<< left;
        out<< setw(10)<<p.nombre;
        out<< setw(12)<<p.os;
        out<< setw(12)<<p.fabricante;
        out<< setw(5)<<p.ram;
        cout<<endl;
        return out;
    }
};

#endif