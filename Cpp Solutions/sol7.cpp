#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<string> ans;
        string temp="";
        for(int i=0;i<s.size();i++){
            if(('a'<=s[i] && s[i]<='z') || ('A'<=s[i] && s[i]<='Z')){
                temp+=s[i];
            }else{
                if(temp!=""){ans.push_back(temp);
                temp="";}
                continue;
            }
        }
        if(temp!=""){ans.push_back(temp);}
        for(auto it:ans)cout<<it<<endl;
    }
    return 0;
}