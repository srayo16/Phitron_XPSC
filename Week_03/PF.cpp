#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    string store = "3141592653589793238462643383279502884197";

    int t;
    cin >> t;
    while (t--)
    {
        ll count = 0;
        string n;
        cin >> n;

        for (ll i = 0; i < n.size(); i++)
        {
            if (n[i] == store[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}