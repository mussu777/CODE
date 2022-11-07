#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
	int s= 0;
	int e = v.size()-1;
	
	while (s<e)
	{
		swap(v[s++] , v[e--]);
	}
	return v;
}

vector<int> findArraySum(vector<int> &a , vector<int> &b )
{
	int i=a.size()-1;
	int j=b.size()-1;
	vector<int> ans;
	int carry = 0;
	
	while (i>=0 && j>=0)
	{
		int val1 = a[i];
		int val2 = b[j];
		
		int sum = val1 + val2 + carry;
		
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
		j--;
	}
	// first case 
	while (i>=0)
	{
		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}
	// second case
	while (j>=0)
	{
		int sum = a[j] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}
	// third case
	while (carry!=0)
	{
		int sum = carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
	}

	return  reverse(ans);
	
}

int main()
{
	vector<int> A = {4,2,3,4};
	vector<int> B = {4,3,2,4};
	
// 	A.push_back(9);
// 	A.push_back(1);
// 	A.push_back(7);                                     //trying different cases    
// 	A.push_back(4);
// 	for (int i : A)
// {
// 	cout<<i;
// }
//     cout<<endl;
// 	B.push_back(2);
// 	B.push_back(1);
// 	B.push_back(3);
// 	B.push_back(6);
	
// 	for (int j : B)
// {
// 	cout<<j;
// }
	
	// int x = sizeof(A) / sizeof(A[0]);           //trying different cases
	// // cout<<x;
	// cout<<endl;
	// int y = sizeof(B) / sizeof(B[0]);
	// // cout<<y;
	
    vector<int> answer = findArraySum(A, B);
	for(int i = 0; i<answer.size(); i++)
	{
		cout<<answer[i]<<" ";
	}

   
}

