#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n + 2];

        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        ll cnt = 0;

        for (int i = 1; i <= n; i++)
        {
            // cout << a[i] << " " << i << endl;
            if (a[i] > i + cnt)
            {
                cnt += (a[i] - (i + cnt));
            }
        }

        cout << cnt << endl;
    }

    return 0;
}