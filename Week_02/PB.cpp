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
        int frq[n + 1] = {0};
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
            frq[arr[i]]++;
        }
        bool flag = false;
        ll c = 0;
        for (ll i = 1; i <= n; i++)
        {
            // cout << frq[i] << " ";
            if (frq[i] >= 3)
            {
                flag = true;
                // cout << i << " ";
                c = max(c, i);
            }
            // if (frq[i] >= 3)
            // {
            //     flag = true;
            //     cout << frq[arr[i]] << " ";
            // }
        }
        if (!flag)
            cout << -1 << endl;
        else
            cout << c << endl;
    }

    return 0;
}