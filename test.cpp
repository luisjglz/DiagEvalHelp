#include <iostream>
#include "Fraccion.h"

using namespace std;

int main(){

    //Test our 'Fraccion' class:
    Fraccion CesarC(2,4);
    Fraccion JuanPablo(34,12);
    Fraccion f(-1,-2);

    CesarC.toString();
    JuanPablo.toString();

    Fraccion r = CesarC.multiply(JuanPablo);

    r.toString();
    
}