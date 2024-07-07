#include <iostream>
#include <vector>
using namespace std;

vector<int> parentNode;
vector<int> rankNode;

void initializeDSU(int numproduct2s) 
{
    parentNode.resize(numproduct2s);
    rankNode.resize(numproduct2s, 0);
  
    for (int i = 0; i < numproduct2s; ++i) 
    {
        parentNode[i] = i;
    }
}

int findRepresentative(int product2) 
{
    if (parentNode[product2] != product2) 
    {
        parentNode[product2] = findRepresentative(parentNode[product2]);
    }
    return parentNode[product2];
}

void unionproduct2s(int product1, int product2) 
{
    int root1 = findRepresentative(product1);
    int root2 = findRepresentative(product2);

    if (root1 != root2) 
    {
        if (rankNode[root1] > rankNode[root2]) 
        {
            parentNode[root2] = root1;
        } 
        else if (rankNode[root1] < rankNode[root2]) 
        {
            parentNode[root1] = root2;
        } 
        else 
        {
            parentNode[root2] = root1;
            rankNode[root1]++;
        }
    }
}

bool areConnected(int product1, int product2) 
{
    return findRepresentative(product1) == findRepresentative(product2);
}

int main() 
{
    int numproduct2s;
    cout << "Enter number of product2s \n ";
    cin >> numproduct2s;
    initializeDSU(numproduct2s);
  
   
        string checking;
        int product1, product2;
        cin >> checking >> product1 >> product2;
  
        if (checking == "union") 
        {
            unionproduct2s(product1, product2);
        }
        else if (checking == "find") 
        {
            if (areConnected(product1, product2)) 
            {
                cout << product1 << " and " << product2 << " are in the same set." << endl;
            } 
            else 
            {
                cout << product1 << " and " << product2 << " are not in the same set." << endl;
            }
        }
    
    return 0;
}
