#include <bits/stdc++.h>
using namespace std;


int main()
{

    long long a, cnt = 0;

    cin >> a;

    string arr[a];

    for (int i = 0; i < a; i++) { cin >> arr[i]; }

    for (int j = 0; j < a; j++) {

        if (arr[j] == arr[j + 1]) { continue; }

        else {
            cnt++;
        }


    }

    cout << cnt << endl;

    return 0;
}