#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll min = LONG_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] < min)
                min = arr[i];
        }

        ll mineEat = 0;
        sort(arr, arr + n);

        for (int i = 1; i < n; i++)
        {
            if (arr[i] != min)
            {
                ll ex = arr[i] - min;
                mineEat += ex;
            }
        }
        cout << mineEat << endl;
    }

    return 0;
}