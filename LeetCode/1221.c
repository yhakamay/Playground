int balancedStringSplit(char *s)
{
    size_t  len, countL, countR, ans;

    len = strlen(s);
    countL = 0;
    countR = 0;
    ans = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'L')
            countL++;
        else
            countR++;
        if (countL == countR)
        {
            ans++;
            countL = 0;
            countR = 0;
        }
    }
    return ans;
}