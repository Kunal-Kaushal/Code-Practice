class Solution {
  public:
    // Function to return the adjacency list for each vertex.
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& edges) {
        // Create an adjacency list of size V
        vector<vector<int>> adj(V);
        
        // Traverse through all edges
        for(auto &edge : edges) {
            int u = edge.first;
            int v = edge.second;
            
            // Since it's an undirected graph, add both connections
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        return adj;
    }
};