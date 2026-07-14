#include <bits/stdc++.h>

using namespace std;

void solve(vector<long long> vec){
    for(int i=0;i<vec.size();i++){
        if(vec[i]<i+1){
            cout<<"NO"<<endl;
            return;
        }
        else if(i<vec.size()-1){
            long long extra=vec[i]-(i+1);
            vec[i]=vec[i]-extra;
            vec[i+1]=vec[i+1]+extra;
        }
    }
    cout<<"YES"<<endl;
    return;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<long long> vec;
        for(int j=0;j<n;j++){
            long long temp;
            cin>>temp;
            vec.push_back(temp);
        }
        solve(vec);
    }
    return 0;
}