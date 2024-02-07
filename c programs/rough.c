#include <stdio.h>
int main()
{
    int i, j, a[100], b[100], c, t;
    while (c = 2)
    {
        for (i = 0; i < 30; i++)
        {
            if (i < 30)
            {
                a[i] = i * 5;
                b[i] = i * 3;
                if (a[i] == a[j])
                {
                    t = t + 1;
                    break;
                }
                else
                {
                    t = t + 1;
                }
            }
            else
            {
                i = 0;
            }
        }
    }
    printf("no of seconds =%d", t);
    return 0;
}
