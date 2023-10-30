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
        string s;
        cin >> s;
        string ss = "";
        int ans = 1;

        for (int i = 2; i < n; i++)
        {
            ss.push_back(s[i]);
        }

        int s1 = 0, s2 = 0;

        while (s1 < n - 2)
        {
            if (s[s1] != ss[s2])
            {
                ans++;
            }
            s1++;
            s2++;
        }
        cout << ans << endl;
    }

    return 0;
}