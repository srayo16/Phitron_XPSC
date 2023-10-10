#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<char> v;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        while (n--)
        {
            string s;
            cin >> s;
            for (int i = 0; i < s.size(); i++)
            {
                v.push_back(s[i]);
            }
        }
    }
    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}