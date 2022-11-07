#include<iostream>
#include<vector>
using namespace std;

void rotate(vector<int> &nums, int k)
{
	vector<int>temp(nums.size());
	for (int i=0; i<nums.size(); i++) 
	{
		temp[(i+k)%nums.size()] = nums[i];
    }   
	// ab temp ka sara chij nums me copy kar dio
       nums = temp;

for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << " ";
    }
}

int main()
{
	vector<int> v;
	
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	
	int n = v.size();
	int k;
	cout<<"enter the key from u want to rotate ";
	cin>>k; 
	rotate(v , k%n);
	
}
