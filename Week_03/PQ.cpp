#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        bool flag = true;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != 'Y' && s[i] != 'e' && s[i] != 's')
            {
                flag = false;
            }
        }

        for (int i = 0; i < s.size() - 1; i++)
        {
            if (s[i] == 'Y' && s[i + 1] != 'e')
            {
                flag = false;
            }
            if (s[i] == 'e' && s[i + 1] != 's')
            {
                flag = false;
            }
            if (s[i] == 's' && s[i + 1] != 'Y')
            {
                flag = false;
            }
        }

        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}