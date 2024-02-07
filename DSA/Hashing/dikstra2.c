#include <stdio.h>
#include <limits.h>

#define V 10 // Number of vertices in the graph

int minDistance(int distances[], int processed[]) {
    int min = INT_MAX, min_index;
    for (int vertex = 0; vertex < V; vertex++) {
        if (processed[vertex] == 0 && distances[vertex] <= min) {
            min = distances[vertex];
            min_index = vertex;
        }
    }
    return min_index;
}

void printShortestDistances(int distances[]) {
    printf("Vertex \t Shortest Distance from Source\n");
    for (int i = 0; i < V; i++)
        printf("%c \t %d\n", 'A' + i, distances[i]);
}

void dijkstra(int graph[V][V], int source) {
    int distances[V]; // The output array. distances[i] will hold the shortest distance from source to vertex i
    int processed[V]; // processed[i] will be true if vertex i is included in the shortest path tree or shortest distance from source to i is finalized

    for (int i = 0; i < V; i++) {
        distances[i] = INT_MAX;
        processed[i] = 0;
    }

    distances[source] = 0;

    for (int count = 0; count < V - 1; count++) {
        int current_vertex = minDistance(distances, processed);
        processed[current_vertex] = 1;

        for (int vertex = 0; vertex < V; vertex++) {
            if (!processed[vertex] && graph[current_vertex][vertex] && distances[current_vertex] != INT_MAX && distances[current_vertex] + graph[current_vertex][vertex] < distances[vertex]) {
                distances[vertex] = distances[current_vertex] + graph[current_vertex][vertex];
            }
        }
    }

    printShortestDistances(distances);
}

int main() {
    int graph[V][V];

    printf("Enter the adjacency matrix of the graph (%d x %d):\n", V, V);
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    dijkstra(graph, 0); // Find shortest path from vertex 'A' (0)
    return 0;
}
