#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll n, k;
    cin >> n >> k;
    ll count = 0;
    while (n--)
    {
        ll t;
        cin >> t;

        long long mi = min(k, t);
        long long mx = max(k, t);

       // double val = double(mx) / double(mi);
        // cout << "val: " << val << endl;
        if (t % k ==0)
        {
            count++;
        }
    }

    cout<<count<<endl;

    return 0;
}