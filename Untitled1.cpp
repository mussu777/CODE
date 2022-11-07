#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a,b;
string num[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
cin >> a >> b;
for (int i = 0; i <= 10; i++) {
    if (a % 2 == 0 )
     {
        if (b % 2 == 0)
        {
        	cout<<"even";
		}
    
    } 
    else  
     {
        cout <<"odd"<< endl;
    }  
    break ;
	
}      

    return 0;
} 

