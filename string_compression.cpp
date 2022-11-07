#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compress(vector<char> &chars)
{
	int i = 0;
	int ansIndex = 0;
	int n = chars.size();

	while (i<n)
	{
		int j=i+1;
		
		while (j<n && chars[i]==chars[j])
		{
			j++;
		}
		
		chars[ansIndex++] = chars[i];
		
		int count = j-i;
		
		if (count > 1)
		{
			string cnt = to_string(count);
			for(char ch : cnt)
			{
				chars[ansIndex++] = ch;
			}
		}
		i = j;
	}
	cout<<ansIndex;
	return ansIndex;
	
}

int main()
{
	vector<char> ch = {'a' , 'a' , 'a' , 'b' , 'b' , 'c' , 'd' , 'd'} ;

	// ch.push_back('a');
	// ch.push_back('a');
	// ch.push_back('a');
	// ch.push_back('b');
	// ch.push_back('b');
	// ch.push_back('c');
	// ch.push_back('d');
	// ch.push_back('d');

    compress(ch);


}
