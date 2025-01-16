#include<stdio.h>
void main()
{
    int M[10][10],r,c,sumin,sumout,n,v,i;
    printf("How many vertices:");
    scanf("%d",&n);
    for(r=0;r<n;r++)
    for(c=0;c<n;c++)
    {
        M[r][c]=0;
        if(r!=c)
        {
            printf("is there an edge betven vertex %d & %d(1/0):",r+1,c+2);
            scanf("%d",& M[r][c]);
        }
    }
    printf("\n vertex \t indegree \t outdegree \t totaldegree \n");
    for(v=0;v<n;v++)
    {
        sumin=sumout=0;
        for(i=0;i<n;i++)
        {
            sumin=sumout+M[i][v];
            sumout=sumout+M[v][i];
        }
        printf("%d\t\t%d\t\t%d\t\t%d\n",v+1,sumin,sumout,sumin+sumout);
    }
}