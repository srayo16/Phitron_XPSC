#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool is_palindrome(string s)
{

    for (int i = 0, j = s.size() - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
            return false;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int res = 0;
        string s;
        cin >> s;
        int x;
        cin >> x;

        map<string, bool> visited;
        while (!visited[s])
        {
            visited[s] = true;
            if (is_palindrome(s))
            {
                res++;
            }

            int hr = (s[0] - '0') * 10 + s[1] - '0';
            int mnt = (s[3] - '0') * 10 + s[4] - '0';

            int h = x / 60;
            int m = x % 60;

            hr += h;
            mnt += m;

            if (mnt > 59)
            {
                hr++;
            }

            mnt = mnt % 60;
            hr = hr % 24;

            s[0] = (hr / 10) + '0';
            s[1] = (hr % 10) + '0';
            s[3] = (mnt / 10) + '0';
            s[4] = (mnt % 10) + '0';
        }

        cout << res << endl;
    }
    return 0;
}