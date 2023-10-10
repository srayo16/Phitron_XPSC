#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll k;
    cin >> k;

    ll sum = 0;
    for (ll i = 1; i <= k; i++)
    {
        for (ll j = 1; j <= k; j++)
        {
            for (ll m = 1; m <= k; m++)
            {
                ll gFirst = __gcd(i, j);
                sum += __gcd(gFirst, m);
            }
        }
    }

    cout << sum << endl;

    return 0;
}