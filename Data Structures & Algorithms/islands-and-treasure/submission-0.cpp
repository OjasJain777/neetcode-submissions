class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        vector<vector<int>> d = {{1,0},{-1,0},{0,1},{0,-1}};
        for(int i =0; i<grid.size();i++){
            for(int j= 0; j<grid[0].size();j++){
                if(grid[i][j] == 0){
                    q.push({i,j});
                }
            }
        }
        int t=1;
        while(!q.empty()){
            int n = q.size();
            for(int k =0; k<n;k++){
                auto [r,c] = q.front();
                q.pop();
                for(auto &x : d){
                    if(r+x[0] >=0 && r+x[0] < grid.size() && c+x[1] >= 0 && c+x[1] < grid[0].size() && grid[r+x[0]][c+x[1]] == INT_MAX){
                        grid[r+x[0]][c+x[1]] = t;
                        q.push({r+x[0], c+x[1]});
                    }
                }
            }
            t++;
        }
    }
};
