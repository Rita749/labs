#include <stdio.h>
#include <math.h>
int main()
{
  const int a = 10;
    double x;
    printf("Enter x");
    scanf("%lf", &x);
    double y = (pow(a,x)+pow(a,-x))/2;
    if ((y>=-1) && (y<=2))
    {
      double z = sqrt(2+y-y*y);
      printf("z=%lf", z);
    }
    else
      printf("Error");
    return 0;
}
