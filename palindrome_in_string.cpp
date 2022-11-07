#include<iostream>
using namespace std;

char toLowerCase(char ch)
{
	if (ch>= 'a' && ch<= 'z')
	{
		return ch;
	}
	else
	{
		char temp = ch-'A'+'a';
		return temp;
	}
	// return temp;
} 

bool checkPalindrome(char ch[] , int n)
{
	int s=0;
	int e=n-1;
	while (s<=e)
	{
		if (ch[s] != ch[e])   // we can also write ---->  if (ch[s++]!=ch[e--])
		{    
		    return false;
		}
	else
	{
     	s++;
     	e--;
    }
   }
    return true;
}


void reverse(char name[],int n)
{
	int s = 0;
	int e = n-1;

	while (s<e)
	{
		 swap(name[s],name[e]);
		 s++;
		 e--;
		
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
	cout<<endl;
	
	cout<<"palindrome true or false = "<<checkPalindrome(name,k);
	cout<<endl;
	
	cout<<"Character is "<<toLowerCase('Z');
	cout<<endl;
	cout<<"Character is "<<toLowerCase('P');
	

}