#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, r = 0, b = 0;
        string s;
        cin >> n >> s;
        n += 1;
        s += 'W';

        bool flag = true;
        if (n == 1 && s[0] != 'W')
            cout << "NO" << endl;
        else if (n == 1 && s[0] == 'W')
            cout << "YES" << endl;
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'R')
                    r++;
                if (s[i] == 'B')
                    b++;

                if (s[i] == 'W')
                {
                    if ((r == 0 && b != 0) || (r != 0 && b == 0))
                    {
                        flag = false;
                        break;
                    }
                    else
                    {
                        r = 0;
                        b = 0;
                    }
                }
            }

            flag ? cout << "YES" << endl : cout << "NO" << endl;
        }
    }

    return 0;
}