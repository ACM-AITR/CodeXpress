#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
            }
            j++;
        }
        if(i==s.size())return true;
        return false;
    }
};
int main(){
    int t;
    cin>>t;
    Solution s=Solution();
    vector<string> ans;
    while(t--){
        string a,b;
        cin>>a>>b;
        bool check=s.isSubsequence(a,b);
        if(check){
            ans.push_back("Inosuke");
        }
        else{
            ans.push_back("Zenitsu");
        }
    }
    for(auto it:ans)cout<<it<<endl;
}