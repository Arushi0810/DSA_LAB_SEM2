#include <bits/stdc++.h>
using namespace std;
void SecondSmallest(int arr[], int arr_size)
{
    int i, first, second;
    if (arr_size < 2)
    {
        cout << " Invalid Input ";
        return;
    }

    first = second = INT_MAX;
    for (i = 0; i < arr_size; i++)
    {
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
        cout << "There is no second smallest element\n";
    else
        cout << "The second smallest element is " << second << endl;
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
    SecondSmallest(arr, y);
    return 0;
}
