#include <iostream>
using namespace std;

int getPivot(int arr[], int size)
{
	int start = 0;
	int end = size - 1;
	int mid = start + (end - start) / 2;
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
		mid = start + (end - start) / 2;
	}
	return start;
}

int binarysearch(int arr[], int s, int e, int key)
{
	int start = s;
	int end = e;
	int ans = -1;
	int mid = start + (end - start) / 2;

	while (start <= end)
	{
		if (arr[mid] == key)
		{
			return mid;
		}

		if (key > arr[mid])
		{					                // pivot is fine working
			start = mid + 1;                 // binary search is not working only after the pivot are working
		}					               //  ex 1 , 2 , 4 are working
		else
		{
			end = mid - 1;
		}
		mid = start + (end - start) / 2;
	}

	return -1;
}

int main()
{
	int arr[7] = {5, 6, 8, 9, 1, 2, 4};
	int key;
	int size = 7;
	cout << "enter the key ";
	cin >> key;

	int pivot = getPivot(arr, size);
	cout << pivot;
	cout << endl;

	if (key <= arr[pivot] && key > arr[size - 1])

	{
		cout << binarysearch(arr, 0, pivot, key);
	}

	else

	{
		cout << binarysearch(arr, pivot+1, size - 1, key);
	}
}
