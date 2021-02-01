int countNegatives(int** grid, int gridSize, int* gridColSize)
{
    int colSize = *gridColSize, count = 0;

    for (int i = 0; i < gridSize; i++)
        for (int j = 0; j < colSize; j++)
            count += (grid[i][j] < 0) ? 1 : 0;
    return count;
}