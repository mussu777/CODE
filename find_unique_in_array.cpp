#include<iostream>
using namespace std;

int main ()
{
	int arr[7];
	cout<<"enter the numbers of array"<<endl;
	for (int i=0; i<7; i++)                            /// we have to find unique number not duplicate ex: 3 2 1 6 3 6 2 --- ans will be 1
	{
		cin>>arr[i];
	}
	  int ans = 0;
	for (int i=0; i<7; i++)
	{
		ans = ans^arr[i];
	}
	
	
	cout<<"The result is "<<ans;
}
