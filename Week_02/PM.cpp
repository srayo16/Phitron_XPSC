#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll ans = 0;
    ll count2 = 0;
    for (int i = 2; i <= 1000; i++)
    {
        ll count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] % i == 0)
            {
                count++;
            }
        }
        if (count >= count2)
        {
            count2 = count;
            ans = i;
        }
    }

    cout << ans << endl;

    return 0;
}