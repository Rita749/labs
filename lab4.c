#include <stdio.h>
#include <math.h>


double f(double x)
{
    if (x <= 1.0)
        return cos(x) * exp(-x * x);
    else
        return log(x + 1.0) - sqrt(4.0 - x * x);
}


int main ()
{
    double x0, x, h2, s1, s2, d, e;
    int n, j;
    printf("Vvedite tochnost: ");
    scanf("%lf", &e);
    n = 2;
    x0 = 0.0;
    d = s1 = 1000.0;
    while(d >= e)
    {
        s2 = 0.0;
        for(j = 0; j < n; j++)
        {
            h2 = 2.0 / n;
            x = x0 +j * h2 + h2 / 2.0;
            s2 += f(x);
        }
        s2 = h2 * s2;
        d = fabs(s2 - s1) / 3.0;
        printf("%lf\t%lf\t%d\n", s2, d, n);
        s1 = s2;
        n = 2 * n;
    }
    printf("%lf\n", s2);
    return 0;
}
