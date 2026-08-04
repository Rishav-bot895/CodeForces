#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n), b(m);

        for (long long &x : a) cin >> x;
        for (long long &x : b) cin >> x;

        if (n < 2 * m) {
            cout << "NO\n";
            continue;
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool possible = true;

        for (int i = 0; i < m; ++i) {
            if (!(a[i] < b[i] && b[i] < a[n - m + i])) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}