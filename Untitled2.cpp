#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int t,s;
	int x , y;
	cin>>t;
	while (t--)
	{
	    cin>>x>>y;
	    if (x<y)
	    {
	        s= y-x;
	        cout<<s<<endl;
	    }
	    else 
	   {
	       s=x-y;
	       cout<<s<<endl;
	   }
	}
	
	return 0;
}
