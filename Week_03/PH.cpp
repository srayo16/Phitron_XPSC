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
        vector<ll[]> tr;

        vector<string> v(n);
        map<char, ll> mp;
        char sb;
        string bp;
        int track = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                string s;
                cin >> s;
                v[i] += s;
                if (j == 0)
                {
                    mp[v[i][j]]++;
                    if (mp[v[i][j]] > 1)
                    {
                        sb = v[i][j];
                    }
                    // if (mp[v[i][j]] == 1)
                    // {
                    //     track = i;
                    // }
                }
            }
        }
        char sm;
        for (auto i : mp)
        {
            if (i.second == 1)
            {
                sm = i.first;
                break;
            }
        }

        cout << sb << " ";

        for (int i = 0; i < n; i++)
        {
            for (char j : v[i])
            {
                if (j != sm)
                    break;
                else
                    track = i;
            }
        }

        for (char i : v[track])
        {
            cout << i << " ";
        }

        cout << endl;
    }

    return 0;
}