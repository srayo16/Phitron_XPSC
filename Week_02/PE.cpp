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
        string s2;
        cin >> s >> s2;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if ((s[i] == 'R' && s2[i] != 'R') || s2[i] == 'R' && s[i] != 'R')
            {
                flag = false;
                break;
            }
        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}