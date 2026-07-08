#include <bits/stdc++.h>

using namespace std;

int main(){
    string username;
    cin>>username;
    unordered_set<char> s;
    for(int i=0;i<username.length();i++){
        s.insert(username[i]);
    }

    if(s.size()%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }

    return 0;
}