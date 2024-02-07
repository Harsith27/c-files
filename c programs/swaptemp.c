#include<stdio.h>
void main()
{
   int a,b,temp;
   printf("enter values of a and b ");
   scanf("%d%d",&a,&b);
   printf("Before swapping values of a=%d,b=%d\n",a,b);
   temp=a;
   a=b;
   b=temp;
   printf("after swapping values of a=%d,b=%d\n",a,b);
}
