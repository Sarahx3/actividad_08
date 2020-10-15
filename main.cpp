#include <iostream>

#include "laboratorio.h"

using namespace std;

int main(){

    Computadora compu1=Computadora("X571G","Windows 10","AsusTec Computer Inc",8);
    Computadora compu2;
    compu2.setNombre("X100G");
    compu2.setOs("Linux");
    compu2.setFabricante("AsusTec Computer Inc");
    compu2.setRam(8);

    Laboratorio lab;
    lab.agregar(compu1);
    lab.agregar(compu2);

    lab.mostrar();
    //cout<<compu1;

    return 0;
}