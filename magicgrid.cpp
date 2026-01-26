class Solution {
public:
    bool isMagic(vector<vector<int>>& g, int r, int c) {
        // Center must be 5
        if (g[r+1][c+1] != 5) return false;

        vector<int> count(10, 0);

        // Check numbers 1 to 9 uniqueness
        for (int i = r; i < r + 3; i++) {
            for (int j = c; j < c + 3; j++) {
                int val = g[i][j];
                if (val < 1 || val > 9 || ++count[val] > 1)
                    return false;
            }
        }

        // Check rows and columns
        for (int i = 0; i < 3; i++) {
            if (g[r+i][c] + g[r+i][c+1] + g[r+i][c+2] != 15)
                return false;
            if (g[r][c+i] + g[r+1][c+i] + g[r+2][c+i] != 15)
                return false;
        }

        // Check diagonals
        if (g[r][c] + g[r+1][c+1] + g[r+2][c+2] != 15)
            return false;
        if (g[r][c+2] + g[r+1][c+1] + g[r+2][c] != 15)
            return false;

        return true;
    }

    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;

        for (int i = 0; i <= rows - 3; i++) {
            for (int j = 0; j <= cols - 3; j++) {
                if (isMagic(grid, i, j))
                    count++;
            }
        }

        return count;
    }
};
