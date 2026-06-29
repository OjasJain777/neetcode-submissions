class Solution {
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto y: edges){
            adj[y[0]].push_back(y[1]);
            adj[y[1]].push_back(y[0]);
        }
        vector<bool> v(n,0);
        int c =0;
        for(int i =0; i<n;i++){
            if(v[i]==0){
                v[i]=1;
                c++;
                queue<int> q;
                q.push(i);
                while(q.size()!=0){
                    auto y = q.front();
                    q.pop();
                    for(int x: adj[y]){
                        if(v[x]!=1){
                            q.push(x);
                            v[x]=1;
                        }
                    }
                }
            }
        }
        return c;
    }
};
