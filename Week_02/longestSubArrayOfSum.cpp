#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> arr, long long sum)
{
    // Write your code here

    long long count = 0;
    long long sumV2 = 0;
    long long j = 0;
    long long d = 0;

    for (long long i = 0; i < arr.size(); i++)
    {
        sumV2 += arr[i];
        j++;
        while (sumV2 > sum)
        {
            sumV2 -= arr[d];
            d++;
            j--;
        }

        //  cout << sumV2 << endl;
        if (sumV2 == sum)
        {
            count = max(count, j);
            // i = d;
            // d++;
            // sumV2 = 0;
            // j = 0;
        }
        // else if (sumV2 > sum)
        // {
        //     sumV2 = 0;
        //     i = d;
        //     d++;
        //     j = 0;
        // }
    }
    return count;
}

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

    for (int i = 0; i < n; i++)
    {
        sumV2 += arr[i];
        j++;

        // cout << sumV2 << endl;
        while (sumV2 > sum)
        {
            sumV2 -= arr[d];
            d++;
            j--;
        }
        if (sumV2 == sum)
        {
            count = max(count, j);
            // i = d;
            // d++;
            // sumV2 = 0;
            // j = 0;
        }
        // else if (sumV2 > sum)
        // {
        //     sumV2 = 0;
        //     i = d;
        //     d++;
        //     j = 0;
        // }
    }
    cout << count << endl;
    return 0;
}