#include <bits/stdc++.h>

using namespace std;
int main()
{
    int c, r, cntr = 0; cin >> r >> c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i % 2 == 0)
            {
                cout << "#";

            }
            if (i % 2 != 0)
            {
                if (cntr % 2 == 0)
                {
                    int t = c - 1;
                    while (t--)
                    {
                        cout << ".";
                    }
                    cout << "#";
                    cntr++;
                    break;
                }
                if (cntr % 2 != 0)
                {
                    int t = c - 1;
                    cout << "#";
                    while (t--)
                    {
                        cout << ".";
                    }
                    cntr++;
                    break;
                }
            }


        }
        cout << endl;

    }


    return 0;
}