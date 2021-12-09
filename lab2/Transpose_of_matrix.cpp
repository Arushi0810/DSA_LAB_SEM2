#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout << "Enter value of N:\n";
    cin >> N;
    cout << "Enter elments of A:\n";
    int i, j;
    int A[N][N];
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            cin >> A[i][j];
    int B[N][N];
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            B[i][j] = A[j][i];
    cout << "Result matrix is \n";
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            cout << " " << B[i][j];
        cout << "\n";
    }

    return 0;
}