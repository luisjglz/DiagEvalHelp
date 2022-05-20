#include <iostream>
#include "Fraccion.h"

using namespace std;

int main(){

    //Test our 'Fraccion' class:
    Fraccion f1(2,4);
    Fraccion f2(3,6);
    Fraccion res = f1.multiply(f2);

    res.toString();

    
}