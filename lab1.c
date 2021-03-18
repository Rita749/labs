#include <stdio.h>
int main()
{
  int a, b, c, x;
  float l, l1, l2;
	printf("Enter 3 parameters: \n");
	scanf("%d%d%d", &a, &b, &c);
	printf("Enter the number x: \n");
	scanf("%d", &x);
	if ((a < b) && (a < c))
	{
	   if ((a % 7 == 0) && (a <= x))
			  printf("Minimum=%d \n", a);
		 else
		{
			  l = (b + c) / (float)a;
			  printf("l = %f\n", l);
	 	}
	}
	else if ((b < c) && (b < a))
	{
	   if ((b % 7 == 0) && (b <= x))
		   printf("Minimum=%d \n", b);
		 else
	     {
			      l1 = (a + c) / (float)b;
			      printf("l = %f\n", l1);
	     }
	}
	else if ((c < b) && (c < a))
	{
	   if ((c % 7 == 0) && (c <= x))
		     printf("Minimum=%d \n", c);
		 else
		 {
		     l2 = (a + b) / (float)c;
			   printf("l = %f\n", l2);
		 }
	}
	return 0;
}
