#include <bits/stdc++.h>
using namespace std;

int main(){
    int counter=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string action;
        cin>>action;
        if(action=="X++" || action=="++X"){
            counter++;
        }
        else{
            counter--;
        }
    }
    cout<<counter;
    return 0;
}