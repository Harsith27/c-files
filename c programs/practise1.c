#include <stdio.h>

int main()
{
    int N;
    printf("Enter the table size: ");
    scanf("%d", &N);

    int keys[N], values[N];
    for (int i = 0; i < N; i++)
    {
        keys[i] = -1;
        values[i] = -1; // Initialize values to -1 as empty slots.
    }

    printf("Enter the number of elements: ");
    int no;
    scanf("%d", &no);

    printf("Enter array elements => \n");
    for (int i = 0; i < no; i++)
    {
        int value;
        scanf("%d", &value);
        int key = value % N;
        int index = key;

        while (values[index] != -1)
        {
            index = (index + 1) % N;
        }

        keys[index] = key;
        values[index] = value;
    }

    printf("Hash Table (By linear probing):\n");
    for (int i = 0; i < N; i++)
    {

        printf("Index: %d, Value: %d, Key: %d\n", i, values[i], keys[i]);
    }

    return 0;
}
