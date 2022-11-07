#include<iostream>
using namespace std;

int main ()
{
	
	int arr[3][3];
	cout<<"enter the numbers";
	
	for(int i=0; i<3; i++)
	{
		for(int j=0; j<3; j++)
		{
			cin>>arr[i][j];
		}
	}
	
		for(int i=0; i<3; i++)
	{
		int sum = 0;
		for(int j=0; j<3; j++)
		{
			sum += arr[i][j];
		}
			cout<<"for row sum "<<sum<<endl;
	}
	
		for(int j=0; j<3; j++)
	{
		int sum = 0;
		for(int i=0; i<3; i++)
		{
			sum += arr[i][j];
		}
			cout<<"for column sum "<<sum<<endl;
	}

}