#include<bits/stdc++.h>
using namespace std;

bool search(vector<int>&arr,int key,int left,int right){
    if(left>right){
        return false;
    }
    int mid=left+(right-left)/2;
    if(arr[mid]==key){
        return true;
    }else if(arr[mid]>key){
        search(arr,key,left,mid-1);
    }else{
        search(arr,key,mid+1,right);
    }
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
    bool ans=search(arr,key,0,n-1);
    if(ans){
        cout<<"Found";
    }else{
        cout<<"Not Found";
    }
    return 0;
}