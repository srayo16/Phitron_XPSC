#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int flag = false;

        if (a < b && c < d && a < c && b < d)
        {
            flag = true;
        }
        if (c < a && d < b && c < d && a < b)
        {
            flag = true;
        }
        if (d < c && b < a && d < b && c < a)
        {
            flag = true;
        }
        if (b < d && a < c && b < a && d < c)
        {
            flag = true;
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}