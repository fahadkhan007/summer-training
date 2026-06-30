#include<iostream>

using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cout<<"Enter the element at index "<<i<<": ";
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;

    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]=key){
            if(key>10){
                cout<<arr[i]*2;
            }else{
                cout<<arr[i]/2;
            }
            break;
        }
    }
    return 0;
}