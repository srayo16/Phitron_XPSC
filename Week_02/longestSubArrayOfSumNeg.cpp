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
    map<int, int> prefixSum;

    for (int i = 0; i < n; i++)
    {
        sumV2 += arr[i];

        if (sumV2 == sum)
        {
            count = max(count, i + 1);
        }

        if (prefixSum.find(sumV2 - sum) != prefixSum.end())
        {
            count = max(count, i - prefixSum[sumV2 - sum]);
        }

        if (prefixSum.find(sumV2) == prefixSum.end())
        {
            prefixSum[sumV2] = i;
        }
    }
    cout << count << endl;
    return 0;
}