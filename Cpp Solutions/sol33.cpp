#include<bits/stdc++.h>
using namespace std;
  class Solution {
   public:
  int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
   sort(players.begin(),players.end());
   sort(trainers.begin(),trainers.end());
   int i = 0 ; int j=0 ; 
   int n = players.size() ; 
   int m = trainers.size() ; 
   int ans = 0 ;
   while(i<n && j<m){
     if(players[i]<=trainers[j]){
         ans++ ; 
         i++ ; j++ ; 
     }
     else if(players[i]> trainers[j]){
         j++ ; 
     }
 }
 return ans ; 
 
  }
};
int main(){
    int t;
    cin>>t;
    Solution s=Solution();
    vector<int> ans;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(m);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<m;i++)cin>>b[i];
        ans.push_back(s.matchPlayersAndTrainers(a,b));
    }
    for(auto it:ans)cout<<it<<endl;
}