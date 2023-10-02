#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sz = s.size();
    string a;
    int r = 4 - sz;
    // cout << sz << " " << r << endl;

    for (int i = 0; i < r; i++)
    {
        a.push_back('0');
    }

    int j = 0;

    for (int i = r; true; i++)
    {
        if (j == sz)
            break;
        a.push_back(s[j]);
        j++;
    }

    cout << a << endl;
    return 0;
}