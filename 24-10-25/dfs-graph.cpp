class Solution {
  public:
    void dfsHelper(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& ans) {
        vis[node] = 1;
        ans.push_back(node);
        
        // Visit all adjacent nodes
        for (auto it : adj[node]) {
            if (!vis[it]) {
                dfsHelper(it, adj, vis, ans);
            }
        }
    }

    vector<int> dfs(vector<vector<int>>& adj) {
        int V = adj.size();
        vector<int> ans;
        vector<int> vis(V, 0);
        
        // DFS for every component (handles disconnected graphs)
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                dfsHelper(i, adj, vis, ans);
            }
        }
        
        return ans;
    }
};