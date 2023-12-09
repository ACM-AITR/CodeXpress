#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());

        int i = 0, j = nums.size()-1;
        int ans = 0;
        while(j>=0 && nums[j]>=k) j--;

        while(i<j) {
            if((nums[i]+nums[j])==k) {
                ans++;
                i++;
                j--;
            } else if((nums[i]+nums[j])>=k) {
                j--;
            } else i++;
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
        vector<int> aux(n);
        for(int i=0;i<n;i++)cin>>aux[i];
        ans.push_back(s.maxOperations(aux,k));
    }
    for(auto it:ans)cout<<it<<endl;
}