#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>
using namespace std;


class matrix
{
public:
matrix();

void createMatrix (int r, int c, int *num, matrix& mat);

matrix operator+ (matrix ma2);
matrix operator- (matrix ma2);
matrix operator* (matrix ma2);
matrix operator+ (int scalar);
matrix operator- (int scalar);
matrix operator* (int scalar);

matrix operator+= (matrix ma2);
matrix operator-= (matrix ma2);
matrix operator+= (int scalar);
matrix operator-= (int scalar);
matrix operator++ ();
matrix operator-- ();

bool operator== (matrix mat2);
bool operator!= (matrix mat2);
bool square(matrix mat);
bool symatric(matrix mat);
bool identit (matrix mat);
matrix transpose (matrix mat);

friend ostream&  operator<< (ostream& out, matrix m);

//private:
    int **data;
    int row, colm;
};

#endif // MATRIX_H
