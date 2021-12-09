#include <bits/stdc++.h>
using namespace std;

int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}

int main()
{
    int y;
    cout << "Enter number of elements\n";
    cin >> y;
    int arr[y];
    cout << "Enter elements\n";
    for (int i = 0; i < y; i++)
    {
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Minimum element of array: " << getMin(arr, n) << "\n";
    return 0;
}
