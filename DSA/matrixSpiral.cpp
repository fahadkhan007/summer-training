#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int n=4;
    int m=4;

    int top=0,bottom=n-1,left=0,right=m-1;
    while(top<=bottom && left<=right){
        for(int i=left;i<=right;i++){
            cout<<arr[top][i]<<" ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout<<arr[i][right]<<" ";
        }
        right--;
        for(int i=right;i>=left;i--){
            cout<<arr[bottom][i]<<" ";
        }
        bottom--;
        for(int i=bottom;i>=top;i--){
            cout<<arr[i][left]<<" ";
        }
        left++;
    }

    return 0;
}