#include<stdio.h>
#define V 5
int visited[5]={0};

void BFS(int graph[V][V],int src)
{
    int q[V],front,rear;
    front=rear=-1;

    //int visited[V] = {0};
    q[++rear]=src;
    visited[src]=1;

    while(front!=rear)
    {
        int cur=q[++front];
        printf("%d ",cur);

        for(int i=0;i<V;i++)
        {
            if(graph[cur][i] && !visited[i])
            {
                q[++rear]=i;
                visited[i]=1;
            }

        }
    }
}
int main()
{
       int graph[V][V]={
                {0,1,1,0,1},
                {1,0,1,1,0},
                {1,1,0,1,1},
                {0,1,1,0,0},
                {1,0,1,0,0}

    };
    BFS(graph,4);
    return 0;

}
