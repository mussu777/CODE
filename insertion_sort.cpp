#include<iostream>
using namespace std;


int insertionSort(int arr[] , int n)
{
	for (int i=1; i<n; i++)
	{  int temp = arr[i];
	
	       int j=i-1;
		for (; j>=0; j--)
		{
			if (arr[j] > temp)
			{
				arr[j+1] = arr[j];
				// cout<<arr[j+1]<<" ";
			}
				else 
				{
					break;
				}
				
		}
		    arr [j+1] = temp;	    
		    cout<<arr[j+1]<<" ";
	}
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[7] = {10 , 1 , 7 , 4 , 8 , 2 , 11};

	insertionSort(arr,7);
	
	
}
