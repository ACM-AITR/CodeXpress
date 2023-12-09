#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> ans;
    while(t--){
        unordered_map<char,int> mp;
        string s;
        cin>>s;
        for(auto it:s){
            mp[it]++;
        }
        vector<pair<char,int>> aux;
        for(auto it:mp){
            aux.push_back(it);
        }
        sort(aux.begin(),aux.end(),[&](pair<char,int> &a,pair<char,int>&b){
            if(a.second==b.second)return a.first<b.first;
            else return a.second>b.second;
        });
        string temp="";
        for(auto it:aux){
            for(int i=0;i<it.second;i++)temp+=it.first;
        }
        ans.push_back(temp);
    }
    for(auto it:ans)cout<<it<<endl;
}