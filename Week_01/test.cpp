#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (char c = 'a'; c <= 'z'; c++)
    {
        auto j = find(s.begin(), s.end(), c);
        if (j == s.end())
        {
            cout << c << endl;
            return 0;
        }
    }

    cout << "None" << endl;
    return 0;
}