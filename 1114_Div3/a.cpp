#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<int> tokens(3);
        cin >> tokens[0] >> tokens[1] >> tokens[2];

        int rounds = 0;

        while (true) {
            sort(tokens.begin(), tokens.end());

            // The game ends before the next round starts.
            if (tokens[0] == tokens[1] || tokens[1] == tokens[2]) {
                break;
            }

            ++tokens[0]; // Minimum receives one token.
            --tokens[2]; // Maximum gives one token.
            ++rounds;
        }

        cout << rounds << '\n';
    }

    return 0;
}