#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size";
    cin >> n;
    for(int i=0;i<n;i++){
    // spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
    //stars
        for(int j=0;j<2*i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    // spaces
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
    }
}