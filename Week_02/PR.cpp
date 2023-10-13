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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int sz;
            cin >> sz;
            string s;
            cin >> s;

            for (int j = 0; j < sz; j++)
            {
                if (s[j] == 'D')
                {
                    if (arr[i] == 9)
                    {
                        arr[i] = 0;
                    }
                    else
                    {
                        arr[i]++;
                    }
                }
                else if (s[j] == 'U')
                {
                    if (arr[i] == 0)
                    {
                        arr[i] = 9;
                    }
                    else
                    {
                        arr[i]--;
                    }
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}