#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string n;
    cin >> n;

    ll count = 0;
    if (n.size() == 1)
    {
        cout << count << endl;
    }
    else
    {
        while (true)
        {

            ll res = 0;

            for (ll i = 0; i < n.size(); i++)
            {
                char x = n[i];
                int f = x - '0';
                res += f;
            }
            count++;
            if (res < 10)
            {
                break;
            }
            n = to_string(res);
            // cout << n << endl;
        }
        cout << count << endl;
    }

    return 0;
}