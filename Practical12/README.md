
# Travelling Salesman Problem (TSP)

## Aim
To implement the Travelling Salesman Problem using Dynamic
Programming with Bitmasking to find the minimum cost of visiting
every city exactly once and returning to the starting city.

## Algorithm
1. Start from city 1.
2. Mark city 1 as visited using a bitmask.
3. Check all unvisited cities.
4. Calculate the travel cost for each possible next city.
5. Use Dynamic Programming (memoization) to store and reuse results.
6. When all cities are visited, add the cost of returning to city 1.
7. Find the minimum total cost.
8. Display the minimum cost and optimal tour.

## Example

### Input
Number of cities: 4

Cost matrix:
0  10  15  20
10  0  35  25
15  35  0  30
20  25  30  0

### Output
Minimum travelling cost: 80

Optimal tour: 1 -> 2 -> 4 -> 3 -> 1

### Explanation
The tour visits all four cities exactly once and returns
to city 1.

Total cost = 10 + 25 + 30 + 15 = 80.

## Time Complexity
O(n^2 * 2^n)

## Space Complexity
O(n * 2^n)

Here, n represents the number of cities.
## Author
**Manisai Pantham**


