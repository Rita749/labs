#include <stdio.h>
#include <math.h>
int main()
{
    double x0, x, h, f;
    int n, i;
    printf("Vvedite shag h: ");
    scanf("%lf", &h);
    printf("x\t\t f(x)\n");
    printf("-----------------------\n");
    x0 = 0.0;
    n = 2 / h;
    i = 0;
    while (i <= n)
    {
        x = x0 + i * h;
        if (x <= 1.0)
            f = cos(x) * exp(-x * x);
        else
            f = log(x + 1) - sqrt(4 - x * x);
        printf("%lf\t\t %6.4lf\n", x, f);
        i += 1;
    }
    return 0;
}
