#include <bits/stdc++.h>
using namespace std;

using int64 = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int length = 2 * n;

        vector<int> first(n + 1, 0);
        vector<int64> dp(length + 1, 0);

        for (int i = 1; i <= length; ++i) {
            int x;
            cin >> x;

            // Treat the current element as uncovered.
            dp[i] = dp[i - 1] + 1;

            if (first[x] == 0) {
                first[x] = i;
            } else {
                int l = first[x];
                int64 intervalLength = i - l + 1LL;

                dp[i] = max(
                    dp[i],
                    dp[l - 1] + intervalLength * intervalLength
                );
            }
        }

        cout << dp[length] << '\n';
    }

    return 0;
}