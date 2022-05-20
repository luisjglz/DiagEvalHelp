
#include <iostream>
using namespace std;

class Fraccion
{
private:
    int numerator;
    int denominator;

    int gcd(int a, int b)
    {
        // Everything divides 0
        if (a == 0)
            return b;
        if (b == 0)
            return a;

        // base case
        if (a == b)
            return a;

        // a is greater
        if (a > b)
            return gcd(a - b, b);
        return gcd(a, b - a);
    }

public:
    Fraccion();
    Fraccion(int n1, int n2);

    int getNumerator()
    {
        return numerator;
    }

    int getDenominator()
    {
        return denominator;
    }

    void toString()
    {
        cout << numerator << "/" << denominator << endl;
    }

    Fraccion multiply(Fraccion f2)
    {
        // Implement the multiplication
        int nr = numerator * f2.getNumerator();
        int dr = denominator * f2.getDenominator();
        Fraccion res(nr, dr);
        return res;
    }
};

Fraccion::Fraccion()
{
    numerator = 0;
    denominator = 1;
}

Fraccion::Fraccion(int n1, int n2)
{

    if (n1 < 0 || n2 < 0)
    {
        // We got a negative number, crash!
        numerator = 0;
        denominator = 1;
        cout << "Fraction initialized with default values 0/1" << endl;
    }
    else
    {
        //Simplify... n1=2/n2=4... mcd=2 
        int mcd = gcd(n1, n2);
        numerator = n1/mcd;
        denominator = n2/mcd;
    }
}
