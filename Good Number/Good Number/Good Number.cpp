#include <bits/stdc++.h>
using namespace std;

int main()
{
    int sz, n, cntr = 0; cin >> sz >> n;
    string s;
    while (sz--)
    {
        cin >> s;
        int c = 0;
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j < s.size(); j++)
            {
                if (i == (s[j] - 48))
                {
                    c++;
                    break;
                }
            }
        }
        if (c == n + 1)
            cntr++;
    }
    cout << cntr;



    return 0;
}