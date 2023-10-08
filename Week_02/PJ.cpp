#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, x;
    cin >> n >> x;

    ll arr[n];

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (ll i = 0; i < n; i++)
    {
        if (arr[i] != x)
            cout << arr[i] << " ";
    }

    return 0;
}