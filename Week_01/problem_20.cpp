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

        vector<string> v[3];
        map<string, int> mp;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin >> s;
                v[i].push_back(s);
                mp[s]++;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (mp[v[i][j]] == 1)
                {
                    count += 3;
                }
                else if (mp[v[i][j]] == 2)
                {
                    count += 1;
                }
                else
                {
                    continue;
                }
                // cout << mp[v[i][j]] << " ";
            }
            cout << count << " ";
        }
    }

    return 0;
}