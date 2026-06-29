vector<int> dx = {1,-1,0,0};
vector<int> dy = {0,0,1,-1};
void t(int i, int j, vector<vector<char>> &grid){
    grid[i][j] = '2';
    for(int k = 0;k<4;k++){
        if(i+dx[k]>=0 && i+dx[k] < grid.size() && j+dy[k]>=0 && j+dy[k]<grid[0].size() && grid[i+dx[k]][j+dy[k]]=='1'){
            t(i+dx[k], j+dy[k], grid);
        }
    }
}
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int c = 0;
        for(int i =0;i<grid.size();i++){
            for(int j =0;j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    c++;
                    t(i,j,grid);
                }
            }
        }
        return c;
    }
};
