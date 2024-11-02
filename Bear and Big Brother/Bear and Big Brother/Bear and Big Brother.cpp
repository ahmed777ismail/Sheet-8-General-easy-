#include<bits/stdc++.h>
using namespace std;
int func(int n1, int n2, int years) {
    if (n1 <= n2) {
        return func(n1 * 3, n2 * 2, years + 1);
    }
    else {
        return years;
    }
}
int main() {
    int n1, n2;
    cin >> n1 >> n2;
    cout << func(n1, n2, 0);
}