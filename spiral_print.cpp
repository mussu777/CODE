#include<iostream>
using namespace std;


int spiraPrint(int matrix[][3] , int nRow , int mCol)
{
    int row = nRow;
    int col = mCol;

    int count = 0;
    int total = row*col;                                      // not solved properly output is wrong
    int ans = -1;

    // index initialisation
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        // printing starting row
        for(int index = startingCol; count < total && index < endingCol; index++)
        {
            ans = matrix[startingRow][index];
            count++;
        }
        startingRow++;

        // printing ending column
        for(int index = startingRow; count < total && index < endingRow; index++)
        {
            ans = matrix[index][endingCol];
            count++;
        }
        endingCol--;

        //printing ending row
        for(int index = endingCol; count < total && index < startingCol; index--)
        {
            ans = matrix[endingRow][index];
            count++;
        }
        endingRow--;

        //printing starting column
        for(int index = endingRow; count < total && index < startingRow; index--)
        {
            ans = matrix[index][startingCol];
            count++;
        }
        startingCol++;
     
    }
    
    return ans;

}

int main()
{
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int found = spiraPrint(arr , 3 ,3);
    cout<<"the spiral print answer is "<<found;
}