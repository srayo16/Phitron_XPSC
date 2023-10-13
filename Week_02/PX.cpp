#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> v(8);

        for (int i = 0; i < 8; i++)
        {
            cin >> v[i];
        }
        // cout << endl;
        // for (auto i : v)
        // {
        //     cout << i << endl;
        // }

        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                if (v[i][j] == '#')
                {

                    if (i > 0 && (v[i - 1][j - 1] == '#') && (v[i - 1][j + 1] == '#'))
                    {
                        cout << i + 1 << " " << j + 1 << endl;
                        break;
                    }
                }
                // if (v[i][j] == '#')
                //     cout << i << " " << j << endl; // row i 3 col j 2
            }
            // cout << endl;
        }
    }

    return 0;
}