#include<bits/stdc++.h>
using namespace std;

int gamingArray(vector<int> arr)
{
    int count = 1, max = arr.at(0);
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr.at(i) > max)
        {
            count++;
            max = arr.at(i);
        }
    }
    if (count % 2 == 0)
    {
        return 2;
    }
    return 1;
}


int main()
{
     int arr[] = {2, 3, 5, 4, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> vect(arr, arr + n);
    cout << gamingArray(vect) << endl;

}