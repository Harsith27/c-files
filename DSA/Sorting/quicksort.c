#include <stdio.h>

int partition(int a[], int low, int high)
{
    int temp, i, j, pivot;
    i = (low + 1);
    pivot = a[low];
    j = high;
    while (i <= j)
    {
        while (a[i] < pivot)
            i++;
        while (a[j] > pivot)
            j--;
        if (i < j)
        {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    if (j != pivot)
    {
        temp = a[low];
        a[low] = a[j];
        a[j] = temp;
    }
    return j;
}

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pivdex = partition(a, low, high);
        quickSort(a, low, pivdex - 1);
        quickSort(a, pivdex + 1, high);
    }
}

int main()
{
    int n;
    printf("Enter the no of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter the elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}