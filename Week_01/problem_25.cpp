#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll x, y;
    cin >> x >> y;
    ll count = 1;
    ll a = x;
    ll i = 0;
    while (true)
    {

        if (a * 2 <= y)
        {
            a *= 2;
            count++;
        }
        else
        {
            break;
        }
    }

    cout << count << endl;

    return 0;
}