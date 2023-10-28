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

        vector<vector<ll>> v(n);
        map<ll, ll> mp;
        ll sb;
        string bp;
        int track = 0;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                ll s;
                cin >> s;
                v[i].push_back(s);

                if (j == 0)
                {
                    mp[v[i][j]]++;
                    if (mp[v[i][j]] > 1)
                    {
                        sb = v[i][j];
                    }
                }
            }
        }
        cout << sb << " ";
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (v[i][0] != sb)
                {
                    cout << v[i][j] << " ";
                    flag = true;
                }
            }
            if (flag)
                break;
        }

        cout << endl;
    }

    return 0;
}