#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if (n<=1)
    return false;

    for (int i=2; i<n; i++)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}

int countPrime(int n)                      //  program is fine but isme TLE mar dega 
{  
    int count = 0;
    for (int i=2; i<n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}

int main ()
{
    int n;
    cout<<"Enter the nubmer to be searched for prime ";
    cin>>n;

    int found = countPrime(n);
    cout<<"Your count is "<<found;

    return 0;

}


