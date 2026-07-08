#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string temp;
    for(int i=0;i<s.length();i=i+2){
        temp=temp+s[i];
    }
    sort(temp.begin(),temp.end());

    int j=0;
    for(int i=0;i<temp.length();i++){
        s[j]=temp[i];
        j++;
        j++;
    }
    cout<<s;
}