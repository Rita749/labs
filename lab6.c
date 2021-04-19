#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int a[])
{
int i;
for (i = 0; i < n; i++)
a[i] = rand() % 101 - 50;
}

int main()
{
srand(time(NULL));
int n, m, in0, in1, in2, pr, s;
double max[3] = { 0, 0, 0 };
m = 0;
printf(" n -> ");
scanf("%d", &n);
int A[n];
fill(n, A);
int i;
for (i = 0; i < n; i++)
{
printf("%4d\n", A[i]);
if (m == 0 || A[i] > max[0])
{
max[2] = max[1];
max[1] = max[0];
max[0] = A[i];
if (m < 3) ++m;
}

else if (m == 1 || A[i] > max[1])
{
max[2] = max[1];
max[1] = A[i];

if (m < 3) ++m;
}
else if (m == 2 || A[i] > max[2])
{
max[2] = A[i];

if (m < 3) ++m;
}
}
printf("Maximalnie chisla: \n%f, \n%f, \n%f.\n", max[0], max[1], max[2]);

for (i = 0; i < n; i++)
{
    if (max[0]==A[i])
        in0 = i;
    if (max[1]==A[i])
        in1 = i;
    if (max[2]==A[i])
    in2 = i;
}
printf("Indeksi: %d, %d, %d", in0, in1, in2);

pr = max[0]*max[1]*max[2] - (in0 + in1 + in2);
printf("\n%d", pr);
s = (in0 + in1 + in2) % n;
printf("\n%d", s);

return 0;
}
