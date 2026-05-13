class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        // cek row
        // cek column
        // cek per 3x3


        // cek row
        for (int i = 0; i < 9; i++){
            vector<bool> foundRow(10, false);
            for (int j = 0; j < 9; j++){
                if (board[i][j] == '.'){
                    continue;
                }
                // vector<bool> foundRow(10, false);
                if (foundRow[board[i][j] -1]){
                    return false;
                } else {
                    foundRow[board[i][j] -1] = true;
                }
            }
        }   

        // cek col
        for (int j = 0; j < 9; j++){
            vector<bool> foundCol(10, false);
            for (int i = 0; i < 9; i++){
                if (board[i][j] == '.'){
                    continue;
                }
                // vector<bool> foundCol(10, false);
                if (foundCol[board[i][j]-1]){
                    return false;
                } else {
                    foundCol[board[i][j]-1] = true;
                }
            }
        }

        // cek 3x3
        for (int square = 0; square < 9; square++) {
            unordered_set<char> seen;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    int row = (square / 3) * 3 + i;
                    int col = (square % 3) * 3 + j;
                    if (board[row][col] == '.') continue;
                    if (seen.count(board[row][col])) return false;
                    seen.insert(board[row][col]);
                }
            }
        }

        return true;
    }
};
