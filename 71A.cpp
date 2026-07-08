#include <bits/stdc++.h>
using namespace std;

string shorten(string s){
    int length=s.length()-2;
    string result=s.substr(0,1)+to_string(length)+s[s.length()-1];
    return result;
}


int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string word;
        cin>>word;
        if(word.length()<=10){
            cout<<word<<endl;
        }
        else{
            cout<<shorten(word)<<endl;
        }
    }
    return 0;
}