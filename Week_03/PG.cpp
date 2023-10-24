#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s, r;
        cin >> n >> s >> r;

        int maxDiceValue = s - r;
        cout << maxDiceValue << " ";

        // n -= 1;
        n--;
        r -= n;
        int arr[n];
        // int leftC = s - n;
        for (int i = 0; i < n; i++)
        {
            arr[i] = 1;
        }
        int indx = 0;
        for (int i = 0; i < r; i++)
        {
            if (arr[indx] != maxDiceValue)
            {
                arr[indx]++;
            }
            else
            {
                indx++;
                arr[indx]++;
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}