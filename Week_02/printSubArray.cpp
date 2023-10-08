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
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        sumV2 += arr[i];
        j++;

        while (sumV2 > sum)
        {
            sumV2 -= arr[d];
            d++;
            j--;
            // v.clear();
        }
        if (sumV2 == sum)
        {
            // cout << i << " " << j << endl;

            count = max(count, j);
            v.clear();
            for (int r = count; r > 0; r--)
            {
                v.push_back(arr[r]);
                // cout << r << " ";
            }
        }
    }
    // cout << count << endl;
    reverse(v.begin(), v.end());
    if (v.empty())
        cout << 0 << endl;
    else
    {

        for (int r : v)
        {
            cout << r << " ";
        }
    }

    return 0;
}