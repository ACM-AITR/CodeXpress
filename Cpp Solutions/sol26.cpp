#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    vector<vector<int>> ans;
    while(t--){
        int n;
        cin>>n;
        int temp;
        map<int,int> mp;
        vector<int> aux;
        while(n--){
            cin>>temp;
            mp[temp]++;
        }
        for(auto it: mp){
            if(it.first==it.second)aux.push_back(it.first);
        }
        if(aux.size()==0)ans.push_back({-1});
        else ans.push_back(aux);
    }
    for(auto it: ans){
        for(auto jt:it){
            cout<<jt<<' ';
        }
        cout<<endl;
    }
}