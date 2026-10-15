## 1. Aim
To implement Kruskal’s algorithm in C++ to find the Minimum Spanning Tree (MST) of a connected, weighted, undirected graph.

## 2. Problem Statement
Given a connected, weighted, undirected graph consisting of vertices and edges, find a Minimum Spanning Tree that connects all vertices with the minimum possible total edge weight without forming any cycles.

## 3. Algorithm
1. Start.
2. Read the number of vertices and edges.
3. Store all edges along with their weights.
4. Sort all edges in ascending order of their weights.
5. Initialize a Disjoint Set Union (DSU) structure for all vertices.
6. Select the edge with the smallest weight.
7. Check whether its endpoints belong to different sets.
8. If they belong to different sets, include the edge in the MST and merge their sets.
9. If they belong to the same set, discard the edge to avoid a cycle.
10. Repeat until \(V-1\) edges have been selected or all edges have been examined.
11. Display the MST edges and their total weight.
12. Stop.

## 4. Time and Space Complexities

- **Time Complexity:** \(O(E\log E)\), where \(E\) is the number of edges. Sorting the edges dominates the running time.
- **Auxiliary Space Complexity:** \(O(V)\) for the Disjoint Set Union (DSU) data structure.
- **Total Space Complexity:** \(O(V+E)\), including storage for vertices and edges.

Here, \(V\) represents the number of vertices and \(E\) represents the number of edges.

## 5. Programming Language
C++

## 6. Author
**Name:** Pantham Mani Sai
