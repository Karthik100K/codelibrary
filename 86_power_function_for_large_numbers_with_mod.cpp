#include<iostream>
using namespace std;

ll power(ll x, ll n)
{
    ll result = 1;
    ll MOD = 1000000007;
    while (n)
    {
        if (n & 1)
            result = result * x % MOD;
        n = n / 2;
        x = x * x % MOD;
    }
    return result;
}

int main()
{
    long long int a=10000,b=100;
    cout<<power(a,b);
}