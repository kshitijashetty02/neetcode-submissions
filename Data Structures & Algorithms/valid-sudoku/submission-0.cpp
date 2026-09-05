class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9],col[9],ox[9];
       
        for(int r=0;r<9;r++){
            for(int c=0;c<9;c++){
                 char val=board[r][c];
                if(val=='.' )
                continue;
                int ind=r/3*3+c/3;
                if(rows[r].count(val)||col[c].count(val)||ox[ind].count(val)){
                    return false;
                }
                rows[r].insert(val);
                col[c].insert(val);
                ox[ind].insert(val);
            }
        }
        return true;

    }
};
