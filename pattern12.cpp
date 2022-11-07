#include<iostream>
using namespace std;

int main (){
	int n;
	cin>>n;
	int i=1;
	while (i<=n)
	{    
	    // print karo 1st part
		int j=1;
		while (j<=n-i+1)
		{
		cout<<j<<" ";
		j+=1;
	    }
	    
	    // print karo 2nd part
	    int tara1 =i-1;
	    while ( tara1 )
	    {
	    	cout<<"*"<<" ";
	    	tara1 -=1;
		}
		
		// print karo 3rd part
		int tara2 =i-1;
		while ( tara2 ){
		
			cout<<"*"<<" ";
			tara2 -=1;
		}	
		 
		// print karo 4th part
		int num = n-i+1;
		while (num)
		{
			cout<<num<<" ";
			num-=1;
		}
	    
	 cout<<endl;
	 i+=1;
    }
    return 0;
	
}
