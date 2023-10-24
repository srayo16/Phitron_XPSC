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

        vector<string> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                string a = v[i];
                char f = a[0];
                char s = a[1];
                string b = v[j];
                char f2 = b[0];
                char s2 = b[1];

                // cout << f << " " << s << " " << f2 << " " << s2 << endl;
                if ((a[0] != b[0] && a[1] == b[1]) || (a[0] == b[0] && a[1] != b[1]))
                {
                    sum++;
                }
            }
        }

        cout << sum << endl;
    }

    return 0;
}