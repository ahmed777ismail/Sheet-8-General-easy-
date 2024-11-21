#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1, s2; cin >> s1 >> s2;
    int len1 = s1.size();
    int len2 = s2.size();
    bool flag = 0;
    if (len1 == len2)
    {
        for (int i = 0; i < len2; i++)
        {
            if (s1[i] != s2[i])
                flag = 1;
        }
        if (flag == 1)
            cout << len2;
        else
            cout << -1;
    }
    else
        cout << max(len2, len1);



    return 0;
}