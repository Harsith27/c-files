#include<stdio.h>
#include<conio.h>
int main()
{
   int year;
   printf("enter any year");
   scanf("%d",&year);\
   if(year%4==0)
   {
    printf("It is an leap year\n");
   }
   else
   {
    printf("It is not a leap year\n");
   }
   return 0;
}
