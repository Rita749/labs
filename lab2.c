#include <stdio.h>
#include <math.h>
int main()
{
    const int a = 2;
    double x, z;
    printf("Enter x: ");
    scanf("%lf", &x);
    if ((x > -1.9) && (x < 1.9))
    {
        double y = (pow(a, x) + pow(a, -x)) / 2;
        printf("y(x) = %lf\n", y);
    //if ((y >= -1) && (y <= 2))
        double z = sqrt(2 + y - y * y);
        printf("z(y) = %lf", z);
    }
    else
        printf("X value is incorrect!");
    return 0;
}
