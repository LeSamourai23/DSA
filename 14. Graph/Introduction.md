## 1. Vertex (Node):
A vertex represents a single entity in the graph. It can be anything, such as a person, a place, an object, or an abstract concept. Vertices are usually represented by circles or points in visualizations.

Example: In a social network graph, each user account can be represented as a vertex.

## 2. Edge (Link):
An edge represents a connection between two vertices. It shows the relationship between the entities. Edges are usually represented by lines in visualizations.

Example: In a friendship graph, an edge between two user vertices signifies that they are friends.

## 3. Weight:
Some graphs may have weights assigned to their edges, indicating a value or cost associated with the connection between two vertices. Weighted edges are used in applications like network routing or shortest path algorithms.

Example: In a transportation network graph, the weight of an edge could represent the distance between two locations.

## 4. Directed vs. Undirected:
In an undirected graph, edges have no direction, meaning they represent a bi-directional relationship between vertices. In a directed graph, edges have a specific direction from one vertex to another.

Example: In an undirected graph representing a road network, the edges between locations do not have a specific direction. In contrast, in a directed graph representing followers on a social media platform, the edges point from one user to their follower.

## 5. Degree:
The degree of a vertex is the number of edges connected to it. In a directed graph, the degree is further classified into the **in-degree** (incoming edges) and **out-degree** (outgoing edges).

Example: In a movie recommendation graph, the degree of a movie vertex represents the number of other movies it is connected to through shared actors or genres.

## 6. Path:
A path is a sequence of vertices where each consecutive pair is connected by an edge. Paths can be simple (no repeated vertices) or allow revisiting vertices.

Example: In a flight route graph, a path from city A to city C might be A -> B -> C, representing a flight with a layover in city B.

## 7. Cycle:
A cycle is a path where the first and last vertices are the same, forming a closed loop. Cycles can be present in directed and undirected graphs.

Example: In a bank transaction graph, a cycle would represent a sequence of transactions that eventually brings the account balance back to its initial value.

## 8. Connected Graph:
A connected graph is one where there is a path between every pair of vertices. In other words, all vertices are reachable from any vertex.

Example: In a social network graph, if every user can be reached by following friendships, the graph is connected.

## 9. Disconnected Graph:
A disconnected graph has two or more separate components that have no direct connection between them.

Example: A graph representing separate islands, with no edges connecting them, is a disconnected graph.

These conventions and terminologies are essential for understanding and working with graph data structures, as they help describe the relationships and properties of the entities represented in the graph.

## 10. Convention:
n-> Nodes & m-> edges  (The first line)
The next set of lines represent edges (m no. of lines)
**Example**=> 5 6 
              2 1
              1 3
              2 4
              3 4
              2 5
              4 5

Here, n= 5 and m= 6. Rest represent edges (like 2 is connected to 1)

## 11. Methods to store
1. **Matrix method**:
   Space Complexity: O(N^2)
   Time Complexity: O(N)

2. **Vector Method**:
   Space Complexity: O(2N)
   Time Complexity: O(N)