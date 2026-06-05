class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<char> dup_row, dup_col, dup;

        set<char> set_row, set_col, s;

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (board[i][j] == '.') continue;
                dup_row.push_back(board[i][j]);

                if (board[j][i] == '.') continue;
                dup_col.push_back(board[j][i]);
            }

            copy(dup_row.begin(), dup_row.end(), inserter(set_row, set_row.end()));
            copy(dup_col.begin(), dup_col.end(), inserter(set_col, set_col.end()));

            if (set_row.size() != dup_row.size()) return false;
            if (set_col.size() != dup_col.size()) return false;

            dup_row.clear();
            dup_col.clear();
            set_row.clear();
            set_col.clear();
        }

        for (int k = 0; k < 9; k += 3) {
            for (int i = 0 + k; i < 3 + k; i++) {
                for (int j = 0 + k; j < 3 + k; j++) {
                    if (board[i][j] == '.') continue;
                    dup.push_back(board[i][j]);
                }
            }

            copy(dup.begin(), dup.end(), inserter(s, s.end()));
            if (s.size() != dup.size()) return false;

            dup.clear();
            s.clear();
        }

        return true;
    }
};
