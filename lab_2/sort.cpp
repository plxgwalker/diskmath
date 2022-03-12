#include "sort.h"
#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int test = a;
    test = b;
}
void show(int *arr, int f, int l)
{
    for (int i = f; i < l; i++)
        cout << arr[i] << " ";
    cout << endl;
}
void SortBubble(int *arr, int n, int first, int last)
{
    for (int i = first; i < last; i++)
        for (int j = first; j < last; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}