#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 0;
        unordered_map<int, int> mp;
        int sum = 0;
        int maxm = 0;
        while (r < n) {
            sum += nums[r];
            mp[nums[r]]++;
            while (mp[nums[r]] > 1) {
                mp[nums[l]]--;
                sum -= nums[l];
                l++;
            }
            r++;
            maxm = max(maxm, sum);
        }
        return maxm;
    }
};
int main() {
    int t;
    cin >> t;
    Solution s = Solution();
    vector<int> ans;
    while (t--) {
        int n;
        cin >> n;
        vector<int> aux(n);
        for (int i = 0; i < n; i++) {
            cin >> aux[i];
        }
        ans.push_back(s.maximumUniqueSubarray(aux));
    }
    for (auto it : ans) {
        cout << it << endl;
    }
}