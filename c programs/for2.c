#include<stdio.h>
void main()
{
   int i,a=0;
   printf("The numbers are\n");
   for(i=1;i<=100;i++)
   {
     if(i%2==0||i%3==0||i%5==0)
     {
      printf(" %d\t",i);
      a++;
      }
   }
    printf("\n");
    printf("total count is %d\n",a);
}
