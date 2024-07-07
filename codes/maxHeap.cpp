#include <iostream>
#include <vector>
using namespace std;

class MaxHeap {
public:
    MaxHeap() {}

    void insert(int val) {
        heap.push_back(val);
        siftUp(heap.size() - 1);
    }

    void deleteMax() {
        if (heap.size() == 0) {
            cout << "Heap is empty" << endl;
            return;
        }
        heap[0] = heap.back();
        heap.pop_back();
        siftDown(0);
    }

    int getMax() {
        if (heap.size() == 0) {
            cout << "Heap is empty" << endl;
            return -1;
        }
        return heap[0];
    }

    void printHeap() {
        for (int i : heap) {
            cout << i << " ";
        }
        cout << endl;
    }

private:
    vector<int> heap;

    void siftUp(int index) {
        while (index > 0) {
            int parent = (index - 1) / 2;
            if (heap[index] > heap[parent]) {
                swap(heap[index], heap[parent]);
                index = parent;
            } else {
                break;
            }
        }
    }

    void siftDown(int index) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;

        if (leftChild < heap.size() && heap[leftChild] > heap[largest]) {
            largest = leftChild;
        }
        if (rightChild < heap.size() && heap[rightChild] > heap[largest]) {
            largest = rightChild;
        }
        if (largest != index) {
            swap(heap[index], heap[largest]);
            siftDown(largest);
        }
    }
};

int main() {
    MaxHeap maxHeap;
    maxHeap.insert(3);
    maxHeap.insert(5);
    maxHeap.insert(9);
    maxHeap.insert(6);
    maxHeap.insert(8);
    maxHeap.insert(20);

    cout << "Max Heap: ";
    maxHeap.printHeap();

    cout << "Max Element: " << maxHeap.getMax() << endl;

    maxHeap.deleteMax();
    cout << "After deleting max element, Max Heap: ";
    maxHeap.printHeap();
    
     cout << "Max Element: " << maxHeap.getMax() << endl;

    

    return 0;
}
