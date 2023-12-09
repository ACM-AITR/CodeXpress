#include <iostream>
#include <algorithm>
#include<vector>
#include<map>
using namespace std;

int longestPalindrome(string chars) {
  map<int,int> freq;
  for (char c : chars) {
    freq[c - 'a']++;
  }
  int ans=0;
  bool foundOdd=false;
  for(auto it:freq){
    if(it.second%2==0){
        ans+=it.second;
    }else{
        ans+=(it.second-1);
        foundOdd=true;
    }
  }
    if(foundOdd)return ans+1;
    else return ans;
}

int main() {
  // test the function
  int t;
  cin>>t;
  vector<int> ans;
  while(t--){
    string s;
    cin>>s;
    int a=longestPalindrome(s);
    ans.push_back(a);
  }
  for(auto it:ans)cout<<it<<endl;
  return 0;
}