#include <stdio.h>
void main()
{
    int i = 0, n, key, /*count = 0,*/ index = 0;
    printf("Enter the no of elements:");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter element to search:");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            // count = 1;
            index = i;
            break;
        }
    }
    if (/*count==1*/ i != n)
    {
        printf("Key is found at index %d\n", i);
    }
    else
    {
        printf("Key is not found");
    }
}