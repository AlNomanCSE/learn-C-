#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec = {1,3,4,5,6,10};
    vector<int>::iterator it;
    for (it = vec.begin(); it != vec.end(); it++)
    {
        cout << *it << endl;
    }
     for (auto it = vec.rbegin(); it != vec.rend(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}