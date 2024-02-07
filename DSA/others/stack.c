#include<stdio.h>
#include<stdlib.h>
#define max 20
int stack[max];
int top=-1;
void push(int item)
{
    if(top==max-1)
    {
        printf("Stack is underflow");
        return;
    }
    top++;
    stack[top]=item;
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("The deleted element is :%d\n",stack[top--]);
}
void peek()
{
    if(top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    printf("The top most element is :%d\n",stack[top]);
}
void display()
{
    if(top==-1)
    {
        printf("stack is empty\n");
        return;
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
int main()
{
    int choice,item;
    printf("Stack operations :\n");
    printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
    while(1)
    {
        printf("Enter your choice :");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the data to push :");
                   scanf("%d",&item);
                   push(item);
                   break;
            case 2:pop();
                   break;
            case 3:peek();
                   break;
            case 4:display();
                   break;
            case 5:exit(0);
                   break;
            default:printf("Enter valid choice\n");
        }
    }
    return 0;
}