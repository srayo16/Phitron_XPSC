#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    ll arr2[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr2[i] = arr[i];
    }
    sort(arr2, arr2 + n);

    ll pSum[n];
    ll pSum2[n];
    pSum[0] = arr[0];
    pSum2[0] = arr2[0];
    for (ll i = 1; i < n; i++)
    {
        pSum[i] = pSum[i - 1] + arr[i];
        pSum2[i] = pSum2[i - 1] + arr2[i];
    }

    ll m;
    cin >> m;
    while (m--)
    {
        ll a, b, c;
        cin >> a >> b >> c; // 6
                            // 6 4 2 7 2 7 ||  2 2 4 6 7 7 || 6 10 12 19 21 28 || 2 4 8 14 21 28
                            // 3
                            // 2 3 6
                            // 1 3 4 || 9
                            // 1 1 6 || 28
        ll sum = 0;
        if (a == 1)
        {
            if (b == 1)
            {
                sum = pSum[c - 1];
            }
            else
            {
                sum = pSum[c - 1] - pSum[b - 2];
            }
            cout << sum << endl;
        }
        else if (a == 2)
        {
            if (b == 1)
            {
                sum = pSum2[c - 1];
            }
            else
            {
                sum = pSum2[c - 1] - pSum2[b - 2];
            }
            cout << sum << endl;
        }
    }

    return 0;
}
