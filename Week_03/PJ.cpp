#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n + 10];
        int j = 1;

        arr[0] = 1;
        int res = n - 2;

        int i = 1;
        while ((arr[i - 1] + j + res) <= k)
        {
            arr[i] = arr[i - 1] + j;
            i++;
            j++;
            res--;
        }

        for (int k = i; k < n; k++)
        {
            arr[k] = arr[k - 1] + 1;
        }

        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;
    }

    return 0;
}