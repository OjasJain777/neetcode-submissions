class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        vector<vector<int>> d = {{1,0},{-1,0},{0,1},{0,-1}};
        queue<pair<int,int>> q;
        for(int i = 0; i<grid.size();i++){
            for(int j =0; j<grid[0].size();j++){
                if(grid[i][j]=='1'){
                    ans ++;
                    q.push({i,j});
                    grid[i][j] = '0';
                    while(!q.empty()){
                        auto [r,c] = q.front();
                        q.pop();
                        for(auto &x: d){
                            if(r+x[0] >=0 && r+x[0] < grid.size() && c+x[1] >=0 && c+x[1] < grid[0].size() && grid[r+x[0]][c+x[1]] == '1'){
                                q.push({r+x[0], c+x[1]});
                                grid[r+x[0]][c+x[1]] = '0';
                            }
                        }
                    }
                }
            }
        }
        return ans;
    }
};
