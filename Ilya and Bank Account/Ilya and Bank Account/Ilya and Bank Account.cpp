#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s; cin >> s;
    if (s[0] != '-')
        cout << s;
    else if (s[s.size() - 1] == '0' && s.size() == 3)
        cout << 0;
    else
    {
        int len = s.size();
        char c1 = s[len - 1], c2 = s[len - 2];
        if (c1 <= c2)
            s.erase(s.end() - 2);
        else if (c1 > c2) {
            s.erase(s.end() - 1);
        }
        cout << s;

    }




    return 0;
}