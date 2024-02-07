#include <stdio.h>
int main()
{
    int n, k, i, j, temp, mid, l, r;
    printf("Enter the No of elements \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements\n");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter key element to search\n");
    scanf("%d", &k);
    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("The sorted order=");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    l = 0, r = n - 1;
    while (l <= r)
    {
        mid = (l + r) / 2;
        if (k == a[mid])
        {
            printf("key found");
            break;
        }
        else if (k < a[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if (l > r)
    {
        printf("key element not found");
    }

    return 0;
}
