#include <iostream>
#include <queue>
using namespace std;

void BFS(int G[][100], int n, int s) {
    bool visited[100] = {false}; // visited array
    queue<int> Q;

    Q.push(s);
    visited[s] = true;

    bool first = true; // শুধু প্রিন্ট ফরম্যাট ঠিক রাখার জন্য

    while (!Q.empty()) {
        int v = Q.front();
        Q.pop();

        if (first) {
            cout << v;
            first = false;
        } else {
            cout << " " << v;
        }

        // process all neighbours of v
        for (int w = 0; w < n; w++) {
            if (G[v][w] == 1 && !visited[w]) {
                Q.push(w);
                visited[w] = true;
            }
        }
    }
}

int main() {
    int n, e;
    cout << "Enter number of vertices: ";
    cin >> n;
    cout << "Enter number of edges: ";
    cin >> e;

    int G[100][100] = {0}; // adjacency matrix (size fixed max 100)

    cout << "Enter edges (u v):\n";
    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        G[u][v] = 1;
        G[v][u] = 1; // যদি graph undirected হয়
    }

    int source;
    cout << "Enter source node: ";
    cin >> source;

    cout << "BFS traversal: ";
    BFS(G, n, source);

    return 0;
}