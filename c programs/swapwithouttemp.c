#include<stdio.h>
void main()
{
   int a,b;
   printf("enter values of a and b ");
   scanf("%d%d",&a,&b);
   printf("Before swapping values of a=%d,b=%d\n",a,b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("after swapping values of a=%d,b=%d\n",a,b);
}
