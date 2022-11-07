#include<iostream>
using namespace std;

void reversealt(int arr[] , int size)
{
	for (int i=0; i<size; i+=2)
	{
		if (i+1 < size)
	  {
		swap(arr[i],arr[i+1]);
	  }
	} 
        /* if swap function is not given than we have to  
         first stored the 2nd number  ;  temp = arr[1];
         then change it                     arr[1] = arr[0];
		 then use the temp                  arr[0] = temp;  */                              
}

void printarray(int arr[],int size)
{
	for (int i=0; i<size; i++)
	{
		cout<<arr[i]<<" ";}
	cout<<endl;
}

int main ()
{
	int even[6] = {4,6,7,2,3,1};
	int odd[7] = {2,5,7,3,4,8,9,};
	
	reversealt(even , 6);
	reversealt(odd , 7);
	
	printarray(even , 6);
	printarray(odd , 7);
	
	return 0;
}
