#include<stdio.h>
void main()
{
   int cels,fahr;
   printf("enter fahrenheit value");
   scanf("%d",&fahr);
   cels=(fahr-32)*5/9;
   printf("celsius value is %d\n",cels);
}
