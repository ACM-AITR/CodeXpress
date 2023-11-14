#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> ans;
    while(t--){
        string s;
        int k;
        cin>>k;
        cin>>s;
        k--;
        reverse(s.begin(),s.begin()+k);
        ans.push_back(s);
    }
    for(auto it:ans){
        cout<<it<<endl;
    }
}