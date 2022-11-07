#include <iostream>
using namespace std;

int main()
{

	int arr[3][3];
	// taking input from users
	cout<<"Enter the array plz ";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> arr[i][j];
		}
	}
	// displaying   row   and   rowsum
	int maxy = INT32_MIN;
	int rowIndex = -1;

	for (int i = 0; i < 3; i++)
	{
		int sum = 0;
		for (int j = 0; j < 3; j++)
		{
			sum += arr[i][j];
		}
		cout << "for row sum "<<i<<" "<<sum<< endl;

		if (sum > maxy)
		{
			maxy = sum;
			rowIndex = i;
		}
	}
	cout << "the row is " << rowIndex;
	cout << endl;
	cout << "maximum sum is " << maxy;
	cout << endl;
	cout << endl;

	// displaying column and column sum
	int maxi = INT32_MIN;
	int columnIndex = -1;
	for (int j = 0; j < 3; j++)
	{
		int sum = 0;
		for (int i = 0; i < 3; i++)
		{
			sum += arr[i][j];
		}
		cout << "for column sum "<< j <<" "<< sum << endl;

		if (sum > maxi)
		{
			maxi = sum;
			columnIndex = j;
		}
	}
	cout << "the column is "<< columnIndex;
	cout << endl;
	cout << "maximum sum is " << maxi;
}
