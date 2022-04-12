#include<iostream>
using namespace std;


int setBit(int num, int pos)
{
    pos = 1 << pos;
    return (num | pos);
}

int clearBit(int num, int pos)
{
    pos = 1 << pos;
    return (num & (!pos));
}

int main()
{
    
    int a=100;
    cout<<setBit(a,12);
}