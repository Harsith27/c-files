#include<stdio.h>
void main()
{
   int i,a=0;
   printf("The numbers are\n");
   for(i=8;i<100;i++)
   {
     if(i%4==0||i%5==4||i%6==4)
     {
      printf(" %d\t",i);
      a++;
      }
   }
    printf("\n");
    printf("total count is %d\n",a);
}
