#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int res = 0, curr = -1;
        for(auto &d: divisors){
            int score = 0;
            for(auto &it: nums)     
                score += (it % d == 0);
            if(score >= curr){
                if(score == curr)       
                    res = min(res, d);
                else                    
                    res = d;                    
                curr = score;
            }
        }
        return res;
    }
};
int main(){
    int t;
    cin>>t;
    vector<int> ans;
    Solution s;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int> l;
        vector<int> a;
        for(int i=0;i<n;i++){
            int temp;
            cin>>temp;
            l.push_back(temp);
        }
        for(int i=0;i<m;i++){
            int temp;
            cin>>temp;
            a.push_back(temp);
        }
        ans.push_back(s.maxDivScore(l,a));
    }
    for(auto it:ans){
        cout<<it<<endl;
    }
}