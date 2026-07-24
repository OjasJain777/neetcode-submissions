class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        vector<vector<int>> d= {{1,0},{0,1},{-1,0},{0,-1}};
        for(int i =0; i<grid.size();i++){
            for(int j =0 ; j<grid[0].size();j++){
                if(grid[i][j]==1){
                    queue<pair<int,int>> q;
                    q.push({i,j});
                    int a = 0;
                    grid[i][j] = 0;
                    while(!q.empty()){
                        auto [r,c] = q.front();
                        q.pop();
                        a++;
                        for(auto &x:d){
                            if(r+x[0] >=0 && r+x[0] < grid.size() && c+x[1] >=0 && c+x[1] < grid[0].size() && grid[r+x[0]][c+x[1]] == 1){
                                grid[r+x[0]][c+x[1]] = 0;
                                q.push({r+x[0], c+x[1]});
                            }
                        }
                    }
                    ans = max(ans, a);
                }
            }
        }
        return ans;
    }
};
