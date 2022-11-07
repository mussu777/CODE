#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
	int painterCount = 1;
	int boardLength = 0;
	for (int i=0; i<n; i++)
	{
		if (boardLength + arr[i] <= mid)
		{
			boardLength +=arr[i];
		}
		else
		{
			painterCount++;
			if (painterCount>m || arr[i] > mid)
			{
				return false;
			}
			boardLength = arr[i];
		}
	}
	return true;
}

int allocateBoards(int arr[],int n, int m)
{
	int s = 0;
	int sum = 0;
	
	for (int i=0; i<n; i++)
	{
		sum+=arr[i];
	}
	int e = sum;
	int ans = 1;
	int mid = s + (e - s)/2;
	
	while (s<=e){
	if (isPossible(arr, n, m, mid))
	{
		ans = mid;
		e = mid - 1;
	}
	else 
	{
		s = mid + 1;
	}
	mid =s + (e - s)/2;
} 
	return ans;
}

int main ()
{
	int arr[6] = {2, 1, 5, 6, 2, 3};
	int n , m;
	cout<<"enter the number of boards ";
	cin>>n;
	cout<<"enter the number of painters ";
	cin>>m;
	int firstpart = allocateBoards(arr , n , m);
	cout<<firstpart;
}
