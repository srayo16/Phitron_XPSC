#include <bits/stdc++.h>
using namespace std;
#define ll long long

void rotateArray(int arr[][2], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            swap(arr[i][j], arr[i][n - 1 - j]);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 2;
        int arr[n][2];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0])
        {
            cout << "YES" << endl;
        }
        else
        {
            int run = 3;
            bool flag = true;
            while (run--)
            {
                rotateArray(arr, n);

                if (arr[0][0] < arr[0][1] && arr[1][0] < arr[1][1] && arr[0][0] < arr[1][0])
                {
                    cout << "YES" << endl;
                    flag = false;
                    break;
                }
            }
            if (flag)
                cout << "NO" << endl;
        }

        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = 0; j < n; j++)
        //     {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << endl;
        // }
    }

    return 0;
}