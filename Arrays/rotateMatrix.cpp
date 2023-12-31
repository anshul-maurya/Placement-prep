#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> ans(n, vector<int>(n));
        for(int i = 0; i<n-1; i++) {
            for(int j = i+1; j<n; j++) {
                swap(matrix[j][i], matrix[i][j]);
            }
        }

        for(int i = 0; i<n; i++) {
           reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};