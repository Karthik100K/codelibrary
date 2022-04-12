#include<bits/stdc++.h>
using namespace std;

vector<int> runningSum(vector<int> &nums)
{

    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums.at(i);
        nums.at(i) = sum;
    }
    return nums;
}
int main()
{
    vector<int> v;
    int array[6]=[1,2,3,6,88,76]
    v.insert(array,array+6)
    v=runningSum(v);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}