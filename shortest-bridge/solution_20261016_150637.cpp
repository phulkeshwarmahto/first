class Solution {
public:
    int shortestBridge(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int, int>> q;
        bool found = false;
        
        // Step 1: Find the first island using DFS and add its cells to the queue
        for (int i = 0; i < n && !found; ++i) {
            for (int j = 0; j < n && !found; ++j) {
                if (grid[i][j] == 1) {
                    dfs(grid, i, j, q);
                    found = true; // Stop searching once the first island is fully processed
                }
            }
        }
        
        // Step 2: Multi-source BFS to find the shortest path to the second island
        int distance = 0;
        vector<pair<int, int>> dirs = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        
        while (!q.empty()) {
            int size = q.size();
            while (size--) {
                auto [r, c] = q.front();
                q.pop();
                
                for (auto& d : dirs) {
                    int nr = r + d.first;
                    int nc = c + d.second;
                    
                    if (nr >= 0 && nr < n && nc >= 0 && nc < n) {
                        // Reached the second island
                        if (grid[nr][nc] == 1) {
                            return distance;
                        }
                        // Expand the bridge over water
                        if (grid[nr][nc] == 0) {
                            grid[nr][nc] = 2; // Mark as visited to avoid cycles
                            q.push({nr, nc});
                        }
                    }
                }
            }
            distance++;
        }
        
        return distance;
    }

private:
    void dfs(vector<vector<int>>& grid, int i, int j, queue<pair<int, int>>& q) {
        int n = grid.size();
        
        // Boundary check and ensure it's unvisited land
        if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] != 1) {
            return;
        }
        
        grid[i][j] = 2; // Mark as visited
        q.push({i, j}); // Add to BFS queue
        
        // Traverse all 4 directions
        dfs(grid, i + 1, j, q);
        dfs(grid, i - 1, j, q);
        dfs(grid, i, j + 1, q);
        dfs(grid, i, j - 1, q);
    }
};