#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int arr[n + 2][m + 2];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
            }
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < m; j++)
        //     {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << endl;
        // }

        ll mx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                ll sum = arr[i][j];

                int row = i - 1;
                int col = j - 1;

                while (row >= 0 && col >= 0) // upper left corner
                {
                    sum += arr[row][col];
                    row--;
                    col--;
                }

                row = i - 1;
                col = j + 1;

                while (row >= 0 && col < m) // upper right corner
                {
                    sum += arr[row][col];
                    row--;
                    col++;
                }

                row = i + 1;
                col = j - 1;

                while (row < n && col >= 0) // bottom left corner
                {
                    sum += arr[row][col];
                    row++;
                    col--;
                }
                row = i + 1;
                col = j + 1;

                while (row < n && col < m) // bottom right corner
                {
                    sum += arr[row][col];
                    row++;
                    col++;
                }

                mx = max(sum, mx);
            }
        }

        cout << mx << endl;
    }

    return 0;
}