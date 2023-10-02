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
        ll arr[n];
        map<ll, ll> mp;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        bool flag = false;
        for (ll i = 0; i < n; i++)
        {
            mp[arr[i]]++;
            if (mp[arr[i]] >= 3)
            {
                cout << arr[i] << endl;
                flag = true;
                break;
            }
        }
        if (!flag)
            cout << -1 << endl;
    }

    return 0;
}