#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long maximumSumSubarray(int K, vector<int> &Arr, int N)
    {
        int i = 0, j = 0;
        long long mx = LONG_MIN;
        long long s = 0;
        while (j < N)
        {
            s += Arr[j];
            if (j >= K - 1)
            {
                mx = max(mx, s);
                s -= Arr[i];
                i++;
            }
            j++;
        }

        return mx;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K;
        cin >> N >> K;
        ;
        vector<int> Arr;
        for (int i = 0; i < N; ++i)
        {
            int x;
            cin >> x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K, Arr, N) << endl;
    }
    return 0;
}