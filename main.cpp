#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int src, dest;
};

class Graph{
    public:
    vector<vector<int>> adjacentList;
    Graph(vector<Edge> const &edgeList, int N){
        adjacentList.resize(N);

        for (auto &edge: edgeList) {
            adjacentList[edge.src].push_back(edge.dest);
        }
    }
};

int DFS(Graph const &graph, int v, vector<bool> &visited, vector<int> &start, vector<int> &finish, int &time){
    start[v] = ++time; // Setting the starting time of vertex v
    visited[v] = true; //Marked node v as visited

    for (int i: graph.adjacentList[v]){
        if (!visited[i]){
            DFS(graph, i, visited, start, finish, time);
        }
    }

    finish[v] = ++time; // set vertex v finish time

}

bool sortByDeparture(const vector<int> &v1, const vector<int> &v2){
    return v[1] < v2[1];
}

void TopologicalSort(){
    vector<vector<int> > array
}

int main(){
    vector<Edge> edgeList = {
        {0, 3}, {1, 3}, {2, 3}, {3, 4}, {3, 5}, {4, 8}, {5, 7} , {6, 5}, {7, 8}
    };
    int N = 9;
    Graph graph(edgeList, N);
    vector<int> start(N);
    vector<int> finish(N);
    vector<bool> visited(N);
    int time = 0;

    // Performing DFS traversal to calculate finish time of all unvisited nodes.
    for (int i = 0; i < N; i++){
        if (!visited[i]){
            DFS(graph, i, visited, start, finish, time);
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << "Vertex " << i << " (" << start[i] << ", " << finish[i] << ")" << endl;
        vector<Edge>
    }
    return 0;
}