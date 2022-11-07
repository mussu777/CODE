#include<iostream>
#include<vector>
using namespace std;

 vector<int> wavePrint( vector<vector<int>> arr, int nRows, int mCols)
{
	vector<int> ans;
	for(int col=0; col<mCols; col++)
	{
		if (col & 1)
		{                                               
			for(int row=nRows-1; row>=0; row--)    
			{
				// cout<<arr[row][col];
				ans.push_back(arr[row][col]);
				
			}
		}
			
			else
			{
				for(int row=0; row<nRows; row++)
				{
					// cout<<arr[row][col];
					ans.push_back(arr[row][col]);
				}
			}
	}
	return ans;
}

int main()
{
	int n , m;
	cout<<"Enter the no. of rows and column ";
	cin>> n >> m;
	vector<vector<int>> v(n,vector<int>(m,0));
	// int val;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			// cin>>val;
			// v[i][j] = val;
		    cin>>v[i][j];
		}
	}
    
	vector<int> found = wavePrint(v ,n ,m);
	for(int i=0; i<found.size(); i++)
	{
		cout<<found[i]<<" ";
	}
    
    return 0;
}