


#include <iostream>
 
using namespace std;
 
int main()
{
 
    int rows = 3, cols = 3; // Matrix rows and cols
 
    // 1st Matrix declaration
 
    int **matrix_1 = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix_1[i] = new int[cols];
    }
 
    // 2nd Matrix declaration
 
    int **matrix_2 = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        matrix_2[i] = new int[cols];
    }
 
    // Intializing 1st Matrix
 
    cout << "\n Values For 1st Matrix. \n"
         << endl;
 
    for (int i = 0; i < rows; i++)
    {
 
        cout << "Enter " << i + 1 << " row values, Add spaces between individual values : ";
 
        for (int j = 0; j < cols; j++)
        {
 
            cin >> matrix_1[i][j];
        }
    }
 
    // Intializing 2nd Matrix
 
    cout << "\n Values For 2nd Matrix. \n"
         << endl;
 
    for (int i = 0; i < rows; i++)
    {
 
        cout << "Enter " << i + 1 << " row values, Add spaces between individual values : ";
 
        for (int j = 0; j < cols; j++)
        {
 
            cin >> matrix_2[i][j];
        }
    }
 
    // printing 1st matrix
 
    cout << "\n 1st Matrix. \n"
         << endl;
 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
 
            cout << matrix_1[i][j] << "  ";
        }
 
        cout << endl;
    }
 
    // printing 2nd matrix
 
    cout << "\n 2nd Matrix. \n"
         << endl;
 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
 
            cout << matrix_2[i][j] << "  ";
        }
 
        cout << endl;
    }
 
    // Calculation
 
    int **result = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        result[i] = new int[cols];
    }
 
    // Addition of mtarices
 
    for (int i = 0; i < rows; i++)
    {
 
        for (int j = 0; j < cols; j++)
        {
 
            result[i][j] = matrix_1[i][j] + matrix_2[i][j];
        }
    }
 
    // Result after addition
 
    cout << "\n Addition Result. \n"
         << endl;
 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
 
            cout << result[i][j] << "  ";
        }
 
        cout << endl;
    }
 
    // Subtraction of two matrices
 
    for (int i = 0; i < rows; i++)
    {
 
        for (int j = 0; j < cols; j++)
        {
 
            result[i][j] = matrix_1[i][j] - matrix_2[i][j];
        }
    }
 
    // Result after subtraction
 
    cout << "\n Subtraction Result. \n"
         << endl;
 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
 
            cout << result[i][j] << "  ";
        }
 
        cout << endl;
    }
 
    // Result equal to zero
 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
 
            result[i][j] = 0;
        }
 
        cout << endl;
    }
 
    // Multiplication of two matrices
 
    for (int i = 0; i < rows; i++)
    {
 
        for (int j = 0; j < cols; j++)
        {
 
            for (int k = 0; k < rows; k++)
            {
 
                result[i][j] += matrix_1[i][k] * matrix_2[k][j];
            }
        }
    }
 
    // Result after multiplication
 
    cout << "\n Multiplication Result. \n"
         << endl;
 
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
 
            cout << result[i][j] << "  ";
        }
 
        cout << endl;
    }
 
    return 0;
}
