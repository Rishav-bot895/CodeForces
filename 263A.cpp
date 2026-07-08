#include <bits/stdc++.h>
using namespace std;

int main(){
    int row,col;
    bool flag=true;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int temp;
            cin>>temp;
            if(temp==1){
                row=i+1;
                col=j+1;
                flag=false;
                break;
            }
        }
    }
    

    int moves=abs(row-3)+abs(col-3);
    cout<<moves;

    return 0;
}