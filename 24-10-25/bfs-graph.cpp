class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        int V = adj.size();  // Number of vertices
        vector<int> ans;     // To store BFS traversal result
        vector<int> vis(V, 0); // To mark visited vertices
        
        queue<int> q;
        
        // BFS for every component (to handle disconnected graphs)
        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                vis[i] = 1;
                q.push(i);
                
                while (!q.empty()) {
                    int node = q.front();
                    q.pop();
                    ans.push_back(node);
                    
                    // Traverse all adjacent nodes
                    for (auto it : adj[node]) {
                        if (!vis[it]) {
                            vis[it] = 1;
                            q.push(it);
                        }
                    }
                }
            }
        }
        return ans;
    }
};