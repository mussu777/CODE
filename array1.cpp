#include<iostream>
#include<math.h>
using namespace std;

int main ()
{
	int arr[10] ;
	int n;
	cout<<"Enter the no. of array to be checked ";
	cin>>n;
	int sum = 0;
	
//	int ans=0;
//	int i = 0;
//	int digit = arr[i];

	for (int i=0; i<=n; i++)
	{
      cout<<" Array list plz ";
		cin>>arr[i];
      sum = sum + arr[i];
	}  

	

	cout<<" the sum of array is "<<sum;
	
    return 0;
	
	
}
