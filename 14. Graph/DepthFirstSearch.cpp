#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// Function to perform Depth-First Search on a graph
void dfs(vector<vector<int>>& graph, int startNode) {
    int numNodes = graph.size();
    vector<bool> visited(numNodes, false);
    stack<int> st;

    // Mark the startNode as visited and push it to the stack
    visited[startNode] = true;
    st.push(startNode);

    while (!st.empty()) {
        int currentNode = st.top();
        st.pop();
        cout << currentNode << " ";

        // Explore all neighbors of the current node
        for (int neighbor : graph[currentNode]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                st.push(neighbor);
            }
        }
    }
}

int main() {
    int numNodes, numEdges;
    cout << "Enter the number of nodes and edges: ";
    cin >> numNodes >> numEdges;

    // Create an adjacency list to represent the graph
    vector<vector<int>> graph(numNodes);

    cout << "Enter the edges (node1 node2):" << endl;
    for (int i = 0; i < numEdges; ++i) {
        int node1, node2;
        cin >> node1 >> node2;
        // Adding edges to the graph (undirected graph)
        graph[node1].push_back(node2);
        graph[node2].push_back(node1);
    }

    int startNode;
    cout << "Enter the starting node for DFS: ";
    cin >> startNode;

    cout << "DFS traversal starting from node " << startNode << ": ";
    dfs(graph, startNode);

    return 0;
}
