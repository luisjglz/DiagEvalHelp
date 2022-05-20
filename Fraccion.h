
#include <iostream>
using namespace std;

class Fraccion{
    int numerator;
    int denominator;
    public:
        Fraccion();
        Fraccion(int n1, int n2);

        int getNumerator(){
            return numerator;
        }

        int getDenominator(){
            return denominator;
        }

        void toString(){
            cout << numerator << "/" << denominator << endl;
        }

        Fraccion multiply(Fraccion f2){
            //Implement the multiplication
            int nr = numerator*f2.getNumerator();
            int dr = denominator*f2.getDenominator();
            Fraccion res(nr,dr);
            return res;
        }
};

Fraccion::Fraccion(){
    numerator = 0;
    denominator = 1;
}

Fraccion::Fraccion(int n1, int n2){

    if(n1 < 0 || n2 < 0){
        //We got a negative number, crash!
        //numerator = 0;
        //denominator = 1;
        //cout << "Fraction initialized with default values 0/1" << endl;
        throw "Error";
    }
    else{
        numerator = n1;
        denominator = n2;
    }
}

