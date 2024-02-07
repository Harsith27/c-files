#include<stdio.h>
#include<string.h>
int main()
{
    char name[10]; 
    printf("Enter your name(Gopal,Parvathi,Harsith,Vamsi,Other): ");
    scanf("%s",&name[10]);
    if(strcmp(name,"Gopal")==0)
    {
        printf("Personal Details=>\n");
        printf("DOB: 15/06/1980\n");
        printf("gender: Male(M)\n");
        printf("Age: 42\n");
    }
    if(strcmp(name,"Parvathi")==0)
    {
        printf("Personal Details=>\n");
        printf("DOB: .....\n");
        printf("gender: Female(F)\n");
        printf("Age: .....\n");
    }
    if(strcmp(name,"Harsith")==0)
    {
        printf("Personal Details=>\n");
        printf("DOB: 10/06/2005\n");
        printf("gender: Male(M)\n");
        printf("Age: 17\n");
    }
    if(strcmp(name,"Vamsi")==0)
    {
        printf("Personal Details=>\n");
        printf("DOB: 11/09/2007\n");
        printf("gender: Male(M)\n");
        printf("Age: 15\n");
    }
    return 0;
}