#include <iostream>
using namespace std;
void referance()
{
    int a = 10;
    int &ref = a;
    cout << a << ref << endl;
}
int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    // cout<<vec.size();
    // vec.push_back(12);
    // cout<<vec.size();
    vec.insert(vec.begin() + 2, 25);
    vec[2] = 300;
    for (int x : vec)
    {
        cout << x << endl;
    }
    cout << vec.size() << endl;
    referance();
    return 0;
}

