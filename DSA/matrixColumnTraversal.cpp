#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    bool down=true;

    for(int i=0;i<4;i++){
        if(down){
            for(int j=0;j<4;j++){
                cout<<arr[j][i]<<" ";
            }
            down=false;
        }
        else{
            for(int j=3;j>=0;j--){
                cout<<arr[j][i]<<" ";
            }
            down=true;
        }
    }
    return 0;
}