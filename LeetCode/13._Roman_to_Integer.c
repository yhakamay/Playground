#include <string.h>

int getNum(char c)
{
    switch (c)
    {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
    }
}

int romanToInt(char *s){
    int digits = strlen(s);
    int ret = 0;
    
    for (int i = 0; i < digits; i++)
    {
        if (i + 1 < digits && getNum(s[i]) < getNum(s[i + 1]))
        {
            ret += getNum(s[i + 1]) - getNum(s[i]);
            i++;
        }
        else
            ret += getNum(s[i]);
    }
    return ret;
}
