#include<iostream>
using namespace std;

 int binarysearch(int array[], int size, int key)
{
	int start = 0;
	int end = size - 1;
	int mid = start + (end-start)/2;
	
	while (start<=end)
	{
     	if (array[mid]==key){
	    return mid;	}
	
     	if (key>array[mid]){
     		start = mid + 1;
		 }
		 else {
		 	end = mid - 1;
		 }
		 mid = start + (end - start)/2;
		
	}
      return -1;
}
int main ()
{
	int array[7] = {6,8,11,24,36,47,55};
	cout<<"enter the key to be searched";
	int key;
	cin>>key;
	
	int index = binarysearch(array,7,key);
	cout<<"index of "<<key<<" is "<<index;
	return 0;
	
}
