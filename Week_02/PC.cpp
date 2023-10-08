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
        ll arr[n];

        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        ll count = 0;
        ll req = arr[0];
        for (ll i = 1; i < n; i++)
        {
            count += (arr[i] - req);
        }
        cout << count << endl;
    }

    return 0;
}