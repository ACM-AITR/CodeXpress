#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int up=0,down=matrix.size()-1,right=matrix[0].size()-1,left=0;
        vector<int > vec;
        int total=(right+1)*(down+1),cnt=0;
        while(cnt<total){
            for(int i=left;i<=right &&cnt<total;i++){
                vec.push_back(matrix[up][i]);
                cnt++;
            }
            up++;
            for(int i=up;i<=down && cnt<total;i++){
                vec.push_back(matrix[i][right]);
                cnt++;
            }
            right--;
            for(int i=right;i>=left && cnt<total;i--){
                vec.push_back(matrix[down][i]);
                cnt++;
            }
            down--;
            for(int i=down;i>=up && cnt<total;i--){
                vec.push_back(matrix[i][left]);
                cnt++;
            }
            left++;
        }
        return vec;
    }
};
int main(){
    int t;
    cin>> t;
    Solution s=Solution();
    vector<vector<int>> ans;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<vector<int>> matrix(m,vector<int>(n));
        for(int i=0;i<m;i++)for(int j=0;j<n;j++)cin>>matrix[i][j];
        ans.push_back(s.spiralOrder(matrix));
    }
    for(auto it:ans){for(auto jt:it)cout<<jt<<" ";
    cout<<endl;}
}