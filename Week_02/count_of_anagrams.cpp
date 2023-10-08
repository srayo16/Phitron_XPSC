#include <bits/stdc++.h>
using namespace std;

int main()
{
    string p, s;
    cin >> p >> s;

    int k = s.size();
    int frqS[26] = {0};

    for (char c : s)
    {
        frqS[c - 'a']++;
    }

    int i = 0, j = 0, count = 0;
    int frqP[26] = {0};
    while (j < p.size())
    {
        frqP[p[j] - 'a']++;

        if (j >= k - 1)
        {
            bool flag = true;
            for (int c = 0; c < 26; c++)
            {
                if (frqP[c] != frqS[c])
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
                count++;

            frqP[p[i] - 'a']--;
            i++;
        }

        j++;
    }

    cout << count << endl;

    return 0;
}