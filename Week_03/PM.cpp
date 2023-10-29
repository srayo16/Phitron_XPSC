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
        vector<pair<int, int>> v(n);
        vector<int> arr2(n);
        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i;
        }
        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }

        sort(arr2.begin(), arr2.end());

        // Finally bro!

        for (int i = 0; i < n; i++)
        {
            ans[v[i].second] = arr2[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
    }

    return 0;
}