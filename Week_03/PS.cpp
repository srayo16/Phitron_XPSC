#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        map<char, int> frq;
        ll ans = 0;
        for (auto c : s)
        {
            frq[c]++;
        }

        for (char i = 'a'; i <= 'z'; i++)
        {
            ll mn = min(frq[i], frq[i - 32]);
            ans += mn;
            frq[i] -= mn;
            frq[i - 32] -= mn;
        }

        for (char c = 'a'; c <= 'z'; c++)
        {
            int add = max(frq[c], frq[c - 32]); // aaAAA then get A= 3
            int mn = min(k, add / 2);
            ans += mn;
            k -= mn;
        }

        cout << ans << endl;
    }

    return 0;
}