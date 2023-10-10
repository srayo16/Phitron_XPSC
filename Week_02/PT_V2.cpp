#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n;
    cin >> n;

    map<ll, ll> frq;
    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        frq[arr[i]]++;
    }

    for (auto i : frq)
    {
        if (i.second == 1)
        {
            cout << i.first << endl;
            break;
        }
    }

    return 0;
}
