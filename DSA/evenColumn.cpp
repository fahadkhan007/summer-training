#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j=j+2){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}