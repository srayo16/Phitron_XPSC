#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a < b)
    {
        int n = (b - a) + 1;
        cout << n << endl;
    }
    else
    {
        cout << 0 << endl;
    }

    return 0;
}