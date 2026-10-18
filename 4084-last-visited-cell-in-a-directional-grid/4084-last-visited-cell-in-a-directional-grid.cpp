class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>> visited(m, vector<int>(n, 0));

        int row = 0, col = 0;

        while (true) {
            visited[row][col] = 1;

            int nr = row, nc = col;
            char dir = grid[row][col];

            if (dir == 'R')
                nc++;
            else if (dir == 'L')
                nc--;
            else if (dir == 'U')
                nr--;
            else if (dir == 'D')
                nr++;

            if (nr < 0 || nr >= m || nc < 0 || nc >= n ||
                visited[nr][nc] == 1) {
                break;
            }

            row = nr;
            col = nc;
        }

        return {row, col};
    }
};