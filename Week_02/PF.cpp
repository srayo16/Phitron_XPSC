#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll k, s;
    cin >> k >> s;
    ll x, y, z;
    ll count = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            if (s - (i + j) >= 0 && s - (i + j) <= k)
            {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}