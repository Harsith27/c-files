#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, n, min, b;
    printf("Enter the no of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        printf("pass=%d\n", i + 1);
        b = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            b = 0;
            if (a[j] > a[j + 1])
            {
                a[j] = a[j] + a[j + 1];
                a[j + 1] = a[j] - a[j + 1];
                a[j] = a[j] - a[j + 1];
                b = 1;
            }
            // if (b == 0 && j == n - i - 2)
            // {
            //     exit(0);
            // }
            for (int k = 0; k < n; k++)
            {
                printf("%d ", a[k]);
            }
            printf("\n");
        }
        if (b == 0)
        {
            break;
        }
        printf("\n");
    }
    return (0);
}