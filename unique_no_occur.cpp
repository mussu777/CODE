#include<iostream>
using namespace std;


 int main(){
 	int trr[10] ;
 	int i , count=0;
 	cout<<"enter the array to be inserted ";
 	for ( i=0; i<10; i++)
 	{   cin>>trr[i];
 	//	cout<<trr[i]<<" ";
		 
		// cout<<endl;
 		count = count^trr[i];}
           cout<<endl;
           cout<<count;                               // not properly solved yet
 		for(i=1; i<=10; i++)
 		{
 			count = count^i;
	}
		 cout<<endl;
		 cout<<count;
		 cout<<endl;
		 if (count/2==2)
		 {
		 	cout<<"true";
		 }
		 
		 else
		 {
		 	cout<<"false";
		 }




return 0;
}                                  
