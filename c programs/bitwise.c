#include<stdio.h>
int main()
{
   int a,b,c,d,e,f,g,h;
   printf("enter values of a and b");
   scanf("%d%d",&a,&b);
   c=a&b;
   d=a|b;
   e=a^b;
   f=~a;
   g=a<<b;
   h=a>>b;
   printf("values of a&b is %d\n",c);
   printf("values of a|b is %d\n",d);
   printf("values of a^b is %d\n",e);
   printf("values of ~a is %d\n",f);
   printf("values of a<<b is %d\n",g);
   printf("values of a>>b is %d\n",h);
   return 0; 
}
