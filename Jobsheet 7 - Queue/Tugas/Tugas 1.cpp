//created by Radhia Aulia Nisa 23343049

#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

// Mendefinisikan struktur untuk simpul dalam graf
typedef struct Node {
    int vertex;
    struct Node* next;
} Node;

// Mendefinisikan struktur untuk representasi graf menggunakan linked list
typedef struct Graph {
    int numVertices;
    Node* adjLists[MAX_VERTICES];
    int visited[MAX_VERTICES];
} Graph;

// Fungsi untuk membuat simpul baru dalam graf
Node* createNode(int v) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Fungsi untuk membuat graf kosong dengan sejumlah verteks
Graph* createGraph(int vertices) {
    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->numVertices = vertices;

    for (int i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
        graph->visited[i] = 0;
    }

    return graph;
}

// Fungsi untuk menambahkan tepian ke graf
void addEdge(Graph* graph, int src, int dest) {
    // Menambahkan tepian dari src ke dest
    Node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    // Karena graf tidak berarah, tambahkan tepian dari dest ke src juga
    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

// Fungsi untuk mencetak hasil pencarian jalur
void printPath(int path[], int v) {
    if (path[v] == -1) {
        printf("%d ", v);
        return;
    }
    printPath(path, path[v]);
    printf("%d ", v);
}

// Algoritma BFS untuk mencari jalur dari simpul awal ke simpul tujuan
void BFS(Graph* graph, int startVertex, int endVertex) {
    int queue[MAX_VERTICES];
    int front = 0, rear = 0;
    int visited[MAX_VERTICES];
    int path[MAX_VERTICES];

    for (int i = 0; i < graph->numVertices; i++) {
        visited[i] = 0;
        path[i] = -1;
    }

    visited[startVertex] = 1;
    queue[rear++] = startVertex;

    while (front < rear) {
        int currentVertex = queue[front++];
        Node* temp = graph->adjLists[currentVertex];

        while (temp) {
            int adjVertex = temp->vertex;
            if (!visited[adjVertex]) {
                visited[adjVertex] = 1;
                queue[rear++] = adjVertex;
                path[adjVertex] = currentVertex;
            }
            temp = temp->next;
        }
    }

    printf("Jalur dari %d ke %d: ", startVertex, endVertex);
    printPath(path, endVertex);
}

int main() {
    Graph* graph = createGraph(6);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 4);
    addEdge(graph, 3, 4);
    addEdge(graph, 3, 5);
    addEdge(graph, 4, 5);

    int startVertex = 0;
    int endVertex = 5;

    BFS(graph, startVertex, endVertex);

    return 0;
}

