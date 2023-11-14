#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string breakPalindrome(string p) {
        int start = 0, end = p.size() - 1;
        if(p.size() <= 1) return "-1";
        while(start < end){
            if(p[start] != 'a' && p[end] != 'a'){
                p[start] = 'a';
                return p;
            }
            else{
                start++; end--;
            }
        }
        p[p.size() - 1] = 'b';
        return p;
    }
};

int main(){
    int t;
    vector<string> ans;
    cin>> t;
    Solution sol;
    while(t--){
        string s;
        cin>>s;
        string temp=sol.breakPalindrome(s);
        ans.push_back(temp);
    }
    for(auto it:ans){
        cout<<it<<endl;
    }
}