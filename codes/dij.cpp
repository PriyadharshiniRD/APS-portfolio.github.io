#include <iostream>
#include <vector>
using namespace std;

const int INF = INT_MAX;
const int V = 8; 


int selectMinVertex(vector<int>& dist, vector<bool>& processed) {
    int min = INF, minIndex;

    for (int v = 0; v < V; v++) {
        if (!processed[v] && dist[v] <= min) {
            min = dist[v];
            minIndex = v;
        }
    }

    return minIndex;
}


void printDistances(const vector<int>& dist) {
    cout << "Vertex \t Distance from Source" << endl;
    for (int i = 0; i < V; i++) {
        cout << i << " \t\t\t\t" << dist[i] << endl;
    }
}


void dij(const int graph[V][V], int src) 
{
    vector<int> dist(V, INF);  
    vector<bool> processed(V, false); 

    dist[src] = 0; 
    // Finding shortest path
    for (int count = 0; count < V - 1; count++) 
    {
        int u = selectMinVertex(dist, processed); 
        processed[u] = true; 
        for (int v = 0; v < V; v++) {
            if (!processed[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    // Print the constructed distance array
    printDistances(dist);
}

int main() 
{
    int graph[V][V] = { 
        {  4, 0, 0, 0, 0, 0, 8, 0 },
        {  0, 8, 0, 0, 0, 0, 11, 0 },
        {  8, 0, 7, 0, 4, 0, 0, 2 },
        { 0, 7, 0, 9, 14, 0, 0, 0 },
        {  0, 0, 9, 0, 10, 0, 0, 0 },
        {  0, 4, 14, 10, 0, 2, 0, 0 },
        {  0, 0, 0, 0, 2, 0, 1, 6 },
        {  11, 0, 0, 0, 0, 1, 0, 7 }
         
    };

    
   dij(graph, 0);

    return 0;
}
