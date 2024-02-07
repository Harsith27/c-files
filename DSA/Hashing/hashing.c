#include<stdio.h>
void main() 
{
    int n, m, i, k;    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter table size: ");
    scanf("%d", &m);
    int a[n], h[m];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < m; i++) 
    {
        h[i] = 0;
    }
    for (i = 0; i < n; i++) 
    {
        k = (a[i] % m);
        if (h[k] == 0) 
        {
            h[k] = a[i];
        }
        else 
        {
            printf("Collision occurred for element %d\n", a[i]);
        }
    }
    
    printf("Hash Table:\n");
    for (i = 0; i < m; i++) 
    {
        printf("%d --- %d\n", i, h[i]);
    }
}
