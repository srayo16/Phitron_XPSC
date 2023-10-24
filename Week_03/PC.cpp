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
        vector<string> arr(n);
        string s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            bool flag = false;
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if ((arr[i] == arr[j] + arr[k]) && i != j && i != k)
                    {

                        flag = true;
                        break;
                    }
                }
                if (flag)
                {
                    break;
                }
            }
            if (flag)
            {
                s += '1';
            }
            else
            {
                s += '0';
            }
            // cout << "round" << endl;
        }
        cout << s << endl;
    }

    return 0;
}