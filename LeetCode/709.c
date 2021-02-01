bool    isUp(char c)
{
    return (c >= 'A' && c <= 'Z');
}

char    *toLowerCase(char *str)
{
    for (int i = 0; str[i]; i++)
        str[i] = isUp(str[i]) ? str[i] + 32 : str[i];
    return str;
}