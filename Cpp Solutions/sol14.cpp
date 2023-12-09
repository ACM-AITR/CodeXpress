#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int pass(int n, int time) {
        int x = time/(n-1);
        time %= (n-1);
        if(!(x&1)){
            return 1+time;
        }
        return n-time;
    }
}; 
int main(){
    int t;
    cin>>t;
    vector<int> ans;
    Solution s=Solution();
    while(t--){
        int n,time;
        cin>>n>>time;
        ans.push_back(s.pass(n,time));
    }
    for(auto it:ans)cout<<it<<endl;
}
