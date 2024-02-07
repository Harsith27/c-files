#include <stdio.h>
#include <limits.h>
#define max_vertices 10

void warshall(int graph[max_vertices][max_vertices],int v)
{
    int dist[max_vertices][max_vertices];
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            dist[i][j]=graph[i][j];
        }
    }
    for(int k=0;k<v;k++)
    {
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                if(dist[i][k]!=INT_MAX && dist[k][j]!=INT_MAX && dist[i][k]+dist[k][j]<dist[i][j])
                {
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            if(dist[i][j]==INT_MAX)
            printf("INF");
            else
            printf("%d ",dist[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int T;
    printf("Enter the no of test cases:\n");
    scanf("%d",&T);
    while(T--)
    {
        int v;
        printf("Enter the no of vertices:");
        scanf("%d",&v);
        int graph[max_vertices][max_vertices];
        printf("Enter the adjacency matrix:\n");
        for(int i=0;i<v;i++)
        {
            for(int j=0;j<v;j++)
            {
                scanf("%d",&graph[i][j]);
                if(graph[i][j]==0&&i!=j)
                {
                    graph[i][j]=INT_MAX;
                }
            }
        }
        printf("Shortest distances are:\n");
        warshall(graph,v);
    }
    return 0;
}