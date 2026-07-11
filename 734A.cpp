#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;
    int a=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='A'){
            a++;
        }
        else{
            a--;
        }
    }
    if(a>0){
        cout<<"Anton";
    }
    else if(a==0){
        cout<<"Friendship";
    }
    else{
        cout<<"Danik";
    }
    return 0;
}