#include<bits/stdc++.h>
using namespace std;
int main(){
    for(int i=1;i<6;i++){
        int count=i;
        for(int j=0;j<i;j++){
            cout<<count--<<" ";
        }
        cout<<endl;
    }
}

1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
