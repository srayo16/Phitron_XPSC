#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;

        int n;
        cin >> n;
        string s;
        cin >> s;

        s[0] = tolower(s[0]);
        str = s[0];

        for (int i = 1; i < s.size(); i++)
        {
            s[i] = tolower(s[i]);
            if (s[i] != s[i - 1])
            {
                str += s[i]; // just unique koro without sort and dekho mil khay kina! joss!
            }
        }

        // cout << str << endl;

        if (str == "meow")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}