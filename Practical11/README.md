## 1. Aim
To implement the Floyd–Warshall algorithm in C++ to find the shortest distances between all pairs of vertices in a weighted graph.

## 2. Problem Statement
Given a weighted directed graph represented by an adjacency matrix, find the shortest path distance between every pair of vertices using the Floyd–Warshall algorithm.

## 3. Algorithm
1. Start.
2. Read the number of vertices and the adjacency matrix.
3. Represent missing edges using infinity.
4. Consider each vertex as an intermediate vertex.
5. For every pair of vertices `i` and `j`, check whether the path through vertex `k` is shorter than the current path.
6. Update the distance using `dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])`.
7. Repeat for every intermediate vertex.
8. Check for negative-weight cycles.
9. Display the shortest-distance matrix.
10. Stop.

## 4. Time and Space Complexities
- **Time Complexity:** O(V³)
- **Auxiliary Space Complexity:** O(1), excluding the distance matrix.
- **Total Space Complexity:** O(V²)

Here, V represents the number of vertices.

## 5. Programming Language
C++

## 6. Author
**Name:** Pantham Mani Sai
