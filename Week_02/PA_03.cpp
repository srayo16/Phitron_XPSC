#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.size();
    int k;
    cin >> k;

    int i = 0, j = 0;
    int frq[26] = {0};
    int unq = 0;
    int count = -1;
    while (j < n)
    {
        frq[s[j] - 'a']++;
        if (frq[s[j] - 'a'] == 1)
        {
            unq++;
        }

        while (unq > k)
        {
            frq[s[i] - 'a']--;

            if (frq[s[i] - 'a'] == 0)
            {
                unq--;
            }
            i++;
        }

        if (unq == k)
        {
            count = max(count, j - i + 1);
            // cout << j - i + 1 << endl;
        }

        j++;
    }

    cout << count << endl;

    return 0;
}