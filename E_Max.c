#include <stdio.h>
#include <limits.h>
int main()
{
    int N;
    scanf("%d", &N);
    int X, max = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &X);
        if (X > max)
        {
            max = X;
        }
    }
    printf("%d\n", max);

    return 0;
}