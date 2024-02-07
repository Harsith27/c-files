#include<stdio.h>
int main()
{
   int a,b,c,d,e,g;
   float f;
   printf("enter values of a and b");
   scanf("%d%d",&a,&b);
   c=a+b;
   d=a-b;
   e=a*b;
   f=a/b;
   g=a%b;
   printf("values of a+b is %d\n",c);
   printf("values of a-b is %d\n",d);
   printf("values of a*b is %d\n",e);
   printf("values of a/b is %0.1f\n",f);
   printf("values of a modulus b is %d\n",g);
   return 0; 
}
