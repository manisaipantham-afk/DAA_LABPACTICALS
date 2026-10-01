## Aim

To implement a graph using an adjacency list and perform graph searching using:

- Depth First Search (DFS)
- Breadth First Search (BFS)

## Algorithms

### Algorithm 1: Depth First Search (DFS)

1. Start from the given starting vertex.
2. Mark the current vertex as visited.
3. Display the current vertex.
4. Visit each adjacent vertex that has not been visited.
5. Recursively repeat the process for the unvisited adjacent vertices.
6. Continue until all reachable vertices are visited.

### Algorithm 2: Breadth First Search (BFS)

1. Start from the given starting vertex.
2. Create an empty queue.
3. Mark the starting vertex as visited and insert it into the queue.
4. Remove the front vertex from the queue.
5. Display the removed vertex.
6. Visit all unvisited adjacent vertices.
7. Mark each visited vertex and insert it into the queue.
8. Repeat until the queue becomes empty.

## Example

### Input

```text
Enter number of vertices: 5
Enter number of edges: 5

Enter edges (u v):
0 1
0 2
1 3
1 4
2 4

Enter starting vertex: 0
```

### Graph

```text
       0
      / \
     1   2
    / \   \
   3   4---+
```

### Output

```text
DFS Traversal: 0 1 3 4 2
BFS Traversal: 0 1 2 3 4
```
## Technologies Used

- Language: C++
- Compiler: GCC / G++
- Data Structures:
  - Graph
  - Vector
  - Queue

## Time Complexity

### DFS

```text
O(V + E)
```

### BFS

```text
O(V + E)
```

Where:

- `V` = Number of vertices
- `E` = Number of edges

## Space Complexity

### DFS

```text
O(V)
```

The space is used for the visited array and recursion stack.

### BFS

```text
O(V)
```

The space is used for the visited array and queue.

## Author

**Pantham Mani Sai**
