#include<stdio.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *link;
};
struct node *start=NULL;
struct node *insertatempty(struct node *start,int item)
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->info=item;
  temp->link=NULL;
  start=temp;
  return start;
}
struct node *insertatbegin(struct node *start,int item)
{
  struct node *temp;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->info=item;
  temp->link=start;
  start=temp;
  return start;
}
struct node *insertatend(struct node *start,int item)
{
  struct node *temp,*p;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->info=item;
  p=start;
  while(p->link!=NULL)
    p=p->link;
  temp->link=NULL;
  p->link=temp;
  return start;
}
struct node *insertbeforeanode(struct node *start,int item,int key)
{
  struct node *temp,*p;
  if(start==NULL)
  {
    printf("list is empty");
    return start;
  }
  if(start->info==key)
     insertatbegin(start,item);
  else
  {
  p=start;
  while(p->link!=NULL)
  { 
    if(p->link->info==key)
    {
     temp=(struct node *)malloc(sizeof(struct node));
     temp->info=item;
     temp->link=p->link;
     p->link=temp;
     return start;
     }
   p=p->link;
  } 
  printf("key not found");
  return start;  
  }
}  
struct node *insertafteranode(struct node *start,int item,int key)
{
  struct node *temp,*p;
  p=start;
  while(p!=NULL)
  { 
    if(p->info==key)
    {
     temp=(struct node *)malloc(sizeof(struct node));
     temp->info=item;
     temp->link=p->link;
     p->link=temp;
     return start;
    }
   p=p->link;
   } 
  printf("key not found");
  return start;  
}  
struct node *insertatposition(struct node *start,int item,int pos)
{
  struct node *temp,*p;
  temp=(struct node *)malloc(sizeof(struct node));
  temp->info=item;
  if(start==NULL)
  {
    printf("list is empty");
    return start;
  }
  if(pos==1)
    insertatbegin(start,item);
  p=start;
  for(int i=0;i<pos-1&&p->link!=NULL;i++)
    p=p->link;
  if(p->link==NULL)
  { 
    printf("list is having less elements");
    return start;
  }
  else
  {
    temp->link=p->link;
    p->link=temp;
    return start;      
  }
}
struct node *delete(struct node *start,int key)
{
  struct node *temp,*p;
  if(start==NULL)
  {
    printf("list is empty");
    return start;
  }
  if(start->info==key)
  {
    temp=start;
    start=start->link;
    printf("deleted node is %d",temp->info);
    free(temp);
    return start;
  }
  p=start;
  while(p->link!=NULL)
  {
    if(p->link->info==key)
    {
      temp=p->link;
      p->link=temp->link;
      printf("deleted node is %d",temp->info);
      free(temp);
      return start;
    }
    p=p->link;
  }
  printf("not found");
  return start;
}
void traverse(struct node *start)
{
  struct node *p;
  if(start==NULL)
  {
    printf("list is empty");
    return;
  }
  p=start;
  while(p!=NULL)
  {
    printf("%d  ",p->info);
    p=p->link;
  }
}
void search(struct node *start,int key)
{
  struct node *p;
  if(start==NULL)
  {
    printf("list is empty");
    return;
  }
  p=start;
  while(p!=NULL)
  {
    if(p->info==key)
    {    
      printf("key found");
      return;
    }
    p=p->link;
  }
  printf("key not found");
  return;
}
struct node * reverse(struct node *start)
{
  struct node *ptr,*next,*prev;
  prev=NULL;
  ptr=start;
  while(ptr!=NULL)
  {
    next=ptr->link;
    ptr->link=prev;
    prev=ptr;
    ptr=next;
  }
  start=prev;
  return start;
}
void main()
{
  int choice,data,key,pos;
  printf("The operations Are:\n");
  printf("1.Insert at begin\n2.Insert at empty\n3.Insert at end\n4.Insert at after a node\n5.Insert at before a node\n6.Insert at pos\n7.Delete a node\n8.Traverse\n9.Search\n10.Reverse\n11.Exit\n");
  while(1)
  {
  printf("Enter the choice:");
  scanf("%d",&choice);
   switch(choice)
   {
     case 1 : printf("enter the element to insert:");
              scanf("%d",&data);
              start=insertatbegin(start,data);
              break;
     case 2 :printf("enter the element to insert:");
             scanf("%d",&data);
             start=insertatempty(start,data);
             break;         
     case 3 :printf("enter the element to insert:");
             scanf("%d",&data);
             start=insertatend(start,data);
             break;                 
     case 4:printf("enter the element to insert:");
            scanf("%d",&data);
            start=insertafteranode(start,data,key);
            break;
     case 5:printf("enter the element to insert:");
            scanf("%d",&data);
            start=insertbeforeanode(start,data,key);
            break;       
     case 6 :printf("enter the element to insert:");
             scanf("%d",&data);
             printf("enter the position:");
             scanf("%d",&pos);
             start=insertatposition(start,data,pos);
             break;          
     case 7:printf("enter the element to delete:");
            scanf("%d",&key);
            delete(start,key);
            break; 
      case 8:traverse(start);
      		 break;
      case 9:printf("enter the element to search:");
             scanf("%d",&key);
      		 search(start,key);
      		 break;
      case 10:start=reverse(start);
      		  break;
      case 11:exit(0);
      default:printf("Enter valid choice");
      }
	}
}