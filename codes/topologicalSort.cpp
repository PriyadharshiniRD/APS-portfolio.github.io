#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>
#include <stdexcept>

using namespace std;

vector<string> topologicalSort(unordered_map<string, vector<string>>& digraph) {
    unordered_map<string, int> indegrees;
    for (const auto& pair : digraph) {
        indegrees[pair.first] = 0;
    }
    for (const auto& pair : digraph) {
        const string& node = pair.first;
        for (const string& neighbor : pair.second) {
            indegrees[neighbor]++;
        }
    }

    // Track nodes with no incoming edges
    queue<string> nodesWithNoIncomingEdges;
    for (const auto& pair : indegrees) {
        if (pair.second == 0) {
            nodesWithNoIncomingEdges.push(pair.first);
        }
    }

    // Initially, no nodes in our ordering
    vector<string> topologicalOrdering;

    while (!nodesWithNoIncomingEdges.empty()) {
        string node = nodesWithNoIncomingEdges.front();
        nodesWithNoIncomingEdges.pop();
        topologicalOrdering.push_back(node);

        // Decrement the indegree of that node's neighbors
        for (const string& neighbor : digraph[node]) {
            indegrees[neighbor]--;
            if (indegrees[neighbor] == 0) {
                nodesWithNoIncomingEdges.push(neighbor);
            }
        }
    }

   
    if (topologicalOrdering.size() != digraph.size()) {
        throw invalid_argument("Graph has a cycle! No topological ordering exists.");
    }

    return topologicalOrdering;
}

int main() {
    unordered_map<string, vector<string>> digraph = {
        {"A", {"C"}},
        {"B", {"C", "D"}},
        {"C", {"E"}},
        {"D", {"F"}},
        {"E", {"H", "F"}},
        {"F", {"G"}},
        {"G", {}},
        {"H", {}}
    };

    try {
        vector<string> result = topologicalSort(digraph);
        cout << "Topological Ordering: ";
        for (const string& node : result) {
            cout << node << " ";
        }
        cout << endl;
    } catch (const exception& e) {
        cout << e.what() << endl;
    }

    return 0;
}
