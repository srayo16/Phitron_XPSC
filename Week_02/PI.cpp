#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;
    y++;
    while (true)
    {
        string s = to_string(y);

        if (s[0] != s[1] && s[0] != s[2] && s[0] != s[3] && s[1] != s[2] && s[1] != s[3] && s[2] != s[3])
        {
            cout << s << endl;
            break;
        }
        else
        {
            y++;
        }
    }

    return 0;
}