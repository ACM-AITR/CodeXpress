#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0,cnt=0,ans=INT_MIN;
        while(right<nums.size()){
            if(nums[right]==0){
                cnt++;
            }
            while(cnt>k){
                if(nums[left]==0){
                    cnt--;
                }
                left++;
            }
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};
int main(){
    int t;
    cin>>t;
    Solution s=Solution();
    vector<int> ans;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];
        ans.push_back(s.longestOnes(nums,k));
    }
    for(auto it:ans)cout<<it<<endl;
}