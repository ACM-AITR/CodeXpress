#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    vector<string> ans;
    while(t--){
        int n;
        cin>>n;
        int countA=0,countB=0;
        for(int i=0;i<n;i++){
            char temp;
            cin>>temp;
            if(temp=='H'){
                countA/=2;
            }
            else if(temp=='D'){
                countA*=2;
            }else{
                int f=temp-'0';
                countA+=f;
            }
        }
        for(int i=0;i<n;i++){
            char temp;
            cin>>temp;
            if(temp=='H'){
                countB/=2;
            }
            else if(temp=='D'){
                countB*=2;
            }else{
                int f=temp-'0';
                countB+=f;
            }
        }
        if(countA>countB){
            ans.push_back("Mohan "+to_string(countA));
        }else{
            ans.push_back("Rohan "+to_string(countB));
        }
    }
    for(auto it:ans){
        cout<<it<<endl;
    }
}