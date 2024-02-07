#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int i, n, temp = 0;
        scanf("%d", &n);
        int a[n];
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (a[i] == 1)
            {
                if (i < n - 1 && temp == 0)
                {
                    printf("IDK\n");
                }
                else
                {
                    printf("YES\n");
                }
            }
            else
            {
                printf("NO\n");
                temp = 1;
            }
        }
    }
    return 0;
}
