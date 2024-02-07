#include <stdio.h>
int main()
{
    int N, i, j, temp;
    printf("Enter the No of elements \n");
    scanf("%d", &N);
    int a[N];
    printf("Enter the elements\n");

    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

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
    return 0;
}