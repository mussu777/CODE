#include<iostream>
using namespace std;

void primeSieve(int n)
{
    int prime[100001] = {0};
    
    for(int i=2; i<=n; i++)
    {
        if (prime[i]==0)
        {
            for(int j=2*i; j<=n; j+=i)
            {
                prime[j]=1;
            }
        }
    }

    for (int i=2; i<=n; i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number to check for prime ";
    cin>>n;

    primeSieve(n);

    return 0;
}