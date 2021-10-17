//Find Minimum Cost Spanning Tree for a undirected graph using Kruskal's algorithm
#include <stdio.h>
#define INFINITY 99999
#define MAX 100

int noOfVertices, graph[MAX][MAX] = { [0 ... MAX-1] = {[0 ... MAX-1] = INFINITY}};

void readWeightedGraph()
{
    int noOfEdges, startv, endv, weight;
    printf("Enter number of graph Vertices & Edges: ");
    scanf("%d %d", &noOfVertices, &noOfEdges);
    for (int i = 1; i <= noOfEdges; i++)
    {
        graph[i][i] = 0;
        printf("Enter start, end vertex and weight of edge %d: ", i);
        scanf("%d %d %d", &startv, &endv, &weight);
        graph[startv][endv] = graph[endv][startv] = weight;
    }
}

void printSpanningTree()
{
    int v1, v2, treeEdgeCount = 0, id[MAX], cost = 0;

    for(int i = 1; i <= noOfVertices; i++) //reset id array
    id[i] = i;
    while(treeEdgeCount < noOfVertices - 1)
    {
        //Find min. edge
        int minedge = INFINITY;
        for(int i = 1; i <= noOfVertices; i++)
        for(int j = i + 1; j <= noOfVertices; j++)
        if(minedge > graph[i][j])
        {
            minedge = graph[i][j];
            v1 = i;
            v2 = j;
        }
    if(id[v1] != id[v2])
    {
        int v2Id = id[v2];
        for(int i = 1; i <= noOfVertices; i++)
        if(id[i] == v2Id)
        id[i] = id[v1];
        printf(" Edge %d : [ %d --- %d ] Cost: %d\n", ++treeEdgeCount, v1, v2, graph[v1][v2]);
        cost += graph[v1][v2];
    }
    graph[v1][v2] = INFINITY;
    }
    printf("\nCost of Minimum Spanning Tree: %d units\n", cost);
}

int main()
{
    readWeightedGraph();
    printf("\nSpanning Tree using Kruskal's algorithm:\n");
    printSpanningTree();
    return 0;
}
