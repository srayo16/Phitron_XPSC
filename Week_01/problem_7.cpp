#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a == b)
    {
        cout << a + b << endl;
    }
    else
    {

        int m = max(a, b);

        int f = m + (m - 1);

        cout << f << endl;
    }

    return 0;
}