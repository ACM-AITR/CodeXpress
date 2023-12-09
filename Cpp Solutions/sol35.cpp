#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans=0,i=0,j=1;
        for(i,j;i<nums.size() and j<nums.size();)
        {
            if(i==j or nums[j]-nums[i]<k)
                j++;
            else 
            {
                if(nums[j]-nums[i]==k)
                {
                    ans++;
                    j++;
                    for(;j<nums.size();j++)
                        if(nums[j]!=nums[j-1])
                            break;
                    if(j==nums.size())
                    return ans;
                    j--;                  
                }
                i++;
                while(i<j and nums[i]==nums[i-1])
                    i++;
            }
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
        ans.push_back(s.findPairs(nums,k));
    }
    for(auto it:ans)cout<<it<<endl;
}