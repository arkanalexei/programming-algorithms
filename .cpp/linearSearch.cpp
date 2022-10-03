// C++ program for linear search
#include <iostream>
using namespace std;

int search(int arr[], int N, int x)
{
	int i;
	for (i = 0; i < N; i++)
		if (arr[i] == x)
			return i;
	return -1;
}

int main(void)
{
	int n;
	cout<<"Enter array size: ";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
    int x;
    cout<<"Enter the number to search: ";
    cin>>x;
	int result = search(arr, n, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result+1;
	return 0;
}
