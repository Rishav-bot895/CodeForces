#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    if(n<2 & m<2){
        cout<<0;
    }
    else if(n%2==0 || m%2==0){
        cout<<n*m/2;
    }
    else{
        int vol=(n*(m-1))/2+n/2;
        cout<<vol;
    }
    return 0;
}