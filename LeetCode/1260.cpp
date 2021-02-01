class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>> tmp = grid;
        int                 n = grid.size();
        int                 m = grid[0].size();

        while (k--)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m - 1; j++)
                {
                    tmp[i][j + 1] = grid[i][j];
                }
            }
            for (int i = 0; i < n - 1; i++)
            {
                tmp[i + 1][0] = grid[i][m - 1];
            }
            tmp[0][0] = grid[n - 1][m - 1];
            grid = tmp;
        }
        return tmp;
    }
};