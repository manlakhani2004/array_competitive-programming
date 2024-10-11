class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<vector<int>> nums(matrix);
        int n = matrix.size();
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                matrix[i][j] = nums[j][i];
            }
        }
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};