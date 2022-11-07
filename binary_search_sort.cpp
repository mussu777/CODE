#include<iostream>
using namespace std;

int firstOcc(int arr[],int size, int key)
{
	int start = 0;
	int end = size - 1;
	int mid = start + (end-start)/2;
	int ans = -1;
	while (start<=end)
	{
	if (arr[mid]==key)
	{
		ans = mid;
	    end = mid - 1;                       // We have done both work first finding first and last index
	}                                        //            second total number of index.
	else if (arr[mid]<key)
	{
		start = mid + 1;
	}
	else if (arr[mid]>key)    
	{
		end = mid - 1;	
	}
	mid = start + (end-start)/2;
  }
  return ans;
}

int lastOcc(int arr[],int size, int key)
{
	int start = 0;
	int end = size - 1;
	int mid = start + (end-start)/2;
	int ans = -1;
	while (start<=end)
	{
	if (arr[mid]==key)
	{
		ans = mid;
	    start = mid + 1;
	}
	else if (arr[mid]<key)
	{
		start = mid + 1;
	}
	else if (arr[mid]>key)
	{
		end = mid - 1;
		
	}                                             
	mid = start + (end-start)/2;
  }
  return ans;
}
int main ()
{
	int arr[6]= {1,3,3,5,3,4,};
	int key ;
	cout<<"Enter the key ";
	cin>>key;
	
	//firstOcc(arr, 6 , key);
	cout<<"the index of first occ of "<<key<<" is "<<firstOcc(arr , 6 , key);
	cout<<endl;
	cout<<"the index of last occ of "<<key<<" is "<<lastOcc(arr , 6 , key);
	cout<<endl;
	
	
	int index = (lastOcc(arr , 6 , key) - firstOcc(arr , 6 , key)) + 1;
	cout<<"Total number of index "<<index;
	return 0;
}
