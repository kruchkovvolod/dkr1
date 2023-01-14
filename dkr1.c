#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    double a;
    do
    {
        printf ("Enter N");
        scanf ("%d", &N);
    }
    while (N < 0);
    printf ("Enter a");
    scanf ("%lf", &a);

    double sum = 0;
    double aN = 1;
    for (int n = 0; n <= N; n++)
    {
        if (n==0)
        {
            aN = a;
        }
        else if (n == 1)
        {
            aN *= a * a;
        }
        else if (n > 1)
        {
            aN *= a * a;
        }
        int fc = 1;
        for(int i = 2; i <= 2 * n + 1; i++)
        {
            fc *= i;
        }
        sum += aN / fc;
    }
    printf("Sum=%lf", sum);
    return 0;
}
