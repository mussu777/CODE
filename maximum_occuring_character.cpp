#include<iostream>
#include<string>
using namespace std;

char getMaxOccCharacter(string s)
{
	int arr[26] = {0};

	// create an array of count of characters
	for (int i=0; i<s.length(); i++)
	{
		char ch = s[i];
		// lower Case
		int number = 0;
		if (ch>='a' && ch<='z')
		{
			number = ch-'a';
		}
		else // Upper Case
		{
			number = ch-'A';
		}
		arr[number]++;
	}
	
	int maxi = -1 , ans = 0;
	for (int i=0; i<26; i++)
	{
		if (maxi < arr[i])
		{
			ans = i;
			maxi = arr[i];
		}
	}
	char finalAns ='a' + ans;
	return finalAns; 
}

int main ()
{
	string s;
	cout<<"enter any name ";
	cin>>s;
//	getMaxOccCharacter(s);
	cout<<getMaxOccCharacter(s);
}