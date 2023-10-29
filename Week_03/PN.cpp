#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        vector<int> e, o;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] % 2 == 0)
                e.push_back(v[i]);
            else
                o.push_back(v[i]);
        }
        sort(e.begin(), e.end());
        sort(o.begin(), o.end());

        bool even = true, odd = true;

        // even

        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 == 0)
            {
                continue;
            }
            else if (o.empty() || o[0] >= v[i])
            {
                even = false;
                break;
            }
        }

        // odd

        for (int i = 0; i < n; i++)
        {
            if (v[i] % 2 != 0)
            {
                continue;
            }
            else if (o.empty() || o[0] >= v[i])
            {
                odd = false;
                break;
            }
        }

        if (even || odd)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}