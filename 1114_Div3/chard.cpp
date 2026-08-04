#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string a, b;
        cin >> n >> a >> b;

        vector<int> positionsA[2];
        vector<int> positionsB[2];

        for (int i = 0; i < n; ++i) {
            int parity = i % 2;

            if (a[i] == '1') {
                positionsA[parity].push_back(i);
            }

            if (b[i] == '1') {
                positionsB[parity].push_back(i);
            }
        }

        bool possible = true;
        long long answer = 0;

        for (int parity = 0; parity < 2; ++parity) {
            if (positionsA[parity].size() != positionsB[parity].size()) {
                possible = false;
                break;
            }

            for (int i = 0; i < static_cast<int>(positionsA[parity].size()); ++i) {
                answer += abs(positionsA[parity][i] -
                              positionsB[parity][i]) / 2;
            }
        }

        cout << (possible ? answer : -1) << '\n';
    }

    return 0;
}