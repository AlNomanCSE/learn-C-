#include <iostream>
using namespace std;
void seePointer()
{
    int x = 10;
    int *p = &x;
    int **q = &p;

    // for referencing
    int ***r = &q;
    // for de-referencing
    ***r = 20;
    cout << *(*(*r)) << endl;
}
void callByReference(int *a)
{
    *a = 100;
}
void seeArrays()
{
    int arr[] = {1, 2, 3, 4, 5};
    int *p;
    p = &arr[0];
    cout << *(arr + 0)<<endl;
}
int main()
{
    int a = 1;
    callByReference(&a);
    cout << a << endl;
    seeArrays();
    return 0;
}

