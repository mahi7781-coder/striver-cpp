//wap to print in reverse order
#include<bits/stdc++.h>
using namespace std;
void reverse(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    reverse(i-1,n);
}
int main(){
    int x;
    cin>>x;
    reverse(x,x);
}