#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int j)
{
    int count = 0;
    bool flag = true;
    for (int i = 2; i <= j; i++)
    {
        if (j % i == 0)
        {

            count++;
        }
        if (count > 1)
        {
            flag = false;
            break;
        }
    }
    return flag;
}

int main()
{
    int n;
    cin >> n;
    int count2 = 0;
    for (int k = 2; k <= n; k++)
    {
        int count = 0;
        for (int i = 2; i <= k; i++)
        {
            if (k % i == 0)
            {
                bool check = isPrime(i);
                if (check)
                {
                    count++;
                }
                if (count > 2)
                {
                    break;
                }
            }
        }
        if (count == 2)
        {
            count2++;
        }
    }
    cout << count2 << endl;

    return 0;
}