#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    long long S;
    int q;
    cin >> S >> q;

   
    vector<long long> w;
    for (long long i = 1; i * i <= S; ++i) {
        if (S % i == 0) {
            w.push_back(i);
            if (i * i != S) {
                w.push_back(S / i);
            }
        }
    }
   
    sort(w.begin(), w.end());

    int k = w.size();
    
  
    vector<long long> W(k + 1, 0);
    vector<long long> H(k + 1, 0);
    vector<long long> P(k + 1, 0);

    for (int i = 1; i <= k; ++i) {
        W[i] = w[i - 1];
        H[i] = S / W[i];
       
        P[i] = P[i - 1] + (W[i] - W[i - 1]) * H[i];
    }

  
    for (int i = 0; i < q; ++i) {
        long long x, y;
        cin >> x >> y;

     
        int A = lower_bound(W.begin() + 1, W.end(), x) - W.begin();
        int B = lower_bound(H.begin() + 1, H.end(), y, greater<long long>()) - H.begin();

        long long ans = 0;
        
        if (B >= A) {
          
            ans = W[A - 1] * y + (x - W[A - 1]) * min(H[A], y);
        } else {
          
            ans = W[B - 1] * y + (P[A - 1] - P[B - 1]) + (x - W[A - 1]) * H[A];
        }
        
        cout << ans << "\n";
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