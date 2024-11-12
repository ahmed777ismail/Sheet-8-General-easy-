#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c, cntr = 0; cin >> r >> c;
    char arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        bool flag = 1;
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 'S')
                flag = 0;
        }
        if (flag == 1) {
            cntr += c;
            for (int k = 0; k < c; k++)
            {
                arr[i][k] = 'X';
            }
        }
    }
    for (int i = 0; i < c; i++)
    {
        bool flag = 1;
        for (int j = 0; j < r; j++)
        {
            if (arr[j][i] == 'S')
                flag = 0;
        }
        if (flag == 1)
        {
            for (int k = 0; k < r; k++)
            {
                if (arr[k][i] != 'X')
                    cntr++;
            }

        }
    }
    cout << cntr;

    return 0;
}