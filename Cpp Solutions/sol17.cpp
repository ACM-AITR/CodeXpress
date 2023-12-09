#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        long long maxSum = 0;
        for (int i = 0; i < nums.size() / 2; i++) {
            maxSum =maxSum >= (nums[i] + nums[nums.size() - 1 - i])?maxSum :(nums[i] + nums[nums.size() - 1 - i]);
        }
        
        return maxSum;
    }
};
int main(){
    int t;
    cin>> t;
    Solution s=Solution();
    vector<long long> ans;
    while(t--){
        int n;
        cin>>n;
        vector<int> aux(n);
        for(int i=0;i<n;i++)cin>>aux[i];
        ans.push_back(s.minPairSum(aux));
    }
    for(auto it:ans){
        cout<<it<<endl;
    }
}