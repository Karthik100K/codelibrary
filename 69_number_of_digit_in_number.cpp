#include<bits/stdc++.h>
using namespace std;



int checkDigit(int num)
{
    int i = 0;
    while (num != 0)
    {
        i++;
        num /= 10;
    }
    return i;
}
int main()
{
   int a=1234;
   cout<<checkDigit(a);
}