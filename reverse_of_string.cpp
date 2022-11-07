#include<iostream>
using namespace std;

void reverse(char name[],int n)
{
	int s = 0;
	int e = n-1;

	while (s<e)
	{
		 swap(name[s++],name[e--]);
		
	}

}
int getlength(char name[])
{
	int count=0;
	for(int i=0; name[i]!='\0'; i++)
	{
		count++;
	}
	return  count;
}
int main ()
{
	char name[20];
	cout<<"enter your name ";
	cin>>name;
	cout<<name;
	cout<<endl;
	cout<<"length is "<<getlength(name);
	int k = getlength(name);
	cout<<endl;
	reverse(name, k);
	cout<<"reverse  name is "<<name;
   
}