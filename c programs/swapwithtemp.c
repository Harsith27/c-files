#include <stdio.h>
int main()
{
    int a, b, temp;
    printf("Enter the values of a and b \n");
    scanf("%d  %d", &a, &b);
    temp = a;
    a = b;
    b = temp;
    printf("The values of a=%d and b=%d", a, b);
    return 0;
}