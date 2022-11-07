#include<iostream>
using namespace std;

long long int squareroot( int n )
{
int start = 0;
int end = n;
long long int mid = start + (end - start)/2;

long long int ans = -1;
while (start <= end)
{
	long long int square = mid*mid;
	
	if (square == n)
	{
		return mid;
	}
	else if (square < n )
	{
		ans = mid;
		start = mid + 1;
	}
	else
	{
		end = mid - 1;
	}
	mid = start + (end - start)/2;
}
    return ans;
}

double precesion(int n , int m , int tempsol)
{
	double factor = 1;
	double ans = tempsol;
	for ( int i=0; i<m; i++)
	{
		factor = factor/10;

		for (double j=ans; j*j<n; j=j+factor )
		{
			ans = j;
		}
	}
	return ans;	
}

int main ()
{
    int n , m;
	cout<<"enter the number ";
	cin>> n;
	cout<<"type precesion plz ";
	cin>> m;
	int tempsol = squareroot(n);
	cout<<"root is "<<tempsol<<endl;
	cout<<"the more precesion value is "<<precesion (n , m , tempsol);
}
