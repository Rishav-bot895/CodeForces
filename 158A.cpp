#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> input(n,0);

    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    k=input[k-1];
    int counter=0;

    for(int i=0;i<n;i++){
        if(input[i]>=k && input[i]>0){
            counter++;
        }
    }
    cout<<counter;
    return 0;
}