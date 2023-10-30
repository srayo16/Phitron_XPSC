#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        char a[n + 10];

        bool flag = true; // meow
        bool cM = false;
        bool cE = false;
        bool cO = false;
        bool cW = false;
        map<char, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            a[i] = tolower(a[i]);
            if (a[i] == 'm')
            {
                if (!mp.count('e') && !mp.count('o') && !mp.count('w'))
                {
                    flag = false;
                }
                else
                {
                    mp[a[i]]++;
                    cM = true;
                }
            }
            else if (a[i] == 'e')
            {
                if (cM && !mp.count('o') && !mp.count('w'))
                {
                    flag = false;
                }
                else
                {
                    cE = true;
                    mp[a[i]]++;
                }
            }
            else if (a[i] == 'o')
            {
                if (cM && cE && !mp.count('w'))
                {
                    flag = false;
                }
                else
                {
                    cO = true;
                    mp[a[i]]++;
                }
            }
            else if (a[i] == 'w')
            {
                if (cM && cE && cO)
                {
                    flag = false;
                }
                else
                {
                    cW = true;
                    mp[a[i]]++;
                }
            }
            else
            {
                flag = false;
            }
        }
        flag ? cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}