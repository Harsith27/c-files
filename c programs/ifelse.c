#include<stdio.h>
void main()
{
   int age;
   printf("enter your age\n");
   scanf("%d",&age);
   if(age>=18)
   {
    printf("eligible to vote\n");
   }
   else
   {
    printf("not eligible to vote\n");
   }
}
