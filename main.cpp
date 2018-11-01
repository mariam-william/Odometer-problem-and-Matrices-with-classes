#include <iostream>
#include "matrix.h"

using namespace std;

int main()
{
    while (true)
    {
        int choice, scalar;
        int data1 [] = {1,2,3,4,5,6,7,8};
        int data2 [] = {13,233,3,4,5,6};
        int data3 [] = {10,100,10,100,10,100,10,100};

        matrix mat1, mat2, mat3;
        mat1.createMatrix (4, 2, data1, mat1);
        mat2.createMatrix (2, 3, data2, mat2);
        mat3.createMatrix (4, 2, data3, mat3);

menu:
        cout << "Choose the property you want to do: " << endl
             << "   1- Add two matrices." << endl
             << "   2- Subtract two matrices." << endl
             << "   3- Multiply two matrices." << endl
             << "   4- Add a value to a matrix." << endl
             << "   5- Subtract a value from a matrix." << endl
             << "   6- Multiply matrix by a value." << endl
             << "   7- Add 1 to each element in the matrix." << endl
             << "   8- Subtract 1 from each element in the matrix." << endl
             << "   9- Check if two matrices are identical." << endl
             << "  10- Check if two matrices are not identical." << endl
             << "  11- Check if it is a square matrix." << endl
             << "  12- Check if it is a square & symmetric matrix." << endl
             << "  13- Check if it is a square & identity matrix." << endl
             << "  14- Transpose matrix." << endl
             << "  15- Enter a matrix. " << endl
             << "   0- Exit." << endl;

        cout << "I choose: ";
        cin >> choice;

        switch (choice)
        {
            case 0:
            {
                return 0;
                break;
            }
            case 1:    // Add two matrices.
            {
                cout << " First Matrix: "  << endl << mat1 << endl;
                cout << " Second Matrix: " << endl << mat3 << endl;

                if (mat1.row != mat3.row || mat1.colm != mat3.colm)
                {
                    cout << "Process is invalid. " << endl << endl;
                }
                else
                {
                    cout << "Two matrices after addition: " << endl;
                    cout << (mat1 + mat3) << endl << endl;
                }
                goto menu;
            }
            case 2:   // Subtract two matrices.
            {
                cout << " First Matrix: "  << endl << mat1 << endl;
                cout << " Second Matrix: " << endl << mat3 << endl;

                if (mat1.row != mat3.row || mat1.colm != mat3.colm)
                {
                    cout << "Process is invalid. " << endl << endl;
                }
                else
                {
                    cout << (mat1 - mat3) << endl << endl;
                }
                goto menu;
            }
            case 3:   // Multiply two matrices.
            {
                cout << " First Matrix: "  << endl << mat1 << endl;
                cout << " Second Matrix: " << endl << mat2 << endl;

                if (mat1.colm == mat2.row)
                {
                    cout << "Two matrices after multiplying: " << endl;
                    cout << (mat1 * mat2) << endl << endl;
                    goto menu;
                }
                else
                {
                    cout << "Two matrices can not multiplied." << endl << endl;
                    goto menu;
                }
            }
            case 4:   // Add a value to a matrix.
            {
                cout << " Matrix: "  << endl << mat1 << endl;
                cout << endl << "Enter the value you want to add: ";
                cin  >> scalar;

                cout << (mat1 + scalar) << endl << endl;
                goto menu;
            }
            case 5:   // Subtract a value from a matrix.
            {
                cout << " Matrix: "  << endl << mat1 << endl;
                cout << endl << "Enter the value you want to subtract: ";
                cin  >> scalar;

                cout << endl << "The matrix: " << endl
                     << (mat1 - scalar) << endl << endl;
                goto menu;
            }
            case 6:   //  Multiply matrix by a value.
            {
                cout << " Matrix: "  << endl << mat1 << endl;
                cout << endl << "Enter the value you want to multiply by: ";
                cin  >> scalar;
                cout << endl << "The matrix: " << endl
                     << (mat1 * scalar) << endl << endl;
                goto menu;
            }
            case 7:   // Add 1 to each element in the matrix.
            {
                cout << endl << " Matrix: "  << endl << mat1 << endl << endl;
                cout << "The new matrix: " << endl;
                cout << (++mat1) << endl << endl;
                goto menu;
            }
            case 8:   // Subtract 1 from each element in the matrix.
            {
                cout << endl << " Matrix: "  << endl << mat1 << endl;
                cout << "The new matrix: " << endl;
                cout << (--mat1) << endl << endl;
                goto menu;
            }
            case 9:   // Check if two matrices are identical.
            {
                cout << " First Matrix: "  << endl << mat1 << endl;
                cout << " Second Matrix: " << endl << mat2 << endl;
                if (mat1 == mat2)
                {
                    cout << "The two matrices are Identical." << endl << endl;
                }
                else
                {
                    cout << "The two matrices are not same." << endl << endl;
                }
                goto menu;
            }
            case 10:   // Check if two matrices are not identical.
            {
                cout << " First Matrix: "  << endl << mat1 << endl;
                cout << " Second Matrix: " << endl << mat2 << endl;
                if (mat1 != mat2)
                {
                    cout << "The two matrices are not same." << endl << endl;
                }
                else
                {
                    cout << "The two matrices are Identical." << endl << endl;
                }
                goto menu;
            }
            case 11:   // Check if it is a square matrix.
            {
                cout << endl << " Matrix: "  << endl << mat3 << endl;
                if (mat3.square(mat3) == 1)
                {
                    cout << "It is a square matrix." << endl << endl;
                }
                else
                {
                    cout << "It is not a square matrix." << endl << endl;
                }
                goto menu;
            }
            case 12:   // Check if it is a square & symmetric matrix.
            {
                cout << endl << " Matrix: "  << endl << mat3 << endl;
                if (mat3.symatric(mat3) == 1)
                {
                    cout << "The matrix is Symmetric." << endl << endl;
                }
                else
                {
                    cout << "The matrix is not symmetric." << endl << endl;
                }
                goto menu;
            }
            case 13:   // Check if it is a square & identity matrix.
            {
                cout << endl << " Matrix: "  << endl << mat3 << endl;
                if (mat3.identit(mat3) == 1)
                {
                    cout << "The matrix is Identity matrix." << endl << endl;
                }
                else
                {
                    cout << "The matrix is not an Identity matrix." << endl << endl;
                }
                goto menu;
            }
            case 14:   // Transpose matrix.
            {
                cout << endl << " Matrix: "  << endl << mat1 << endl;
                cout << endl << "The matrix after Transpose: " << endl;
                cout << mat3.transpose(mat1) << endl << endl;
            }
            /*case 15: {
                matrix matX;
                cin >> matX;
                cout << "Your matrix is: " << endl;
                cout << matX << endl << endl;
                goto menu;
            }*/
        }

    }
}
