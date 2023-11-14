#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>> t;
    vector<vector<int>> ans;
    while(t--){
        vector<int> temp;
        vector<int> inp;
        int mode,no,n;
        cin>>mode>>no>>n;
        for(int i=0;i<n;i++){
            int k;
            cin>>k;
            inp.push_back(k);
        }
        if(mode==0){
        for(int i=no;i<n;i++){
            temp.push_back(inp[i]);
        }
        for(int i=0;i<no;i++){
            temp.push_back(inp[i]);
        }}else{
            for(int i=n-no;i<n;i++){
                temp.push_back(inp[i]);
            }
            for(int i=0;i<n-no;i++){
                temp.push_back(inp[i]);
            }
        }
        ans.push_back(temp);
    }
    cout<<endl<<endl<<endl<<endl<<endl;
    for(auto it:ans){
        for(auto jt:it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }
}