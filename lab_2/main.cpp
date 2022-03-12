#include "sort.h"
#include <iostream>
using namespace std;

int main()
{
    int n;    // how much n in array arr[n]
    int f, l; // first and last number
    datatype *arr;
    arr = new datatype[n];
    cout << "type size of the array: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "type the " << i + 1 << " element of array: ";
        cin >> arr[i];
    }

    cout << "type first element: ";
    cin >> f;
    cout << "type last element: ";
    cin >> l;

    // cout << "array: ";
    //  show(arr, 0, n);
    SortBubble(arr, n, f, l - 1);
    // show(arr, f, l);
    return 0;
}