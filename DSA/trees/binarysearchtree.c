#include<stdio.h>
#include<stdlib.h>
struct node
{
  struct node *lchild;
  int info;
  struct node *rchild;
};
struct node *root=NULL;
void insert(int ikey)
{
  struct node *temp,*par,*ptr;
  par=NULL;
  ptr=root;
  while(ptr!=NULL)
  {
     par=ptr;
     if(ikey<ptr->info)
       ptr=ptr->lchild;
     else if(ikey>ptr->info)
       ptr=ptr->rchild;
     else
     {
        printf("We cannot insert duplicate\n");
        return;
     }
  }
  temp=malloc(sizeof(struct node));
  temp->info=ikey;
  temp->lchild=temp->rchild=NULL;
  if(par==NULL)
    root=temp;
  else if(ikey<par->info)
    par->lchild=temp;
  else
    par->rchild=temp;
}
void inorder(struct node *temp)
{
   struct node *p=temp;
   if(p==NULL)
     return;
   inorder(p->lchild);
   printf("%d ",p->info);
   inorder(p->rchild);
}
void preorder(struct node *temp)
{
   struct node *p=temp;
   if(p==NULL)
     return;
   printf("%d ",p->info);
   preorder(p->lchild);
   preorder(p->rchild);
}
void postorder(struct node *temp)
{
   struct node *p=temp;
   if(p==NULL)
     return;
   postorder(p->lchild);
   postorder(p->rchild);
   printf("%d ",p->info);
}
void search(struct node *temp,int key)
{
  struct node *p=temp; 
  if(p==NULL)
  {
    printf("%d not found in the tree\n",key);
    return;
  }
  if(p->info==key) 
  {
    printf("%d found in the tree\n",key);
    return;
  }   
  if(key<p->info)
  {
     search(p->lchild,key);
     return;
  }
  else
  {
     search(p->rchild,key);
     return;
  }
}
int main()
{
  int choice,item;
  printf("Operations are:\n");
  printf("1.Insert\n2.inorder\n3.preorder\n4.postorder\n5.search\n6.Exit\n");
  while(1)
  {
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:printf("Enter the element to insert:");
              scanf("%d",&item);
              insert(item);
              break;
       case 2:inorder(root);
              printf("\n");
              break;
       case 3:preorder(root);
              printf("\n");
              break;
       case 4:postorder(root);
              printf("\n");
              break;
       case 5:printf("Enter the element to search:");
              scanf("%d",&item);
              search(root,item);
              break;
       case 6:exit(0);
       default:printf("Enter a valid choice\n");
    }
  }
}