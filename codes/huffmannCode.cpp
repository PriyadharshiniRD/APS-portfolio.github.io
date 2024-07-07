// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Node {
public:
    int data;
    Node *left, *right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
    Node(int data, Node *left, Node *right) {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

struct Compare {
    bool operator()(Node *n1, Node *n2) {
        return n1->data > n2->data;
    }
};

class Solution {
public:
    void traverse(Node *root, string code, vector<string> &result) {
        if (!root->left && !root->right) {
            result.push_back(code);
            return;
        }
        
        if (root->left) {
            traverse(root->left, code + "0", result);
        }
        if (root->right) {
            traverse(root->right, code + "1", result);
        }
    }
    
    vector<string> huffmanCodes(string S, vector<int> frequencies, int N) {
        priority_queue<Node*, vector<Node*>, Compare> pq;
        vector<string> result;

        // Create initial nodes and add to priority queue
        for (int i = 0; i < N; i++) {
            pq.push(new Node(frequencies[i]));
        }
        
        // Build the Huffman Tree
        while (pq.size() > 1) {
            Node *firstMin = pq.top(); pq.pop();
            Node *secondMin = pq.top(); pq.pop();
            pq.push(new Node(firstMin->data + secondMin->data, firstMin, secondMin));
        }

        // Generate Huffman codes by traversing the tree
        traverse(pq.top(), "", result);
        return result;
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        int N = S.length();
        vector<int> frequencies(N);
        for (int i = 0; i < N; i++) {
            cin >> frequencies[i];
        }
        Solution ob;
        vector<string> ans = ob.huffmanCodes(S, frequencies, N);
        for (auto i : ans)
            cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends
