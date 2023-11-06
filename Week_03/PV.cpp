#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, s;
        cin >> m >> s;

        vector<int> v;
        int mx = INT_MIN;

        for (int i = 0; i < m; i++)
        {
            int s;
            cin >> s;
            mx = max(mx, s);
        }

        int sum = 0;
        int j = 1;
        bool flag = false;
        while (true)
        {
            if (sum == s)
            {
                flag = true;
            }
            if (sum > s)
            {
                flag = false;
                break;
            }
            sum += j;
            j++;
            cout << sum << " ";
        }

        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}