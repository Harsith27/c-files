#include <stdio.h>

int main()
{
    int i, j, k, count = 0;

    for (i = 1; i <= 5; i++)
    {
        for (k = 1; k <= 5 - i; k++)
        {
            printf("   ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%2d ", j);
            count++;
        }
        for (j = count - 1; j >= 1; j--)
        {
            printf(" %d ", j);
        }

        printf("\n");
        count = 0;
    }

    return 0;
}
