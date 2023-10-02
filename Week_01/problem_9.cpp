#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int ans = 0;
    bool flag = true;
    for (int i = c, j = 1; i <= b; i++, j++)
    {
        ans = c * j;
        if (ans >= a && ans <= b)
        {
            cout << ans << endl;
            flag = false;
            break;
        }
    }

    flag &&cout << -1 << endl;

    return 0;
}