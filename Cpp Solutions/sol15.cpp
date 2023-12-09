#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        set<int> s;
        int n = nums.size();

        for(int i=0;i<n;i++) {
            s.insert(nums[i]);
        }

        long long ans = 0;
        int start = 1;

        for(auto it : s) {
            long long l = start;
            long long r = it;

            if(k > (r-l)) {
                k -= (r-l);
            }
            else 
                break;

            ans += (r*(r-1)/2) - (l*(l-1)/2);

            start = r+1;
        }

        long long l = start;
        long long r = start + k;

        ans += (r*(r-1)/2) - (l*(l-1)/2);

        return ans;
    }
};

int main(){
    int t;
    cin>>t;
    vector<long long> ans;
    Solution s=Solution();
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> aux(n);
        for(int i=0;i<n;i++){
            cin>>aux[i];
        }
        ans.push_back(s.minimalKSum(aux,k));
    }
    for(auto it:ans){
        cout<<it<<endl;
    }
}