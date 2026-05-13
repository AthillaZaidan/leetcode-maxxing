class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // cari row dimana ini bakalan ada
        int n = matrix.size(), m = matrix[0].size();
        int row = -1;
        for (int i = 0; i < matrix.size() && row == -1; i++){
            if (matrix[i][0] <= target && target <= matrix[i][m-1]){
                row = i;
            }
        }
        if (row == -1){
            return false;
        }

        for (int j = 0; j < m; j++){
            if (matrix[row][j] == target){
                return true;
            }
        }
        return false;
    }
};
