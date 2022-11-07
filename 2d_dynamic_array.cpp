#include<iostream>
using namespace std;

int main()
{
    // void *ptr;
    // int i = 10;
    // ptr = &i;
    // cout<<"address of i is "<<&i<<endl;
    // cout<<"address of void pointer "<<ptr<<endl;
    // cout<<"addresss is"<<int(*ptr);
    // return 0;

    int row;
    cin>>row;

    int col;
    cin>>col;
    int **arr = new int*[row];
    
    // Creating array 
    for(int i=0; i<row; i++)
    {
        arr[i] = new int[col];
    }

    // taking input
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cin>>arr[i][j];
        }
    }

    // doing output
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    // release memory 
    for(int i=0; i<row; i++)
    {
        delete [] arr[i];
    }

    delete []arr;



}