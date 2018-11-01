#include "matrix.h"
#include <iostream>
using namespace std;

matrix::matrix(){}

void matrix::createMatrix (int row, int colm, int *num, matrix& mat)
{
    mat.row = row;
    mat.colm = colm;
    mat.data = new int* [row];

    for (int i = 0; i < row; i++)
    {
        mat.data[i] = new int [colm];
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < colm; j++)
        {
            mat.data[i][j] = num[i * colm + j];
        }
    }
}
//_________________________________________________

// Overloading + Operator.
matrix matrix::operator+ (matrix ma2)
{
    matrix ma;
    int arr[row * colm];
    createMatrix (row, colm, arr, ma);
    for (int i=0; i <row; i++)
    {
        for (int j=0; j <colm; j++)
        {
            ma.data[i][j] = data[i][j] + ma2.data[i][j];
        }
    }
    return ma;
}
//__________________________________________________

// Overloading - Operator
matrix matrix::operator- (matrix ma2)
{
    matrix ma;
    int arr[row * colm];
    createMatrix (row, colm, arr, ma);
    for (int i=0; i < row; i++)
    {
        for (int j=0; j < colm; j++)
        {
            ma.data[i][j] = data[i][j] - ma2.data[i][j];
        }
    }
    return ma;
}
//__________________________________________________

// Overloading * Operator. to multiply two matrices.
matrix matrix::operator* (matrix ma2)
{
    matrix ma;
    int arr[row * ma2.colm];
    createMatrix (row, ma2.colm, arr, ma);

    for(int i=0; i < row; i++)
    {
        for(int j=0; j < ma2.colm; j++)
        {
            ma.data[i][j] = 0;
        }
    }
    for(int i=0; i < row; i++)
    {
        for(int j=0; j < ma2.colm; j++)
        {
            for(int k=0; k < colm; k++)
            {
                ma.data [i][j] += data[i][k] * ma2.data[k][j];
            }
        }
    }
    return ma;
}
//__________________________________________________

// Overloading + operator to add a number to entire matrix.
matrix matrix::operator+ (int scalar)
{
    matrix ma;
    int arr[row * colm];
    createMatrix (row, colm, arr, ma);
    for (int i=0; i < row; i++)
    {
        for (int j=0; j <colm; j++)
        {
            ma.data[i][j] = data[i][j] + scalar;
        }
    }
    return ma;
}
//____________________________________________________

// Overloading - operator to subtract a number from entire matrix.
matrix matrix::operator- (int scalar)
{
    matrix ma;
    int arr[row * colm] ;
    createMatrix (row, colm, arr, ma);
    for (int i=0; i < row; i++)
    {
        for (int j=0; j < colm; j++)
        {
            ma.data[i][j] = data[i][j] - scalar;
        }
    }
    return ma;
}
//____________________________________________________

// Overloading * operator to multiply a number by entire matrix.
matrix matrix::operator* (int scalar)
{
    matrix ma;
    int arr[row * colm];
    createMatrix (row, colm, arr, ma);
    for (int i=0; i < row; i++)
    {
        for (int j=0; j < colm; j++)
        {
            ma.data[i][j] = data[i][j] * scalar;
        }
    }
    return ma;
}

//_____________________________________________________

// Overloading += Operator to add two matrices and store in the first matrix.
matrix matrix::operator+= (matrix ma2)
{
    matrix ma1;
    ma1.row = row;
    ma1.colm = colm;
    int arr[ma1.row * ma1.colm];
    createMatrix (ma1.row, ma1.colm, arr, ma1);
    for (int i=0; i < ma1.row; i++)
    {
        for (int j=0; j<ma1.colm; j++)
        {
            ma1.data[i][j] +=  ma2.data[i][j];
        }
    }
    return ma1;
}
//_____________________________________________________

// Overloading -= Operator to subtract two matrices and store in the first matrix.
matrix matrix::operator-= (matrix ma2)
{
    matrix ma1;
    ma1.row = row;
    ma1.colm = colm;
    int arr[ma1.row * ma1.colm];
    createMatrix (ma1.row, ma1.colm, arr, ma1);
    for (int i=0; i < ma1.row; i++)
    {
        for (int j=0; j < ma1.colm; j++)
        {
            ma1.data[i][j] -= ma2.data[i][j];
        }
    }
    return ma1;
}
//______________________________________________________

// Overloading += Operator to add a scalar to matrix and store in the same matrix.
matrix matrix::operator+= (int scalar)
{
    cout << "Enter the number you want to add the matrix with: ";
    cin >> scalar;
    matrix ma1;
    ma1.row = row;
    ma1.colm = colm;
    int arr[ma1.row * ma1.colm];
    createMatrix (ma1.row, ma1.colm, arr, ma1);
    for (int i=0; i < ma1.row; i++)
    {
        for (int j=0 ; j < ma1.colm; j++)
        {
            ma1.data[i][j] +=  scalar;
        }
    }
    return ma1;
}
//________________________________________________________

// Overloading -= Operator to subtract a scalar from matrix and store in the same matrix.
matrix matrix::operator-= (int scalar)
{
    cout << "Enter the number you want to add the matrix with: ";
    cin >> scalar;
    matrix ma1;
    ma1.row = row;
    ma1.colm = colm;
    int arr[ma1.row * ma1.colm];
    createMatrix (ma1.row, ma1.colm, arr, ma1);
    for (int i=0; i < ma1.row; i++)
    {
        for (int j=0; j < ma1.colm; j++)
        {
            ma1.data[i][j] -= scalar;
        }
    }
    return ma1;
}
//_________________________________________________________

// Overloading ++ Operator to increase all matrix elements by 1.
matrix matrix::operator++ ()
{
    matrix ma1;
    ma1.row = row;
    ma1.colm = colm;
    int arr[ma1.row * ma1.colm];
    createMatrix (ma1.row, ma1.colm, arr, ma1);
    for (int i=0; i < ma1.row; i++)
    {
        for (int j=0; j < ma1.colm; j++)
        {
            ma1.data[i][j]++;
        }
    }
    return ma1;

}
//___________________________________________________________

// Overloading -- Operator to decrease all matrix elements by 1.
matrix matrix::operator-- ()
{
    matrix ma1;
    ma1.row = row;
    ma1.colm = colm;
    int arr[ma1.row * ma1.colm];
    createMatrix (ma1.row, ma1.colm, arr, ma1);
    for (int i=0; i < ma1.row; i++)
    {
        for (int j=0; j<ma1.colm; j++)
        {
            ma1.data[i][j]--;
        }
    }
    return ma1;
}
//___________________________________________________________

// Overloading == Operator to compare the similarity of two matrices.
bool matrix::operator== (matrix mat2)
{
    if(row==mat2.row && colm==mat2.colm)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<colm; j++)
            {
                if(data[i][j]!=mat2.data[i][j])
                    return false;
            }
        }
        return true;
    }
    return false;
}
//__________________________________________________________

// Overloadin != operator to compare the similarity of two matrices.
bool matrix::operator!= (matrix mat2)
{
    if(row==mat2.row && colm==mat2.colm)
    {
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<colm; j++)
            {
                if(data[i][j]!=mat2.data[i][j])
                    return true;
            }
        }
        return false;
    }
    return true;
}
//____________________________________________________

// Function to test if the matrix is a square matrix or not.
bool matrix:: square(matrix mat)
{
    if(mat.row == mat.colm)
        return true;
    else
        return false;
}
//____________________________________________________

// Function to test if the matrix is symmetric or not.
bool matrix:: symatric(matrix mat)
{
    if(mat.row==mat.colm)
    {
        for(int i=0; i<mat.row; i++)
        {
            for(int j=0; j<mat.colm; j++)
            {
                if(mat.data[i][j]!=mat.data[j][i])
                    return false;
            }
        }
        return true;
    }
    return false;
}
//___________________________________________________

// Function to test if the matrix is an identity matrix or not.
bool matrix:: identit (matrix mat)
{
    if(mat.row == mat.colm)
    {
        for(int i=0; i < mat.row; i++)
        {
            for(int j=0; j < mat.colm; j++)
            {
                if(i == j && mat.data[i][j] == 1)
                    continue;
                else if(i != j && mat.data[i][j] == 0)
                    continue;
                else
                    return false;
            }
        }
        return true;
    }
    return false;
}
//____________________________________________________

// Function to transpose matrix.
matrix matrix:: transpose (matrix mat)
{
    if(mat.row != mat.colm)
    {
        int data4[mat.row * mat.colm];
        matrix d;
        createMatrix (mat.colm, mat.row, data4, d);
        for (int i = 0; i < mat.colm; i++)
        {
            for(int j=0; j<mat.row; j++)
                d.data[i][j] = mat.data[j][i];
        }
        return d;
    }

    else //if(mat.row == mat.colm)
    {
        int data4[mat.row * mat.colm];
        matrix d;
        createMatrix ( mat.row,mat.colm,data4,d);
        for (int i=0; i < mat.row; i++)
        {
            for(int j=0; j < mat.colm; j++)
                d.data[i][j] = mat.data[j][i];
        }
        return d;
    }
}
//____________________________________________________

ostream&  operator<< (ostream& out, matrix m)
{
    for(int i=0; i < m.row; i++)
    {
        for(int j=0; j < m.colm; j++)
        {
            out << m.data[i][j] << "\t" ;
        }
        out << endl;
    }
    return out;
}
