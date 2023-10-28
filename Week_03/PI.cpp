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
        bool isSame = true;
        ll checkValue = 0;
        map<ll, ll> mp;
        ll res = 0;

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        sort(arr, arr + n);

        for (ll i = 0; i < n; i++)
        {
            ll val = arr[i]; // -1 -1 -1 -1 -1 -1
            if (mp[arr[i]] != 0)
            {
                res++;
                while (mp[val] > 0)
                {
                    mp[val]--;
                    val++;
                }
            }
        }
        cout << res << endl;
    }

    return 0;
}