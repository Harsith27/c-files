#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp, swapped;
    int pass = 0;

    for (int i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap arr[j] and arr[j+1]
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;

                // Print the swap
                printf("Pass %d, Swap %d and %d: ", pass + 1, arr[j + 1], arr[j]);
                for (int k = 0; k < n; k++)
                {
                    printf("%d ", arr[k]);
                }
                printf("\n");
            }
        }

        pass++;

        if (swapped == 0)
        {
            // If no elements were swapped in this pass, the array is already sorted
            break;
        }
    }

    return 0;
}
