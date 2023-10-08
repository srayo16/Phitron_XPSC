#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, sum;
    cin >> n >> sum;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int count = 0;
    int sumV2 = 0;
    int j = 0;
    int d = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        sumV2 += arr[i];
        j++;

        if (sumV2 == sum)
        {
            count = max(count, j);
        }

        if (mp.find(sumV2 - sum) != mp.end())
        {
            count = max(count, j - mp[sumV2 - sum]);
        }

        if (mp.find(sumV2) == mp.end())
        {
            mp[sumV2] = j;
        }
    }
    cout << count << endl;

    return 0;
}