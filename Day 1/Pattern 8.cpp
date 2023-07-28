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
