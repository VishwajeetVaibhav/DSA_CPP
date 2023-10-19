#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int source;
    int destination;
    int weight;
};

class Graph {
private:
    int V; // number of vertices
    vector<Edge> edges; // vector of all edges
    
public:
    Graph(int V) : V(V) {}
    
    void addEdge(int source, int destination, int weight) {
        Edge edge = {source, destination, weight};
        edges.push_back(edge);
    }
    
    // find the parent of a vertex
    int find(int parent[], int i) {
        if (parent[i] == i) {
            return i;
        }
        return find(parent, parent[i]);
    }
    
    // union two subsets
    void Union(int parent[], int rank[], int x, int y) {
        int xroot = find(parent, x);
        int yroot = find(parent, y);
        
        if (rank[xroot] < rank[yroot]) {
            parent[xroot] = yroot;
        }
        else if (rank[xroot] > rank[yroot]) {
            parent[yroot] = xroot;
        }
        else {
            parent[yroot] = xroot;
            rank[xroot]++;
        }
    }
    
    // implementation of Kruskal's algorithm
    void KruskalMST() {
        // result vector to store MST
        vector<Edge> result;
        
        // sort all edges in increasing order of weight
        sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
            return a.weight < b.weight;
        });
        
        // allocate memory for parent and rank arrays
        int *parent = new int[V];
        int *rank = new int[V];
        
        // initialize all subsets as single element sets
        for (int i = 0; i < V; i++) {
            parent[i] = i;
            rank[i] = 0;
        }
        
        // iterate through all sorted edges
        for (auto edge : edges) {
            int x = find(parent, edge.source);
            int y = find(parent, edge.destination);
            
            // if including this edge does not form a cycle, add it to the result
            if (x != y) {
                result.push_back(edge);
                Union(parent, rank, x, y);
            }
        }
        
        // print the edges of the MST
        cout << "Minimum Spanning Tree:\n";
        for (auto edge : result) {
            cout << edge.source << " - " << edge.destination << " : " << edge.weight << endl;
        }
    }
};

int main() {
    int V = 6;
    Graph graph(V);
    
    // add edges to the graph
    graph.addEdge(0, 1, 4);
    graph.addEdge(0, 2, 3);
    graph.addEdge(1, 2, 1);
    graph.addEdge(1, 3, 2);
    graph.addEdge(2, 3, 4);
    graph.addEdge(3, 4, 2);
    graph.addEdge(4, 5, 6);
    
    // find the minimum spanning tree
    graph.KruskalMST();
    
    return 0;
}
