#include <stdio.h>

int main(void)
{
    long    n;
    int     product, sum, res;

    scanf("%ld", &n);
    product = 1;
    sum = 0;
    while (n)
    {
        sum += n % 10;
        product *= n % 10;
        n /= 10;
    }
    res = product - sum;
    printf("%d", res);
    return 0;
}