#include<iostream>
#include<string>
using namespace std;

string replaceSpaces(string str)
{
	string temp = "";
	for(int i=0; i<str.length(); i++)
	{   
		if (str[i] == ' ')                  
		{
			temp.push_back('@');               // replacing in differnt string such as by creating temp 
			temp.push_back('4');
			temp.push_back('0');
		}
		else 
		{
			temp.push_back(str[i]);
		}
	}
    // cout<<temp;
	  for(int i=0; i<temp.size(); i++)
    {
        cout<<temp[i];
    }


	
//      string s1 = "@40";

// for(int i=0 ; i<str.length() ; i++){

//        if(str[i]==' '){

//            str.replace(i , 1 , s1);

//        }

//    }

//    return str;
                                        
}     

int main()
{
	char s[20];
    cin.getline(s,20);
    replaceSpaces(s);
    // cout<<replaceSpaces(s);


}