#include <stdio.h>
#include <conio.h>
int main()
{
    int N, i, min, max;
    printf("Enter the No of elements \n");
    scanf("%d", &N);

    int a[N];
    printf("Enter the elements\n");

    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];
    max = a[0];
    for (i = 0; i < N; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("The maximum element in the array is %d\n", max);

    for (i = 0; i < N; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("The minimum element in the array is %d", min);
    return 0;
}
