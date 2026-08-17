#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    vector<long long> b(m);
    for (int i = 0; i < m; ++i) {
        cin >> b[i];
    }
    
    
    long long hits_Bea = a[0] + n - 1;
    long long hits_Ver = b[0] + m - 1;
    
    
    if (hits_Bea >= hits_Ver) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }
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