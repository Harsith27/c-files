#include <stdio.h>
int main()
{
    int N, K, i, j, temp, mid, l, r;
    printf("Enter the No of elements \n");
    scanf("%d", &N);
    int a[N];
    printf("Enter the elements\n");

    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter key element to search\n");
    scanf("%d", &K);
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
    printf("The sorted order=");
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    l = 0, r = N - 1;
    while (l <= r)
    {
        mid = l + (((K - a[l]) * (r - l)) / (a[r] - a[l]));
        if (K == a[mid])
        {
            printf("Key found");
            break;
        }
        else if (K < a[mid])
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
        printf("Key element not found");
    }

    return 0;
}
