#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int dist = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int cnt = 1;

        sort(arr, arr + n);
        for (int i = 1; i < n; i++)
        {
            if (arr[i - 1] != arr[i])
            {
                cnt++;
            }
        }

        if ((n - cnt) % 2) // jodi 1 hoy taile odd
        {
            cout << cnt - 1 << endl;
        }
        else // nahole even
        {
            cout << cnt << endl;
        }
    }

    return 0;
}