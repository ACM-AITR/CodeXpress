#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxGifts(vector<int>& costs, int budget) {
        int count=0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<costs.size();i++){
            if(costs[i] <= budget){
                budget-=costs[i];
                count++;
            }
            else break;
        }
        return count;
    }
};
int main(){
    int t;
    vector<int> ans;
    Solution s;
    cin>>t;
    while(t--){
        int m,x;
        cin>>m>>x;
        vector<int> costs;
        for(int i=0;i<m;i++){
            int temp;
            cin>>temp;
            costs.push_back(temp);
        }
        int temp=s.maxGifts(costs,x);
        ans.push_back(temp);
    }
    for(auto it:ans){
        cout<<it<<endl;
    }
}
