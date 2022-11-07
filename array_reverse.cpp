#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v)
{    int e = v.size()-1;
	for (int i=0; i<=e; i++)
    {
		swap(v[i] , v[e]);
		e--;
	}
     return v;
}

 void  print(vector<int> v)
 {
 	for(int i=0; i<=v.size()-1; i++)
	 {
	 	 cout<<v[i]<<" ";
	 }
 }

int main ()
{
	vector <int> v;
	
	v.push_back(11);
	v.push_back(7);
	v.push_back(3);
	v.push_back(12);
	v.push_back(4);
	
    vector<int> ans = reverse(v);
    print(ans);
	return 0;
}
