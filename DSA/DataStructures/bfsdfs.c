#include <stdio.h>
#define max_cities 100
int visited[max_cities];

void DFS(int city,int n,int graph[max_cities][max_cities])
{
    printf("%d",city);
    visited[city]=1;
    for(int i=0;i<n;i++)
    {
        if(graph[city][i]==1&&!visited[i])
        {
            DFS(i,n,graph);
        }
    }
}
void BFS(int start,int n,int graph[max_cities][max_cities])
{
    int queue[max_cities],front=0,rear=0;
    printf("%d",start);
    visited[start]=1;
    queue[rear++]=start;
    while(front<rear)
    {
        int current=queue[front++];
        for(int i=0;i<n;i++)
        {
            if(graph[current][i]==1&&visited[i]!=1)
            {
                printf("%d",i);
                visited[i]=1;
                queue[rear++]=i;
            }
        }
    }
}
void main()
{
    int n,start,graph[max_cities][max_cities];
    printf("Enter no of cities:");
    scanf("%d",&n);
    printf("Enter adjacency matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&graph[i][j]);
        }
    }
    printf("Enter starting city:");
    scanf("%d",&start);
    for(int i=0;i<max_cities;i++)
    {
        visited[i]=0;
    }
    printf("DFS travesal:\n");
    DFS(start,n,graph);
    printf("\n");
    for(int i=0;i<max_cities;i++)
    {
        visited[i]=0;
    }
    printf("BFS travesal:\n");
    BFS(start,n,graph);
    printf("\n");
}