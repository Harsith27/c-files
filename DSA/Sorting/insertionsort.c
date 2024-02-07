#include <stdio.h>
void main()
{
    int n, k, i, j, temp;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 1; i < n; i++)
    {
        k = i;
        for (j = i - 1; j >= 0; j--)
        {
            if (a[k] < a[j])
            {
                temp = a[k];
                a[k] = a[j];
                a[j] = temp;

                k--;
            }
        }
    }
    printf("The sorted array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}