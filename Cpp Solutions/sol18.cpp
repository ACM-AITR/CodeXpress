#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maximumTastiness(vector<int>& price, int k) {
        sort(price.begin(), price.end());
        auto check = [&](int target, int count = 1) {
            for (int i = 1, j = 0; i < price.size(); i++) 
                if (price[i] - price[j] >= target) j = i, count++;
            return count >= k;
        };
        auto left = 0, right = (int) price.back() - price.front() + 1;
        while (left < right) {
            auto mid = left + (right - left) / 2;
            if (check(mid)) left = mid + 1; else right = mid;
        }
        return left - 1;
    }
};
int main(){
    vector<int> ans;
    int t;
    cin>> t;
    Solution s=Solution();
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> aux(n);
        for(int i=0;i<n;i++)cin>>aux[i];
        ans.push_back(s.maximumTastiness(aux,k));
    }
    for(auto it:ans)cout<<it<<endl;
}