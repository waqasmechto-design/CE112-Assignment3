#include <iostream>
using namespace std;

void GetValue(int a[3][3])
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            cin >> a[i][j];
}

void ComputeAxA(int a[3][3], int b[3][3], int c[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j] = 0;
            for(int k=0;k<3;k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

void PrintArray(int c[3][3])
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int a[3][3], b[3][3], c[3][3];

    cout << "Enter Matrix A:\n";
    GetValue(a);

    cout << "Enter Matrix B:\n";
    GetValue(b);

    ComputeAxA(a,b,c);

    cout << "Result:\n";
    PrintArray(c);

    return 0;
}
