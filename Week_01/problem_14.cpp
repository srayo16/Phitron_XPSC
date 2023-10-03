#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, t;
    cin >> a >> b >> t;
    int i = 1;
    int ans = 0;

    while (true)
    {
        if (float(a * i) > float(t) + 0.5)
        {

            break;
        }
        ans += b;
        i++;
    }

    cout << ans << endl;

    return 0;
}