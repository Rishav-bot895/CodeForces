#include <bits/stdc++.h>

using namespace std;

int maxLen(string s){
    int maxx=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='#'){
            int curr=0;
            while(i<s.length() && s[i]=='#'){
                curr++;
                i++;
            }
            maxx=max(maxx,curr);
        }
    }
    return maxx;
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        string s;
        cin>>n>>s;
        int len=maxLen(s);

        if(len%2==0){
            cout<<len/2<<endl;
        }
        else{
            cout<<(len/2)+1<<endl;
        }
    }
    return 0;
}