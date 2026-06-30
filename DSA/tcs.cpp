#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int k;
    cin>>k;

    unordered_map<string,int>mp;
    string temp="";
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            mp[temp]++;
            temp="";
        }else{
            temp+=s[i];
        }
    }
    if(!temp.empty()){
        mp[temp]++;
    }

    vector<pair<string,int>>v(mp.begin(),mp.end());
    sort(v.begin(),v.end(),[](pair<string,int>&a,pair<string,int>&b){
        if(a.second==b.second){
            return a.first<b.first;
        }
        return a.second>b.second;
    });

    for(int i=0;i<k;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }

    return 0;
}