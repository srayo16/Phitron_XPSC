#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n];
    vector<ll> arr2(n + 1, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
        {
            arr2[i] = arr[i];
        }
        if (i > 0)
        {
            arr2[i] = arr2[i - 1] + arr[i];
        }
    }
    // for (ll i = 0; i < n; i++)
    // {
    //     cout << arr2[i] << " ";
    // }

    ll q;
    cin >> q;
    while (q--)
    {
        ll i, j;
        cin >> i >> j;
        ll stored = (i == 0) ? 0 : arr2[i - 1];
        ll res = arr2[j] - stored;
        cout << res << endl;
    }

    return 0;
}