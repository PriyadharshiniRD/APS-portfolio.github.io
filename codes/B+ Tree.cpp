#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class BPlusTreeNode {
public:
    bool isLeaf;
    vector<int> keys;
    vector<BPlusTreeNode*> children;

    BPlusTreeNode(bool isLeaf);
};

BPlusTreeNode::BPlusTreeNode(bool isLeaf) {
    this->isLeaf = isLeaf;
}

class BPlusTree {
private:
    int maxKeys;
    BPlusTreeNode* root;

    void insertInternal(int key, BPlusTreeNode* cursor, BPlusTreeNode* child);
    void splitChild(BPlusTreeNode* parent, int index, BPlusTreeNode* child);
    void traverse(BPlusTreeNode* cursor);

public:
    BPlusTree(int maxKeys);
    void insert(int key);
    void search(int key);
    void display();
};

BPlusTree::BPlusTree(int maxKeys) {
    this->maxKeys = maxKeys;
    root = new BPlusTreeNode(true);
}

void BPlusTree::insert(int key) {
    if (root->keys.size() == maxKeys) {
        BPlusTreeNode* newRoot = new BPlusTreeNode(false);
        newRoot->children.push_back(root);
        splitChild(newRoot, 0, root);
        root = newRoot;
    }
    insertInternal(key, root, nullptr);
}

void BPlusTree::insertInternal(int key, BPlusTreeNode* cursor, BPlusTreeNode* child) {
    if (cursor->isLeaf) {
        cursor->keys.push_back(key);
        sort(cursor->keys.begin(), cursor->keys.end());
    } else {
        int i = upper_bound(cursor->keys.begin(), cursor->keys.end(), key) - cursor->keys.begin();
        BPlusTreeNode* next = cursor->children[i];
        if (next->keys.size() == maxKeys) {
            splitChild(cursor, i, next);
            if (key > cursor->keys[i]) {
                i++;
            }
        }
        insertInternal(key, cursor->children[i], child);
    }
}

void BPlusTree::splitChild(BPlusTreeNode* parent, int index, BPlusTreeNode* child) {
    int midIndex = maxKeys / 2;
    int midValue = child->keys[midIndex];

    BPlusTreeNode* newChild = new BPlusTreeNode(child->isLeaf);
    newChild->keys.assign(child->keys.begin() + midIndex + 1, child->keys.end());
    child->keys.resize(midIndex);

    if (!child->isLeaf) {
        newChild->children.assign(child->children.begin() + midIndex + 1, child->children.end());
        child->children.resize(midIndex + 1);
    }

    parent->keys.insert(parent->keys.begin() + index, midValue);
    parent->children.insert(parent->children.begin() + index + 1, newChild);
}

void BPlusTree::search(int key) {
    BPlusTreeNode* cursor = root;
    while (!cursor->isLeaf) {
        int i = upper_bound(cursor->keys.begin(), cursor->keys.end(), key) - cursor->keys.begin();
        cursor = cursor->children[i];
    }
    if (find(cursor->keys.begin(), cursor->keys.end(), key) != cursor->keys.end()) {
        cout << "Key " << key << " found in the tree." << endl;
    } else {
        cout << "Key " << key << " not found in the tree." << endl;
    }
}

void BPlusTree::display() {
    traverse(root);
    cout << endl;
}

void BPlusTree::traverse(BPlusTreeNode* cursor) {
    if (cursor == nullptr) return;
    if (cursor->isLeaf) {
        for (int key : cursor->keys) {
            cout << key << " ";
        }
        cout << "| ";
    } else {
        for (int i = 0; i < cursor->keys.size(); i++) {
            traverse(cursor->children[i]);
            cout << cursor->keys[i] << " ";
        }
        traverse(cursor->children[cursor->keys.size()]);
    }
}

int main() {
    BPlusTree bpt(3);

    bpt.insert(10);
    bpt.insert(20);
    bpt.insert(5);
    bpt.insert(6);
    bpt.insert(12);
    bpt.insert(30);
    bpt.insert(7);
    bpt.insert(17);

    bpt.display();

    bpt.search(6);
    bpt.search(15);

    return 0;
}
