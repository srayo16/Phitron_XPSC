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
        string s;
        cin >> s;

        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                sum += i;
            }
            else
            {
                sum += n - i - 1;
            }
        }

        ll newArr[n];

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            { // LLLRLL
                newArr[i] = n - i - 1 - i;
            }
            else
            {
                newArr[i] = i - (n - 1 - i);
            }
        }

        sort(newArr, newArr + n, greater<ll>());

        // for(i=0; i<n;i++){
        //     cout << newArr[i] << " ";
        // }
        // cout << endl;

        for (int k = 1; k <= n; k++)
        {
            if (newArr[k - 1] > 0)
            {
                sum += newArr[k - 1];
            }
            cout << sum << " ";
        }
        cout << endl;
        // char s[n + 1];
        // int arr[n + 1];
        // ll sum = 0;
        // for (ll i = 1; i <= n; i++)
        // {
        //     cin >> s[i];
        //     if (s[i] == 'L')
        //     {
        //         arr[i] = i - 1;
        //     }
        //     else if (s[i] == 'R')
        //     {
        //         arr[i] = n - i;
        //     }
        //     sum += arr[i];
        // }
        // for (ll i = 1; i <= n; i++)
        // {
        //     cout << arr[i];
        // }
        // cout << endl;
        // cout << sum << endl;
    }

    return 0;
}