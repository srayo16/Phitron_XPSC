#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n;
    cin >> n;
    ll arr[n];

    ll maxs = LONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        maxs = max(maxs, arr[i]);
    }
    vector<ll> frq(maxs + 1, 0);

    for (ll i = 0; i < n; i++)
    {
        frq[arr[i]]++;
    }

    for (ll i = 0; i <= maxs; i++)
    {
        if (frq[i] == 1)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}