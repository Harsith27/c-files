#include <stdio.h>
int main()
{
    int N;
    printf("Enter the table size:");
    scanf("%d", &N);
    int keys[N], result[N], value, index, i, no, key;
    for (i = 0; i < N; i++)
    {
        keys[i] = -1;
        result[i] = -1;
    }

    printf("Enter no of elements : ");
    scanf("%d", &no);

    printf("Enter array elements => \n");
    for (i = 0; i < no; i++)
    {
        scanf("%d", &value);
        key = value % N;

        index = key;

        while (result[index] != -1)
        {
            index = (index + 1) % N;
        }
        keys[index] = key;
        result[index] = value;
    }

    printf("Hash Table (By linear probing):\n");
    for (i = 0; i < N; i++)
    {
        printf("Index: %d, Value: %d, Key: %d\n", i, result[i], keys[i]);
    }
    return 0;
}