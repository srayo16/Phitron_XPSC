#include <bits/stdc++.h>
using namespace std;

bool customSort(char a, char b)
{
    // Convert both characters to uppercase before comparison
    char upperA = toupper(a);
    char upperB = toupper(b);

    // If the uppercase characters are equal, compare the original characters
    if (upperA == upperB)
    {
        return a < b;
    }

    // Otherwise, compare the uppercase characters
    return upperA < upperB;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, a;
        cin >> s;
        // a = s;
        // transform(s.begin(), s.end(), s.begin(), ::tolower);

        sort(s.begin(), s.end(), customSort);
        // cout << s << endl;
        // bool flag = false;
        // for (int i = 0; i < n; i++)
        // {
        //     if (a[i] == 'T')
        //     {
        //         flag = true;
        //         break;
        //     }
        // }

        if (n == 5)
        {
            if (s[0] == 'i' && s[1] == 'm' && s[2] == 'r' && s[3] == 'T' && s[4] == 'u')
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}