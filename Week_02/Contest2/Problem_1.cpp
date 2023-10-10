#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;

    for (ll i = 0; i < k; i++)
    {
        string s = to_string(n);
        ll sz = s.size();
        // cout << "s string1: " << s << " ";
        if (s[sz - 1] == '0')
        {
            while (s[sz - 1] == '0')
            {
                s.pop_back();
                // cout << "s string2: " << s << " ";
                // i++;
            }
            n = stoi(s);
        }
        else
        {
            // ll stored = stoi(s);
            n -= 1;
        }

        // cout << "N " << n << endl;
    }

    cout << n << endl;

    return 0;
}