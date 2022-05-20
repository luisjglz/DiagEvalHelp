#include <iostream>
#include "Fraccion.h"

class MatFrac
{
    int size;
    Fraccion matrix[3][3];

public:
    MatFrac()
    {
        size = 3;
        for (int r = 0; r < size; r++)
        {
            for (int c = 0; c < size; c++)
            {
                Fraccion temp_frac; // default 0/1
                matrix[r][c] = temp_frac;
            }
        }
    }
    MatFrac(Fraccion mat[3][3])
    {
        size = 3;
        for (int i = 0; i < size; i++)
            for (int j = 0; j < size; j++)
            {
                matrix[i][j] = mat[i][j];
            }
    }
    void printMatrix()
    {
        for (int r = 0; r < size; r++)
        {
            for (int c = 0; c < size; c++)
            {
                Fraccion temp_frac = matrix[r][c];
                temp_frac.toString();
                cout << "   | ";
            }
            std::cout << "" << endl;
        }
    }
};