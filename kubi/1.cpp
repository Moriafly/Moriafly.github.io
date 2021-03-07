#include <iostream>
using namespace std;

void sumarray(int m[][3], int n[][3], int r, int c)
{
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += m[i][j];
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += n[i][j];
        }
    }
    cout << sum;
}

int main()
{
    int m[2][3] = {1, 2, 3, 4, 5, 6};
    int n[1][3] = {7, 8, 9};
    sumarray(m, n, 2, 1);
    return 0;
}