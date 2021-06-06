// C++ program for the above approach
#include "bits/stdc++.h"
using namespace std;

// Function to assign values to nodes
// of the tree s.t. sum of values of
// nodes of path between any 2 nodes
// is not divisible by length of path
void assignValues(int Edges[][2], int n)
{
	// Stores the adjacency list
	vector <int> tree[n + 1];
	
	// Create a adjacency list
	for(int i = 0; i < n - 1; i++) {
	
	int u = Edges[i][0];
	int v = Edges[i][1];
	tree[u].push_back(v);
	tree[v].push_back(u);
	}

	// Stores whether node is
	// visited or not
	vector <bool> visited(n + 1, false);

	// Stores the node values
	vector <int> answer(n + 1);

	// Variable used to assign values to
	// the nodes alternatively to the
	// parent child
	int K = 1;

	// Declare a queue
	queue <int> q;

	// Push the 1st node
	q.push(1);

	// Assign K value to this node
	answer[1] = K;

	while (!q.empty()) {

		// Dequeue the node
		int node = q.front();
		q.pop();

		// Mark it as visited
		visited[node] = true;

		// Upgrade the value of K
		K = ((answer[node] == 1) ? 2 : 1);

		// Assign K to the child nodes
		for (auto child : tree[node]) {

			// If the child is unvisited
			if (!visited[child]) {

				// Enqueue the child
				q.push(child);

				// Assign K to the child
				answer[child] = K;
			}
		}
	}
	
	// Print the value assigned to
	// the nodes
	for (int i = 1; i <= n; i++) {
		cout << answer[i] << " ";
	}
}

// Driver Code
int main()
{
	int N = 11;
	int Edges[][2] = {{1, 2}, {1, 3}, {1, 4},
					{1, 5}, {2, 6}, {2, 10},
					{10, 11}, {3, 7}, {4, 8},
					{5, 9}};

	// Function Call
	assignValues(Edges, N);

	return 0;
}
