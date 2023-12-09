#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), [](int a, int b) {
            int countA = __builtin_popcount(a);
            int countB = __builtin_popcount(b);
            return (countA == countB) ? a < b : countA < countB;
        });
        return arr;
    }
};
int main(){
    int t;
    cin>>t;
    vector<vector<int>> ans;
    Solution s=Solution();
    while(t--){
        int n;
        cin>>n;
        vector<int> aux(n);
        for(int i=0;i<n;i++){
            cin>>aux[i];
        }
        ans.push_back(s.sortByBits(aux));
    }
    for(auto it:ans){
        for(auto jt:it){
            cout<<jt<<" ";
        }
        cout<<endl;
    }
}