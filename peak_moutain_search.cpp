#include<iostream>
using namespace std;


int peakmountain(int arr[] , int size)
{
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start)/2;
	
	while (start < end)
	{
		if (arr[mid] < arr[mid + 1])
		{
			start = mid + 1;
		}
		else
		{
			end = mid;
		}
		mid = start + (end - start)/2;
	}
	cout<<"the value is "<<arr[start]<<" ";
	cout<<endl;
	return start;
	
}
int main ()
{
	int arr[10] = {24 , 69 , 100 , 99 , 79 , 78 , 67 , 36 , 26 , 19};
	// peakmountain(arr , 10);
	cout<<"The peak mountian array index is "<<peakmountain(arr , 10);
	return 0;
	
}
