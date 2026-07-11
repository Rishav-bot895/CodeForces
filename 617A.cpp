#include <bits/stdc++.h>
using namespace std;
int main(){
    int dist;
    cin>>dist;
    int steps=0;
    while(dist>0){
        if(dist>5){
            dist=dist-5;
            steps++;
        }
        else{
            dist=0;
            steps++;
        }
    }
    cout<<steps;
    return 0;
}