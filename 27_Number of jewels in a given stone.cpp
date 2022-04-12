#include<bits/stdc++.h>
using namespace std;

int numJewelsInStones(string J, string S)
{
    int count = 0;
    for (int i = 0; i < S.size(); i++)
    {
        if (J.find(S[i]) != std::string::npos)
        {
            count++;
        }
    }
    return count;
}

int main()
{

string jewels = "aA", stones = "aAAbbbb";
cout<<numJewelsInStones(jewels,stones);
}