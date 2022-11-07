#include<iostream>
using namespace std;

int moduloExponentiation(int x, int n, int m)
{
    int res = 1;

    while (n>0)
    {
        if (n&1)
        {
            //odd
            res = (1ll *(res)%m * (x)%m)%m;
        }
        x = (1ll * (x)%m * (x)%m)%m;
        n = n>>1;
    }
    return res;
}

int main ()
    {
        int a ,b , c;
        cout<<"Enter the first number ";
        cin>>a;
        cout<<"Enter the power number ";
        cin>>b;
        cout<<"Enter the modulo number ";
        cin>>c;

        // moduloExponentiation(a,b,c);
        cout<<moduloExponentiation(a,b,c);
    }