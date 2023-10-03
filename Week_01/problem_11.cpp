#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (((a * a) + (b * b)) < c * c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}