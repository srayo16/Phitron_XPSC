#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    // n base in k mane n ke k diye vag kortei thakbo jottokhn na 0 astese n er man r int must
    ll n, k;
    cin >> n >> k;

    ll count = 0;

    while (n > 0)
    {
        count++;
        n /= k;
    }

    cout << count << endl;

    return 0;
}