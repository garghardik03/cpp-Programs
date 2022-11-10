#include <iostream>
using namespace std;

class Matrix
{
    inta[3][3];

public:
    int accept();
    int display();
    int operator+(Matrix x);
};
int Matrix::accept()
{
    cout << "\n Enter Matrix Element (3 X 3) : \n";
    for (inti = 0; i < 3; i++)
    {
        for (intj = 0; j < 3; j++)
        {
            cout << " ";
            cin >> a[i][j];
        }
    }
}
int Matrix::display()
{
    for (inti = 0; i < 3; i++)
    {
        cout << " ";
        for (intj = 0; j < 3; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}
int Matrix::operator+(Matrix x)
{
    intmat[3][3];
    for (inti = 0; i < 3; i++)
    {
        for (intj = 0; j < 3; j++)
        {
            mat[i][j] = a[i][j] + x.a[i][j];
        }
    }
    cout << "\n Addition of Matrix : \n\n";
    for (inti = 0; i < 3; i++)
    {
        cout << " ";
        for (intj = 0; j < 3; j++)
        {
            cout << mat[i][j] << "\t";
        }
        cout << "\n";
    }
}
intmain()
{
    Matrix m, n;
    m.accept(); // Accepting Rows
    n.accept(); // Accepting Columns
    cout << "\n First Matrix : \n\n";
    m.display(); // Displaying First Matrix
    cout << "\n Second Matrix : \n\n";
    n.display(); // Displaying Second Matrix
    m + n;       // Addition of Two Matrices. Overloaded '+' Operator
    return 0;
}