
#include <iostream>
#include <vector>
using namespace std;

const int INF = 1000000000;

// Floyd-Warshall Algorithm
void floydWarshall(vector<vector<int>>& dist, int n) {
    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (dist[i][k] != INF &&
                    dist[k][j] != INF) {

                    dist[i][j] = min(
                        dist[i][j],
                        dist[i][k] + dist[k][j]
                    );
                }
            }
        }
    }

    // Check for negative-weight cycles
    for (int i = 0; i < n; i++) {
        if (dist[i][i] < 0) {
            cout << "Graph contains a negative-weight cycle.\n";
            return;
        }
    }

    cout << "\nAll-Pairs Shortest Distance Matrix:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (dist[i][j] == INF)
                cout << "INF ";
            else
                cout << dist[i][j] << " ";
        }
        cout << '\n';
    }
}

int main() {
    int n;

    cout << "Enter number of vertices: ";
    cin >> n;

    if (n <= 0) {
        cout << "Invalid number of vertices.\n";
        return 0;
    }

    vector<vector<int>> dist(n, vector<int>(n));

    cout << "Enter the adjacency matrix "
         << "(-1 for no edge, 0 on diagonal):\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int weight;
            cin >> weight;

            if (i == j && weight != 0) {
                cout << "Diagonal elements must be 0.\n";
                return 0;
            }

            if (weight == -1)
                dist[i][j] = INF;
            else
                dist[i][j] = weight;
        }
    }

    floydWarshall(dist, n);

    return 0;
}
