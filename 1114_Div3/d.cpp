#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>
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

        vector<int64> b(n);
        map<int64, int64> frequency;

        for (int i = 0; i < n; ++i) {
            cin >> b[i];
            ++frequency[b[i]];
        }

        vector<int64> shadows;
        vector<int64> counts;

        for (auto [shadow, count] : frequency) {
            shadows.push_back(shadow);
            counts.push_back(count);
        }

        int groups = shadows.size();
        vector<int64> values(groups);

        bool possible = true;

    
        if (shadows[0] != 0) {
            possible = false;
        }

       
        for (int i = 0; i + 1 < groups && possible; ++i) {
            int64 difference = shadows[i + 1] - shadows[i];

            if (difference % counts[i] != 0) {
                possible = false;
                break;
            }

            values[i] = difference / counts[i];

            if (values[i] <= 0) {
                possible = false;
                break;
            }

            if (i > 0 && values[i] <= values[i - 1]) {
                possible = false;
                break;
            }
        }

        if (possible) {
            if (groups == 1) {
                values[0] = 1;
            } else {
                values[groups - 1] = values[groups - 2] + 1;

                if (values[groups - 1] > (long long)1e18) {
                    possible = false;
                }
            }
        }

        if (!possible) {
            cout << -1 << '\n';
            continue;
        }

        unordered_map<int64, int64> valueForShadow;
        valueForShadow.reserve(groups * 2);

        for (int i = 0; i < groups; ++i) {
            valueForShadow[shadows[i]] = values[i];
        }

        for (int i = 0; i < n; ++i) {
            cout << valueForShadow[b[i]]
                 << (i + 1 == n ? '\n' : ' ');
        }
    }

    return 0;
}