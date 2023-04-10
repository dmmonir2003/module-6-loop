#include <stdio.h>
int main()
{
    int N;
    scanf("%d", &N);
    int X, even = 0, odd = 0, neg = 0, posi = 0;
    for (int i = 1; i <= N; i++)
    {
        scanf("%d", &X);
        if (X % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }

        if (X > 0)
        {
            posi++;
                }
        else if (X < 0)
        {

            neg++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, posi, neg);
    return 0;
}