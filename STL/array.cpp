#include <iostream>
#include <iterator>
using namespace std;
int main()
{
    int arr1[] = {1, 9, 5, 3, 4};
    int arr2[] = {10, 90, 50, 30, 40};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    // way--1
    for (int *ptr = arr1; ptr < arr1 + size; ptr++)
    {
        cout << *ptr << endl;
    }
    // way--2
    for (auto it = begin(arr2); it != end(arr2); ++it)
    {
        cout << *it << endl;
    }
    return 0;
}