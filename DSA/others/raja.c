#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start = NULL;
struct node *insertatemptylist(struct node *start, int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->info = item;
    temp->link = NULL;
    start = temp;
    return start;
}
struct node *insertatbegin(struct node *start, int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->info = item;
    temp->link = start;
    start = temp;
    return start;
}
struct node *insertatend(struct node *start, int item)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node)), *p;
    temp->info = item;
    p = start;
    while (p->link != NULL)
        p = p->link;
    temp->link = NULL;
    p->link = temp;
    return start;
}
struct node *insertafternode(struct node *start, int item, int key)
{
    struct node *temp, *p;
    p = start;
    while (p != NULL)
    {
        if (p->info == key)
        {
            temp = (struct node *)malloc(sizeof(struct node));
            temp->info = item;
            temp->link = p->link;
            p->link = temp;
            return start;
        }
        p = p->link;
    }
    printf("%d is not in list", key);
    return start;
}
struct node *insertbeforenode(struct node *start, int item, int key)
{
    struct node *temp, *p;
    if (start == NULL)
    {
        printf("list is EMPTY");
        return start;
    }
    if (start->info == key)
    {
        insertatbegin(start, item);
    }
    else
    {
        p = start;
        while (p->link != NULL)
        {
            if (p->link->info == key)
            {
                temp = (struct node *)malloc(sizeof(struct node));
                temp->info = item;
                temp->link = p->link;
                p->link = temp;
                return start;
            }
            p = p->link;
        }
        printf("%d is not in list", key);
        return start;
    }
}
struct node *insertatanyposition(struct node *start, int item, int pos)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node)), *p;
    temp->info = item;
    if (start == NULL)
    {
        printf("list is EMPTY");
        return start;
    }
    if (pos == 1)
    {
        insertatbegin(start, item);
    }
    else
    {
        p = start;
        for (int i = 1; i < pos - 1 && p->link != NULL; i++)
            p = p->link;
        if (p->link == NULL)
        {
            printf("list having less nodes than given position");
            return start;
        }
        else
        {
            temp->link = p->link;
            p->link = temp;
            return start;
        }
    }
}
struct node *delete(struct node *start, int key)
{
    struct node *temp, *p;
    if (start == NULL)
    {
        printf("list is EMPTY");
        return start;
    }
    if (start->info == key)
    {
        temp = start;
        start = start->link;
        printf("deleted node is %d", temp->info);
        free(temp);
        return start;
    }
    p = start;
    while (p->link != NULL)
    {
        if (p->link->info == key)
        {
            temp = p->link;
            p->link = temp->link;
            printf("deleted node is %d", temp->info);
            free(temp);
            return start;
        }
        p = p->link;
    }
    printf("key need to delete is not found");
    return start;
}
void traverse(struct node *start)
{
    struct node *p;
    if (start == NULL)
    {
        printf("list is EMPTY");
        return;
    }
    p = start;
    while (p != NULL)
    {
        printf("%d\t", p->info);
        p = p->link;
    }
}
void search(struct node *start, int key)
{
    struct node *p;
    p = start;
    if (start == NULL)
    {
        printf("list is empty");
        return;
    }
    while (p != NULL)
    {
        if (p->info == key)
        {
            printf("key found at %d", p->info);
            return;
        }
        p = p->link;
    }
    printf("the key is not present");
    return;
}
struct node *reverse(struct node *start)
{
    struct node *ptr = start, *next = NULL, *prev = NULL;
    while (ptr != NULL)
    {
        next = ptr->link;
        ptr->link = prev;
        prev = ptr;
        ptr = next;
    }
    start = prev;
    return start;
}
int main()
{
    int choice, item, key, pos;
    printf("linked list operators are:\n1. insert at empty list\n2. insert at begin\n3. insert at end\n4. insert before a node \n5. insert after a node\n6. insert at any position\n7. delete a node\n8. traverse the list\n9. search a node in list\n10. reverse the node\n11. exit\n");
    while (1)
    {
        printf("enter ur choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the data to insert\t");
            scanf("%d", &item);
            start = insertatemptylist(start, item);
            break;
        case 2:
            printf("enter the data to insert:");
            scanf("%d", &item);
            start = insertatbegin(start, item);
            break;
        case 3:
            printf("enter the data to insert:");
            scanf("%d", &item);
            start = insertatend(start, item);
            break;
        case 4:
            printf("enter the data to insert:");
            scanf("%d", &item);
            printf("the node before it should insert:");
            scanf("%d", &key);
            start = insertbeforenode(start, item, key);
            break;
        case 5:
            printf("enter the data to insert:");
            scanf("%d", &item);
            printf("the node after it should insert:");
            scanf("%d", &key);
            start = insertafternode(start, item, key);
            break;
        case 6:
            printf("enter the data to insert:");
            scanf("%d", &item);
            printf("the position at it should insert:");
            scanf("%d", &pos);
            start = insertatanyposition(start, item, pos);
            break;
        case 7:
            printf("enter the element to delete:");
            scanf("%d", &key);
            delete (start, key);
            break;
        case 8:
            traverse(start);
            break;
        case 9:
            printf("enter the element to search:");
            scanf("%d", &key);
            search(start, key);
            break;
        case 10:
            start = reverse(start);
            break;
        case 11:
            exit(0);

        default:
            printf("enter valid choice");
            break;
        }
    }
    return 0;
}