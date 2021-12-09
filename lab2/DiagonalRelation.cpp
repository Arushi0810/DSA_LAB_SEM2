
#include <bits/stdc++.h>
using namespace std;

const int MAX = 100;

void printDiagonalSums(int mat[][MAX], int n)
{
    int principal = 0, secondary = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                principal += mat[i][j];
            if ((i + j) == (n - 1))
                secondary += mat[i][j];
        }
    }

    cout << "Principal Diagonal:" << principal << endl;
    cout << "Secondary Diagonal:" << secondary << endl;
    if (principal > secondary)
    {
        cout << "Principal diagonal is greater than secondary diagonal";
    }
    else if (principal < secondary)
    {
        cout << "Principal diagonal is smaller than secondary diagonal";
    }
    else
    {
        cout << "Principle diagonal is equal to secondary diagonal";
    }
}
int main()
{
    int N;
    cout << "Enter value of N:\n";
    cin >> N;
    cout << "Enter elments of A:\n";
    int i, j;
    int A[N][MAX];
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            cin >> A[i][j];
    printDiagonalSums(A, N);
    return 0;
}
