#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    ll n;
    cin >> n;
    ll arr[n];
    ll sum = 0;
    ll minOdd = LONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if(arr[i] % 2!= 0 ){
            minOdd= min(minOdd, arr[i]);
        }
    }
        if (sum % 2 != 0)
        {
         
            sum -= minOdd;
        }
    cout << sum << endl;

    return 0;
}