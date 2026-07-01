#include<iostream>
using namespace std;
int main(){
    string s="hello";
    int n=s.size();
    int i=0,j=n-1;
    while(i<=j){
        swap(s[i],s[j]);
        i++;
        j--;
    }

    cout<<s;
    return 0;

}