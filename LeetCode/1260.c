int** shiftGrid(int** grid, int gridSize, int* gridColSize, int k, int* returnSize, int** returnColumnSizes)
{
    int**   ret;
    int     n = gridSize, m = *gridColSize;

    ret = (int **)malloc(n * sizeof(int *));
    while (k--)
    {
        for (int i = 0; i < n; i++)
        {
            ret[i] = (int *)malloc(m * sizeof(int));
            for (int j = 0; j < m - 1; j++)
            {
                ret[i][j + 1] = grid[i][j];
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            ret[i + 1][0] = grid[i][m - 1];
        }
        ret[0][0] = grid[n - 1][m - 1];
        grid = ret;
    }
    **returnColumnSizes = n * m;
    return ret;
}