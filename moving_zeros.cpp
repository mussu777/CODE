#include<iostream>
using namespace std;

int moveZeros(int arr[], int n)
{
	int i=0;
	for (int j=0; j<n; j++)
	{
		if (arr[j] !=0)
		{
			swap(arr[i],arr[j]);	
			i++;
		}
    } 
      
}

void print (int arr[] , int n)
{
	for (int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}

}

int main ()
{
	int arr[6] = {0,1,0,3,12,0};
    moveZeros(arr , 6);
    print(arr , 6);
  
    

}
