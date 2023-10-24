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

        vector<string> v;
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;

            v.push_back(s);

            mp[v[i]] = true;
        }

        string ans;

        for (int i = 0; i < v.size(); i++)
        {
            string tempStr = v[i];
            int f = 0;
            ll tSize = tempStr.size();
            string a;
            for (int j = 0; j < tSize - 1; j++)
            {
                a += tempStr[j];
                string b;
                for (int k = j + 1; k < tSize; k++)
                {
                    b += tempStr[k];
                }
                if (mp[a] == true && mp[b] == true)
                {
                    f = 1;
                    break;
                }
            }

            if (f)
                ans += '1';
            else
                ans += '0';
        }

        cout << ans << endl;
    }

    return 0;
}

//  for (int i = 0; i < n; i++)
//         {
//             bool flag = false;
//             for (int j = 0; j < n; j++)
//             {
//                 for (int k = 0; k < n; k++)
//                 {
//                     if ((arr[i] == arr[j] + arr[k]) && i != j && i != k)
//                     {

//                         flag = true;
//                         break;
//                     }
//                 }
//                 if (flag)
//                 {
//                     break;
//                 }
//             }
//             if (flag)
//             {
//                 s += '1';
//             }
//             else
//             {
//                 s += '0';
//             }
//             // cout << "round" << endl;
//         }