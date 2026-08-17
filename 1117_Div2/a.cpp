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

       
        bool available[26] = {};

        for (int i = 0; i < n; ++i) {
            string w;
            cin >> w;
            available[w[0] - 'a'] = true;
        }

        vector<string> a(m);
        for (auto &s : a) cin >> s;

        vector<bool> done(m, false);
        int remaining = m;

        while (remaining > 0) {
            bool changed = false;

            for (int i = 0; i < m; ++i) {
                if (done[i]) continue;

                bool possible = true;

             
                for (char c : a[i]) {
                    if (!available[c - 'A']) {
                        possible = false;
                        break;
                    }
                }

                if (possible) {
                    done[i] = true;
                    --remaining;

                    
                    available[a[i][0] - 'A'] = true;

                    changed = true;
                }
            }

            if (!changed)
                break;
        }

        cout << (remaining == 0 ? "YES\n" : "NO\n");
    }

    return 0;
}