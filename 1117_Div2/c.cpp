#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
   
    vector<int> p(n + 1);
    for (int i = 2; i <= n; ++i) {
        cin >> p[i];
    }
    
    int m;
    cin >> m;
    
   
    vector<bool> is_target(n + 1, false);
    for (int i = 0; i < m; ++i) {
        int a;
        cin >> a;
        is_target[a] = true;
    }
    
    
    vector<bool> has_target = is_target;
    
    for (int i = n; i >= 2; --i) {
        if (has_target[i]) {
            has_target[p[i]] = true;
        }
    }
    
    // Build a list of target-containing children for each vertex
    vector<vector<int>> target_children(n + 1);
    for (int i = 2; i <= n; ++i) {
        if (has_target[i]) {
            target_children[p[i]].push_back(i);
        }
    }
    
    vector<int> ans;
    
   
    for (int i = 1; i <= n; ++i) {
        int sz = target_children[i].size();
        
        if (is_target[i]) {
            
            for (int u : target_children[i]) {
                ans.push_back(u);
            }
        } else if (sz > 0) {
            
            for (int j = 0; j < sz - 1; ++j) {
                ans.push_back(target_children[i][j]);
            }
        }
    }
    
   
    cout << ans.size();
    for (int u : ans) {
        cout << " " << u;
    }
    cout << "\n";
}

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    
    return 0;
}