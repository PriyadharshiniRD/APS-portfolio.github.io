#include <iostream> 

using namespace std; 
int getSum(int BITree[], int index) 
{ 
	int sum = 0; 

	index = index + 1; 

	while (index > 0) 
	{ 
		sum += BITree[index]; 

		index -= index & (-index); 
	} 
	return sum; 
} 
 
void updateBIT(int BITree[], int n, int index, int val) 
{ 
	index = index + 1; 

	while (index <= n) 
	{ 
	// Add 'val' to current node of BI Tree 
	BITree[index] += val; 

	index += index & (-index); 
	} 
} 
int *constructBITree(int arr[], int n) 
{ 
	int *BITree = new int[n+1];

	for (int i=1; i<=n; i++) 
		BITree[i] = 0; 

	for (int i=0; i<n; i++) 
		updateBIT(BITree, n, i, arr[i]); 


	return BITree; 
} 


int main() 
{ 
	int n , q;
    cin>>n>>q;

    int freq[n];
    for(int i=0;i<n;i++)
    {
        cin>>freq[i];   
    }
        

	int *BITree = constructBITree(freq, n); 

    for(int i=0;i<q;i++)
    {
        int a,b;
        cin>>a>>b;
        int suma=getSum(BITree,a-1);
        int sumb=getSum(BITree,b);

        cout<<sumb-suma<<endl;
    }

	return 0; 
} 
