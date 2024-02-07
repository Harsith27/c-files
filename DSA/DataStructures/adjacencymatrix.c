#include<stdio.h>
void main()
{
    int maxedges,n,i,src,dst,choice,j;
    printf("Enter no of vertices:");
    scanf("%d",&n);
    printf("Enter your choice \n1.undirected graph 2.directed graph\n");
    scanf("%d",&choice);
    if(choice==1)
    {
        maxedges=n*(n-1)/2;
    }
    else{
        maxedges=n*(n-1);
    }
    int adg[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            adg[i][j]=0;
        }    
    }
    for(i=0;i<maxedges;i++)
    {
        printf("enter source and destination:\n");
        scanf("%d %d",&src,&dst);
        if(src==-1&&dst==-1)
        {
            break;
        }
        else
        {
            adg[src][dst]=1;
            if(choice==1)
            {
                adg[dst][src]=1;    
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",adg[i][j]);
        }
        printf("\n");    
    }
}