#include <bits/stdc++.h>

using namespace std;

int main(){
    int k,n,w;
    cin>>k>>n>>w;
    long long totalCost = k * w * (w + 1) / 2;
    cout << max(0LL, totalCost - n);

    return 0;
}