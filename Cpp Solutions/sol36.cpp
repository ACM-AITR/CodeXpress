#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans=0;
        for(int i=0;i<k;i++){
            ans+=nums[i];
        }
        int j=k,i=0;
        double maxans=ans;
        while(j<nums.size()){
            ans+=nums[j];
            ans-=nums[i];
            i++;
            j++;
            maxans=max(maxans,ans);
        }
        return maxans/k;
    }
};
int main(){
    int t;
    cin>>t;
    Solution s=Solution();
    vector<double> ans;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>nums(n);
        for(int i=0;i<n;i++)cin>>nums[i];
        ans.push_back(s.findMaxAverage(nums,k));
    }
    for(int i=0;i<ans.size();i++){
        printf("%.5f\n",ans[i]);
    }
}