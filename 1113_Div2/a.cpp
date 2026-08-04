#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        string answer;

        
        for (int alice = 0; alice < (int)s.size(); ++alice) {
            if (s[alice] != '0') continue;

            string current = s;
            current.erase(current.begin() + alice);

            int bob = -1;

           
            for (int i = 0; i + 1 < (int)current.size(); ++i) {
                if (current[i] == '1' && current[i + 1] == '0') {
                    bob = i;
                    break;
                }
            }

           
            if (bob == -1) {
                bob = current.find('1');
            }

            current.erase(current.begin() + bob);

            answer = max(answer, current);
        }

        cout << answer << '\n';
    }

    return 0;
}