#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;

    double min = a - b;
    double ans = (min * 100) / a;
    cout << ans << endl;

    return 0;
}