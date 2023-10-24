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
        map<char, ll> fc;
        map<char, ll> sc;
        map<string, ll> s;

        vector<string> v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            fc[v[i][0]]++;
            sc[v[i][01]]++;
            s[v[i]]++;
        }
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            sum += fc[v[i][0]];
            sum -= s[v[i]];

            sum += sc[v[i][1]];
            sum -= s[v[i]];

            if (fc[v[i][0]] > 0)
            {
                fc[v[i][0]]--;
            }
            if (sc[v[i][1]] > 0)
            {
                sc[v[i][1]]--;
            }
            if (s[v[i]] > 0)
            {
                s[v[i]]--;
            }
        }
        cout << sum << endl;
    }

    return 0;
}