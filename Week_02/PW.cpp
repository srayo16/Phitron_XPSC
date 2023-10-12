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
        vector<string> v(n);
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v[i] = s;
        }

        int mins = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int sum = 0;
                for (int k = 0; k < m; k++)
                {
                    if (v[i][k] > v[j][k])
                    {
                        sum += (v[i][k] - v[j][k]);
                    }
                    else if (v[j][k] > v[i][k])
                    {
                        sum += (v[j][k] - v[i][k]);
                    }
                }
                mins = min(mins, sum);
            }
        }
        cout << mins << endl;
        // for (auto i : v)
        // {
        //     cout << i << endl;
        // }
    }

    return 0;
}