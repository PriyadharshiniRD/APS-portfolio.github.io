#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <climits>
using namespace std;

const int MAX_LEVEL = 6;

struct Node {
    int value;
    Node** forward;
    Node(int level, int val) : value(val), forward(new Node*[level + 1]()) {}
    ~Node() { delete[] forward; }
};

class SkipList {
public:
    SkipList() : header(new Node(MAX_LEVEL, INT_MIN)) {}

    void insertElement(int value) {
        Node* update[MAX_LEVEL + 1];
        Node* current = header;

        for (int i = MAX_LEVEL; i >= 0; i--) {
            while (current->forward[i] != nullptr && current->forward[i]->value < value) {
                current = current->forward[i];
            }
            update[i] = current;
        }

        current = current->forward[0];

        if (current == nullptr || current->value != value) {
            int level = randomLevel();

            Node* newNode = new Node(level, value);

            for (int i = 0; i <= level; i++) {
                newNode->forward[i] = update[i]->forward[i];
                update[i]->forward[i] = newNode;
            }
        }
    }

    bool searchElement(int value) const {
        Node* current = header;
        for (int i = MAX_LEVEL; i >= 0; i--) {
            while (current->forward[i] != nullptr && current->forward[i]->value < value) {
                current = current->forward[i];
            }
        }
        current = current->forward[0];
        return current != nullptr && current->value == value;
    }

    void deleteElement(int value) {
        Node* update[MAX_LEVEL + 1];
        Node* current = header;

        for (int i = MAX_LEVEL; i >= 0; i--) {
            while (current->forward[i] != nullptr && current->forward[i]->value < value) {
                current = current->forward[i];
            }
            update[i] = current;
        }

        current = current->forward[0];

        if (current != nullptr && current->value == value) {
            for (int i = 0; i <= MAX_LEVEL; i++) {
                if (update[i]->forward[i] != current) {
                    break;
                }
                update[i]->forward[i] = current->forward[i];
            }
            delete current;
        }
    }

    void displaySkipList() const {
        cout << "Skip List:" << endl;
        for (int i = 0; i <= MAX_LEVEL; i++) {
            Node* node = header->forward[i];
            cout << "Level " << i << ": ";
            while (node != nullptr) {
                cout << node->value << " ";
                node = node->forward[i];
            }
            cout << endl;
        }
    }

private:
    Node* header;

    int randomLevel() const {
        int level = 0;
        while (rand() % 2 == 0 && level < MAX_LEVEL) {
            level++;
        }
        return level;
    }
};

void displayMenu() {
   
    cout << "1. Insert " << endl;
    cout << "2. Search " << endl;
    cout << "3. Delete " << endl;
    cout << "4. Display" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    srand(time(0)); // Initialize random number generator

    SkipList skipList;
    int choice, value;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                
                skipList.insertElement(value);
                cout << "Element inserted successfully." << endl;
                break;
            case 2:
                cout << "Enter value to search: ";
                cin >> value;
                cout << (skipList.searchElement(value) ? "Element found." : "Element not found.") << endl;
                break;
            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                skipList.deleteElement(value);
                cout << "Element deleted successfully." << endl;
                break;
            case 4:
                skipList.displaySkipList();
                break;
            case 5:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
