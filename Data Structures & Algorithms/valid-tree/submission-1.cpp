class Solution {
public:
    bool validTree(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        if(edges.size() != n-1)
            return false;
        for(auto y: edges){
            adj[y[0]].push_back(y[1]);
            adj[y[1]].push_back(y[0]);
        }
        vector<bool> v(n,0);
        for(int i =0;i<n;i++){
            if(v[i]==0){
                if(i!=0){
                    return 0;
                }
                queue<pair<int,int>> q;
                q.push({i,i});
                v[i]=1;
                while(q.size()!=0){
                    auto [c, p] = q.front();
                    q.pop();
                    for(int x: adj[c]){
                        if(x==p){
                            continue;
                        }
                        if(v[x] == 1){
                            return 0;
                        }
                        q.push({x, c});
                        v[x]=1;
                    }
                }
            }
        }
        return 1;
    }
};
