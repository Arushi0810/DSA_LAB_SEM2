#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cout << "Enter value of M and N:\n";
    cin >> M >> N;
    cout << "Enter elments of A:\n";
    int i, j;
    int mat[N][M];
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            cin >> mat[i][j];
    int maxElement = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (mat[i][j] > maxElement)
            {
                maxElement = mat[i][j];
            }
        }
    }
    cout << "Maximum element is " << maxElement << endl;

    return 0;
}
