#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    long long count = 0;
    for (int i = 0; i < s.size() - 2; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C')
        {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}