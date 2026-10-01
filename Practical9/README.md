## Aim

To implement **Prim's Algorithm** to find the **Minimum Spanning Tree (MST)** of a connected weighted graph.

## Algorithm

1. Start with any vertex of the graph.
2. Mark the starting vertex as selected.
3. Find the minimum-weight edge that connects a selected vertex to an unselected vertex.
4. Add this edge and the new vertex to the Minimum Spanning Tree.
5. Mark the new vertex as selected.
6. Repeat the process until all vertices are selected.
7. Calculate the total weight of all selected edges.

## Example

Consider the following weighted graph:

```text
        2
   0 -------- 1
   | \        |
  6|  \3      |5
   |   \      |
   2 -------- 3
        4
```

### Input

```text
Enter number of vertices: 4

Enter the adjacency matrix:
0 2 6 3
2 0 0 5
6 0 0 4
3 5 4 0
```

### Output

```text
Edges in Minimum Spanning Tree:
Edge    Weight
0 - 1   2
0 - 2   6
0 - 3   3

Total Weight of MST = 11
```

## Time Complexity

```text
O(V²)
```

Where:

- `V` = Number of vertices

The program uses an adjacency matrix and searches for the minimum key vertex in each iteration.

## Space Complexity

```text
O(V²)
```

The adjacency matrix requires `O(V²)` space.

## Author

**Pantham Mani Sai**
