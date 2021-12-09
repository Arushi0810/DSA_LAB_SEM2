#include <bits/stdc++.h>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int main(void)
{
    int n;
    cout << "Enter number of elements\n";
    cin >> n;
    int arr[n];
    cout << "Enter Elements\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x = 10;
    cout << "Enter element to be searched\n";
    cin >> x;
    int y = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch(arr, 0, y - 1, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
