#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int i, r = 12, mul = 1;

    for (i = 1; i <= r; i++)
    {
        mul = N * i;
        printf("%d * %d = %d\n", N, i, mul);
    }

    return 0;
}