vector<int> dx = {1,-1,0,0};
vector<int> dy = {0,0,1,-1};
bool t(int i, int j, vector<vector<char>> &board, string word, int k){
    if(k==word.size()){
        return 1;
    }
    bool b = 0;
    char  a= board[i][j];
    board[i][j] = '0';
    for(int c = 0; c<dx.size();c++){
        if(i + dx[c] >=0 && i +dx[c] < board.size() && j + dy[c] >=0 && j+dy[c] < board[0].size() && board[i+dx[c]][j+dy[c]] == word[k]){
            b = b || t(i+dx[c], j+dy[c], board, word, k+1);
        }
    }
    board[i][j] = a;
    return b;
}
class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        bool ans = 0;
        for(int i = 0 ;i<board.size();i++){
            for(int j =0 ; j<board[0].size();j++){
                if(board[i][j] == word[0]){
                    ans = ans || t(i,j,board, word, 1);
                }
            }
        }
        return ans;
    }
};
