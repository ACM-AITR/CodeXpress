#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        // Create an unordered map to store diagonal elements
        unordered_map<int, vector<int>> map1;
        int row = mat.size();
        int column = mat[0].size();
        vector<vector<int>> ans(row, vector<int>(column, 0)); // initializing a vector matrix of zeroes to be returned as the answer
        
        // Store the diagonal elements in the map
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                map1[i - j].push_back(mat[i][j]);    //[i-j] is used as an key for diagonal elements
            }
        }
        
        // Sort the diagonal elements in descending order
        for (auto it : map1) {
            vector<int> temp = it.second;
            sort(temp.begin(), temp.end(), greater<int>());
            map1[it.first] = temp;
        }
        
        // Populate the sorted diagonal elements back into the matrix
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                ans[i][j] = map1[i - j].back();
                map1[i - j].pop_back();      
            }
        }
        
        return ans;
    }
};
int main(){
    int t;
    cin>> t;
    Solution s=Solution();
    vector<vector<vector<int>>> ans;
    while(t--){
        int m,n;
        cin>>m>>n;
        vector<vector<int>> matrix(m,vector<int>(n));
        for(int i=0;i<m;i++)for(int j=0;j<n;j++)cin>>matrix[i][j];
        ans.push_back(s.diagonalSort(matrix));
    }
    cout<<endl;
    for(auto mt:ans){
        for(auto it:mt){
            for(auto jt:it)cout<<jt<<" ";cout<<endl;}

    cout<<endl;}
}