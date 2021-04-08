#include <stdio.h>
#include <math.h>
int main()
{
    double x0, x, h, f;
    int  i, n;
    printf("Vvedite shag h: ");
    scanf("%lf", &h);
    printf("x\t\t f(x)\n");
    printf("-------------------------\n");
    x0 = 0.0;
    n = 2 / h;
    for (i = 0; i <= n; i++)
    {
        x = x0 + i * h;
        if (x <= 1)
            f = cos(x) * exp(-x * x);
        else
            f = log(x + 1) - sqrt(4 - x * x);
        printf("%lf\t\t %6.4lf\n", x, f);
    }
    return 0;
}
