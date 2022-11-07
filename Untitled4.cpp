#include<iostream>
using namespace std;

int main()
{
	int n,t,i;
	string s;
	cin>>t;
	while (t--)
	{
		cin>>n;
		cin>>s;
		for (i=0; i<n; i++)
		{
			if (s[i]=='A') s[i]= 'T';
			else if (s[i]=='T') s[i]= 'A';
			else if (s[i]=='G') s[i]= 'C';
			else if (s[i]=='C') s[i]= 'G';
		}
		cout<<s<<endl;
	}
	
	return 0;
	
}
