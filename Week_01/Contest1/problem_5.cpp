#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool flag = true;
        if (arr[0] % 2 == 0)
        {
            flag = true;
        }
        else
        {
            flag = false;
        }
        bool flag2 = true;
        if (arr[1] % 2 != 0)
        {
            flag2 = true;
        }
        else
        {
            flag2 = false;
        }

        bool isEven = true;
        for (int i = 0; i < n; i++)
        {
            if (flag)
            {
                if (i % 2 == 0)
                {
                    if (arr[i] % 2 != 0)
                    {
                        isEven = false;
                        break;
                    }
                }
            }
            else
            {
                if (i % 2 == 0)
                {
                    if (arr[i] % 2 == 0)
                    {
                        isEven = false;
                        break;
                    }
                }
            }
        }
        bool isOdd = true;
        for (int i = 0; i < n; i++)
        {
            if (flag2)
            {
                if (i % 2 != 0)
                {
                    if (arr[i] % 2 == 0)
                    {
                        isOdd = false;
                        break;
                    }
                }
            }
            else
            {
                if (i % 2 != 0)
                {
                    if (arr[i] % 2 != 0)
                    {
                        isOdd = false;
                        break;
                    }
                }
            }
        }

        (isEven && isOdd) ? cout << "YES" << endl : cout << "NO" << endl;
        // s = arr[0];

        // bool flag = true;

        // for (int i = 0; i < n; i++)
        // {
        //     if (arr[i] != s)
        //     {
        //         flag = false;
        //         break;
        //     }
        // }

        // if (!flag)
        // {

        //     for (int i = 0; i < n; i++)
        //     {
        //         if (i % 2 == 0)
        //         {
        //             arr[i] += 1;
        //         }
        //     }
        //     flag = true;
        //     for (int i = 0; i < n; i++)
        //     {
        //         if (arr[i] % 2 != 0)
        //         {
        //             flag = false;
        //             break;
        //         }
        //     }

        //     if (!flag)
        //     {
        //         flag = true;
        //         for (int i = 0; i < n; i++)
        //         {
        //             if (arr[i] % 2 == 0)
        //             {
        //                 flag = false;
        //                 break;
        //             }
        //         }
        //     }
        // }

        // flag ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}