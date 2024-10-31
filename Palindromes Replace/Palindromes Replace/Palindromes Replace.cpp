#include <iostream>

using namespace std;

int main()
{
    string s; cin >> s;
    for (int i = 0, j = s.size() - 1;
        i < s.size(), j >= 0; i++, j--)
    {
        if (s[i] == '?' && s[j] == '?') {
            s[i] = 'a'; s[j] = 'a';
        }
        else if (s[i] >= 'a' && s[i] == '?')
            s[j] = s[i];
        else if (s[i] == '?' && s[j] >= 'a')
            s[i] = s[j];
        else if (s[i] != '?' && s[j] != '?')
        {
            if (s[i] != s[j]) {
                cout << -1;
                return 0;
            }
        }
    }
    cout << s;


    return 0;
}