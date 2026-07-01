#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    vector<int> v = {2, 8, 7, 9, 2, 3};

    // replace(v.begin(), v.end() - 1, 2, 100);

    // for (int x : v)
    // {
    //     cout << x << " ";
    // }

    cout << v[2] << endl;

    cout << v.back() << endl;

    return 0;
}