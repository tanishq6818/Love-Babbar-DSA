#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=1;
    for(int i=1;i<6;i++){
        for(int j=1;j<i;j++){
            cout<<sum++<<" ";
        }
        cout<<endl;
    }
}
