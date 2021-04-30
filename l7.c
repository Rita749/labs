#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int ml(int n, int m, int a[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            a[i][j] = rand() % 10;
    }
    return 0;
}

int kl(int n, int m, int a[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("% 7d", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

int sm(int n, int m, int a1[n][m], int a2[n][m], int ar[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ar[i][j] = a1[i][j] + a2[i][j];
        }
    }
    return 0;
}

int main()
{
    srand(time(NULL));
    int n, m;
    printf("kol-vo strok -> ");
    scanf("%d", &n);
    printf("kol-vo stolbicov -> ");
    scanf("%d", &m);
    int a1[n][m], a2[n][m], ar[n][m];
    ml(n, m, a1);
    ml(n, m, a2);
    kl(n, m, a1);
    printf("\n\n");
    kl(n, m, a2);
    printf("\n\n");
    sm(n, m, a1, a2, ar);
    kl(n, m, ar);
    return 0;
}
