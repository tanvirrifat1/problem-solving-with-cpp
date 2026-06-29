#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int n;

    cin >> n;

    int k = 2;

    for (int i = 1; i <= n; i++)
    {

        i = i * k;
        cout << i << " " << endl;
    }

    return 0;
}