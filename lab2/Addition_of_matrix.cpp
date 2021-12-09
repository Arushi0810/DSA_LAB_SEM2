
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout << "Enter value of N:\n";
    cin >> N;
    cout << "Enter elments of A:\n";
    int i, j;
    int A[N][N], B[N][N];
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            cin >> A[i][j];
    cout << "Enter elments of B:\n";
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            cin >> B[i][j];
    int C[N][N];
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            C[i][j] = A[i][j] + B[i][j];
    cout << "Result matrix is " << endl;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
