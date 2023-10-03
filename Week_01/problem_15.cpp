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
        string s;
        cin >> s;

        map<char, int> mp;
        int ans = 0;
        for (char c : s)
        {
            if (mp[c] + 1 == 1)
            {
                ans += 2;
            }
            else
            {
                ans += 1;
            }
            mp[c]++;
        }

        // for (auto p : mp)
        // {
        //     cout << p.first << ": " << p.second << endl;
        // }
        cout << ans << endl;
    }

    return 0;
}