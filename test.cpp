#include <iostream>
#include <fstream>
#include "MatFrac.h"
#include "Fraccion.h"

using namespace std;

int main()
{
    // Create a text string, which is used to output the text file
    string myText;
    // Read from the text file
    ifstream MyReadFile("matrix1.txt");
    // Use a while loop together with the getline() function to read the file line by line
    while (getline(MyReadFile, myText))
    {
        // Output the text from the file
        // Obtenemos la primera parte del string, que es el numerador.
        string numstr = myText.substr(0,myText.find("/"));
        int numerator = stoi(numstr);

        string denstr = myText.substr(myText.find("/")+1,myText.length());
        int denominator = stoi(denstr);

        Fraccion f1(numerator, denominator);
        f1.toString();

        //cout << myText << endl; //myText "1/2"
    }
    // Close the file
    MyReadFile.close();
}
