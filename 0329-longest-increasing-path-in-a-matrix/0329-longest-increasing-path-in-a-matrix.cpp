class Solution {
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> cache(m, vector<int>(n, 0)); // DP table for memoization
        int maxPath = 0; 

        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                maxPath = max(maxPath, dfs(matrix, cache, i, j));
            }
        }

        return maxPath;
    }

private:
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}}; // Up, Down, Left, Right

    int dfs(const vector<vector<int>>& matrix, vector<vector<int>>& cache, int row, int col) {
        if (cache[row][col] != 0) {  // Check if the result is already computed
            return cache[row][col];
        }

        int maxPathFromCell = 1; // The minimum path length is itself 
        for (auto [dx, dy] : directions) {
            int newRow = row + dx;
            int newCol = col + dy;

            // Ensure validity and that we are moving to a cell with a larger value 
            if (newRow >= 0 && newRow < matrix.size() && newCol >= 0 && newCol < matrix[0].size() && 
                matrix[newRow][newCol] > matrix[row][col]) {
                maxPathFromCell = max(maxPathFromCell, 1 + dfs(matrix, cache, newRow, newCol));
            }
        }

        cache[row][col] = maxPathFromCell;  // Store the result for the current cell 
        return maxPathFromCell; 
        
        
    }
};