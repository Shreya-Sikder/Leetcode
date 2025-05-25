class Solution {
public:
    void dfs(vector<vector<char>>& grid, int row, int column) {
        // Mark current cell as visited
        grid[row][column] = '0';

        int rows = grid.size();
        int cols = grid[0].size();

        vector<int> dr = {1, -1, 0, 0};
        vector<int> dc = {0, 0, 1, -1};

        for (int i = 0; i < 4; i++) {
            int r = row + dr[i];
            int c = column + dc[i];
            if (r >= 0 && r < rows && c >= 0 && c < cols && grid[r][c] == '1') {
                dfs(grid, r, c);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        if (row == 0) return 0;
        int column = grid[0].size();//row te joto element totogulai column

        int cnt = 0;

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
