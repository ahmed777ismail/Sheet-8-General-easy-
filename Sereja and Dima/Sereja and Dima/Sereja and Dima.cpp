#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, ser = 0, di = 0, ctr = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n;)
    {
        int tmp = arr[i];
        if (arr[n - 1] > tmp) tmp = arr[n - 1], n--;
        else i++;
        if (ctr % 2 == 0) ser += tmp, ctr++;
        else di += tmp, ctr++;
    }
    cout << ser << " " << di;

}