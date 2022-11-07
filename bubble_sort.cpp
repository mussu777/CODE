#include<iostream>
using namespace std;

int bubbleSort(int arr[] , int n)
{
	for(int i=1; i<n; i++)
	{
		for (int j=0; j<n-i; j++)
		{
		   if (arr[j] > arr[j+1])
		   swap(arr[j] , arr[j+1]);
	    }
	}
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}



int main()
{
	int arr[6] = {6,2,8,4,10,9};
	bubbleSort(arr , 6);
	// int Result = bubbleSort(arr , 5);
	// cout<<"The sorted array is "<<Result;
}
