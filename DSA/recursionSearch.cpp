#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>&arr,int key,int n){
    if(n==0 ){
        if(arr[0]==key){
            return true;
        }else{
            return false;
        }
    }
    if(arr[n]==key){
        return true;
    }
    search(arr,key,n-1);
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    bool ans=search(arr,key,n-1);
    if(ans){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }
    return 0;
}