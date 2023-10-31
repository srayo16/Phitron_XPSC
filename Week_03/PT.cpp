#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        // vector<ll> arr(n, -1);
        ll arr[n];
        // for (ll i = 0; i < n; i++)
        // {
        //     arr[i] = -1;
        // }

        ll ans = 0;
        ll j = 0;
        for (ll i = 0; i < n; i++)
        {
            ll tmp;
            cin >> tmp;
            if (tmp == 0 && j > 0)
            {

                // cout << "arr " << arr[j - 1] << endl;
                sort(arr, arr + n);
                ans += arr[j - 1];
                arr[j - 1] = -1;
            }
            else
            {
                arr[j] = tmp;
                // cout << arr[j] << endl;
                j++;
            }
        }
        cout << ans << endl;

        // for (ll i = 0; i < n; i++)
        // {
        //     cout << arr[i] << " ";
        // }
    }

    return 0;
}