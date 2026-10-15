
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Structure to represent an edge
struct Edge {
    int u, v, weight;
};

// Disjoint Set Union (DSU)
class DSU {
    vector<int> parent, rank;

public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);

        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int findParent(int node) {
        if (parent[node] == node)
            return node;

        return parent[node] = findParent(parent[node]);
    }

    void unionSets(int u, int v) {
        int pu = findParent(u);
        int pv = findParent(v);

        if (pu == pv)
            return;

        if (rank[pu] < rank[pv]) {
            parent[pu] = pv;
        } else if (rank[pu] > rank[pv]) {
            parent[pv] = pu;
        } else {
            parent[pv] = pu;
            rank[pu]++;
        }
    }
};

// Kruskal's algorithm
void kruskal(int n, vector<Edge>& edges) {
    sort(edges.begin(), edges.end(),
         [](Edge a, Edge b) {
             return a.weight < b.weight;
         });

    DSU dsu(n);
    int totalWeight = 0;
    int edgesSelected = 0;

    cout << "\nEdges in Minimum Spanning Tree:\n";

    for (Edge e : edges) {
        if (dsu.findParent(e.u) != dsu.findParent(e.v)) {
            dsu.unionSets(e.u, e.v);

            cout << e.u << " - " << e.v
                 << " : " << e.weight << '\n';

            totalWeight += e.weight;
            edgesSelected++;

            if (edgesSelected == n - 1)
                break;
        }
    }

    if (edgesSelected != n - 1) {
        cout << "Graph is disconnected. MST does not exist "
             << "for all vertices.\n";
    } else {
        cout << "Total MST Weight: " << totalWeight << '\n';
    }
}

int main() {
    int n, m;

    cout << "Enter number of vertices and edges: ";
    cin >> n >> m;

    if (n <= 0 || m < 0) {
        cout << "Invalid input.\n";
        return 0;
    }

    vector<Edge> edges;

    cout << "Enter edges (u v weight), vertices numbered "
         << "from 0 to " << n - 1 << ":\n";

    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;

        if (u < 0 || u >= n || v < 0 || v >= n) {
            cout << "Invalid vertex number.\n";
            return 0;
        }

        edges.push_back({u, v, w});
    }

    kruskal(n, edges);

    return 0;
}
