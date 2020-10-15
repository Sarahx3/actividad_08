#include <iostream>

#include "laboratorio.h"

using namespace std;

int main(){

    Computadora compu1=Computadora("X571G","Windows 10","AsusTec",8);
    Computadora compu2;
    compu2.setNombre("X100G");
    compu2.setOs("Linux");
    compu2.setFabricante("AsusTec");
    compu2.setRam(16);

    Laboratorio lab;
    lab.agregar(compu1);
    lab.agregar(compu2);

    Computadora compu3;
    cin >> compu3;
    lab.agregar(compu3);

    lab.mostrar();
    //cout<<compu1;

    return 0;
}