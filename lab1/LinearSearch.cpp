#include <bits/stdc++.h>
using namespace std;
int main()
{

    // array initialization
    int arr[10];
    cout << "Enter elements of array";
    for (int i = 0; i < 10; i++)
        cin >> arr[i];

    // taking element from the user
    int n;
    cout << "Enter element to be searched" << endl;
    cin >> n;

    // searching element
    for (int i = 0; i < 10; i++)
    {
        // element is found
        if (arr[i] == n)
        {
            cout << "Element Found at index : " << i;
            return 0;
        }
    }

    // element not found in the given array
    cout << "Element not present in the given array";
    return 0;
}
