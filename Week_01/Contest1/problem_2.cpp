#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int i = 0;
        int sum1 = 0, sum2 = 0;
        sum1 = s[0] + s[1] + s[2];
        sum2 = s[3] + s[4] + s[5];

        // cout << sum1 << " " << sum2 << endl;

        if (sum1 == sum2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}