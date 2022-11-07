#include<iostream>
#include<vector>
using namespace std;

bool searchMatrix(vector<vector<int> >& matrix, int target)
{       
    int row = matrix.size();
    int col = matrix[0].size();
    
    int start = 0;
    int end  = row*col-1;
    
    int mid = start + (end-start)/2;
    
    while(start<=end) {
            
        int element = matrix[mid/col][mid%col];
        
        if(element == target) {
            return 1;
        }
        
        if(element < target) {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
         mid = start + (end-start)/2;    
    }
    return 0;
}

int main()
 {
    // vector<vector<int>> arr = {
    // {1,2,3,4,5},
    // {6,7,8,9,10},
    // {11,12,13,14,15},
    // {16,17,18,19,20}};

    int n , m;
	cout<<"Enter the no. of rows and column ";
	cin>> n >> m;

	vector<vector<int>> v(n,vector<int>(m,0));

    int target;
    cout<<"enter the target ";
    cin>>target;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
		    cin>>v[i][j];
		}
	}

    int  found = searchMatrix(v,target);
    cout<<"Your answer is "<< found;

   return 0; 
}
   