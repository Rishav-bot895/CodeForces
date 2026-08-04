#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        // Calculate |f(s)|.
        int runs = 1;
        for (int i = 1; i < n; ++i) {
            if (s[i] != s[i - 1]) {
                ++runs;
            }
        }

        int answer = runs;

        // The first and last characters cannot be deleted.
        for (int i = 1; i < n - 1; ++i) {
            int newRuns = runs;

            newRuns -= (s[i - 1] != s[i]);
            newRuns -= (s[i] != s[i + 1]);
            newRuns += (s[i - 1] != s[i + 1]);

            answer = min(answer, newRuns);
        }

        cout << answer << '\n';
    }

    return 0;
}