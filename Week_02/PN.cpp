#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, h;
    cin >> s >> h;
    long long count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != h[i])
        {
            s[i] = h[i];
            count++;
        }
    }
    cout << count << endl;

    return 0;
}