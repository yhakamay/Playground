bool arrayStringsAreEqual(char ** word1, int word1Size, char ** word2, int word2Size) {
    int     i, j, k;
    char*   newWord1, newWord2;

    newWord1 = (char *)malloc()
    for (i = 0; i < word1Size; i++) {
        for (j = 0, k = 0; word1[j]; j++, k++) {
            newWord1[k] = word1[i][j];
        }
    }
    for (i = 0; i < word2Size; i++) {
        for (j = 0, k = 0; word2[j]; j++, k++) {
            newWord2[k] = word2[i][j];
        }
    }
    return (strcmp(newWord1, newWord2));
}