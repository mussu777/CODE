#include<iostream>
using namespace std;


int main(){
    int n;
    cin>>n;

    int row = 1;
    while (row <= n){
        int colm = 1;
        while (colm <= n-row+1){
            cout << "*";
            colm = colm + 1;
        }
        cout << endl;
        row = row + 1;
    }
	return 0;
}
