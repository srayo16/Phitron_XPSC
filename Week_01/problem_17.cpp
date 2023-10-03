#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());

    string t = "abcdefghijklmnopqrstuvwxyz";
    bool flag = true;
    for (int i = 0; i < s.size(); i++)
    {
        char temp = s[i] + 1;
        // cout << temp;
        auto j = find(s.begin(), s.end(), temp);

        if (*j)
        {
        }
        else
        {
            cout << temp << endl;
            flag = false;
            break;
        }
        // cout << *j << endl;
        // int index = 0;
        // for (int j = 0; j < t.size(); j++)
        // {
        //     if (t[i] == temp)
        //     {
        //         index = j;
        //         break;
        //     }
        // }

        // auto j = find(t.begin(), t.end(), temp);
        // if (s[i])

        // cout << *j;
    }
    flag &&cout << "None" << endl;

    // for (char c : s)
    // {
    //     cout << c;
    // }

    return 0;
}