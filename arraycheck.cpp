#include<iostream>
using namespace std;

bool search (int arr[],int size,int keylelo)
{

	for (int i=0; i<size; i++)
	{
	
	  if (arr[i] == keylelo)
	 {
	 	//cout<<keylelo<<" ";
		return 1;
     }
    }
    return 0;
}



int main(){
	
	int arr[10]={3,5,34,54,2,6,7,80,20};
	cout<<"enter the key to be searched for"<<endl;
	int keylelo;
	cin>>keylelo;
	bool found = search(arr,10,keylelo);
	if (found)
   	{
		cout<<"array is present ";
    }
		else
		{
			cout<<"array is not present";
	    }
	return 0;
}
