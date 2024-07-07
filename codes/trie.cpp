#include <bits/stdc++.h>
using namespace std;
#define size (26)


#define CHAR_TO_INDEX(c) ((int)c - (int)'a')


struct trieNd {
    struct trieNd *children[size];
    bool isLeaf;
};

// initialized to NULLs for new node
struct trieNd *getNode(void) {
    struct trieNd *newNode = NULL;

    newNode = (struct trieNd *) malloc(sizeof(struct trieNd));

    if (newNode) {
        int i;

        newNode->isLeaf = false;

        for (i = 0; i < size; i++) newNode->children[i] = NULL;
    }

    return newNode;
}


class Solution
{
    public:
        //inserting in trie
        void insert(struct trieNd *root, string key)
        {
           
            trieNd *node=root;
            for(auto ch:key)
            {
                if(node->children[ch-'a'] == NULL) 
                {
                    node->children[ch-'a']=new trieNd();  
                }
                node=node->children[ch-'a'];
            }
            node->isLeaf=true;
        }
        
        
        bool search(struct trieNd *root, string key) 
        {
         
            trieNd *node=root;
            for(auto ch:key)
            {
                if(node->children[ch-'a'] == NULL) 
                  return false;
                node=node->children[ch-'a'];
            }
            return node->isLeaf;
        }
};



int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string keys[n];

        for (int i = 0; i < n; i++) {
            cin >> keys[i];
        }
        
        Solution obj;
        struct trieNd *root = getNode();
        
        for (int i = 0; i < n; i++) obj.insert(root, keys[i]);

        string abc;

        cin >> abc;
        // Searching for different keys

        if (obj.search(root, abc))
            cout << "found!!\n";
        else
            cout << "not foound!!\n";
    }
    return 0;
}
