#include <iostream>
using namespace std;


int main()
{

    int row;
    cout << "Enter rows: ";
    cin >> row;
    int *arr1 = new int[row];
    int **arr = new int *[row];

    for (int i = 0; i < row; i++)
    {
        cout << "Enter colums for " << i + 1<<" row : ";
        cin >> arr1[i];
        arr[i] = new int[arr1[i]];
    }

    //taking input in jagged array 
    for(int i=0;i<row;i++){
        for(int j=0;j<arr1[i];j++){
            cin>>arr[i][j];
        }
    }

    //giving output
    for(int i=0;i<row;i++){
        for(int j=0;j<arr1[i];j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    
    // memory free
    for (int i = 0; i < row; i++)
    {
        delete []arr[i];
    }
    delete []arr1;
    delete []arr;

    return 0;
}