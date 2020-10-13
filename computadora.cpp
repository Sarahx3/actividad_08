#include "computadora.h"

using namespace std;

Computadora::Computadora(){}

Computadora::Computadora(const string &_nombre,
                        const string &os,
                        const string &fabricante,
                        int ram)
{
    nombre=_nombre;
    this->os=os;
    this->fabricante=fabricante;
    this->ram=ram;
}
//setters
void Computadora::setNombre(const string &v){
    nombre=v;
}
void Computadora::setFabricante(const string &v){
    fabricante=v;
}
void Computadora::setOs(const string &v){
    os=v;
}
void Computadora::setRam(int v){
    ram=v;
}
//getters
string Computadora::getFabricante(){
    return fabricante;
}
string Computadora::getNombre(){
    return nombre;
}
string Computadora::getOs(){
    return os;
}
int Computadora::getRam(){
    return ram;
}