#include <stdio.h>
int main()
{
    int i, j, a, b, t, p[10], q[10];
    printf("Enter the Distance of track \n");
    scanf("%d", &t);
    printf("Enter the speed of first racer a\n");
    scanf("%d", &a);
    printf("Enter the speed of second racer \n");
    scanf("%d", &b);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    while ()
        for (i = 0; i < N; i++)
        {
            for (j = i; j < N; j++)
            {
                if (a[i] > a[j])
                {
                    temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
