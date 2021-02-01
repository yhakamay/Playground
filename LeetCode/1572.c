bool    isCenter(int j, int matSize)
{
    return (j * 2 + 1 == matSize);
}

int     diagonalSum(int** mat, int matSize, int* matColSize)
{
    int sum = 0, i = -1, j = matColSize[0];

    while (++i < matSize && --j > -1)
        sum += isCenter(j, matSize) ? mat[i][i] : mat[i][i] + mat[i][j];
    return sum;
}