#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        unsigned long long fact = 1;
        for (int i = 2; i <= n; ++i) {
            fact *= i;
        }
        cout << fact;
        if (T) cout << '\n';
    }
    return 0;
}
