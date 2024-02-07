#include<stdio.h>
#include<stdlib.h>
#define max 20
int queue[max];
int front=-1,rear=-1;
void push(int item)
{
    if(rear==-1)
    {
        front++;
        rear++;
    }
    if(rear==max+1 && front==0)
        printf("Queue is full\n");
    else
        queue[rear++]=item;
}
void pop()
{
    if(front==rear)
        printf("Queue is empty\n");
    else
        printf("The deleted element is :%d\n",queue[front++]);
}
void peek()
{
    if(front==rear)
        printf("Queue is empty\n");
    else
        printf("The front most element is :%d\n",queue[front]);
}
void display()
{
    if(front==rear)
       printf("Queue is empty\n");
    else
    {
        for(int i=front;i<rear;i++)
            printf("%d ",queue[i]);
        printf("\n");
    }
}
int main()
{
    int choice,item;
    printf("Queue operations :\n");
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