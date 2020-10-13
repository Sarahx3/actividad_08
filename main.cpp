#include <iostream>

#include "computadora.h"

using namespace std;

int main(){

    Computadora compu1=Computadora("X571G","Windows 10","AsusTec Computer Inc",8);
    Computadora compu2;
    compu2.setNombre("X100G");
    compu2.setOs("Windows 10");
    compu2.setFabricante("AsusTec Computer Inc");
    compu2.setRam(8);

    return 0;
}