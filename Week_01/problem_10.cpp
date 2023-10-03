#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int n = 0;
    bool flag = false;

    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            n = (a * i) + (b * j);
            if (n == c)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    cout << "NO" << endl;
    return 0;
}