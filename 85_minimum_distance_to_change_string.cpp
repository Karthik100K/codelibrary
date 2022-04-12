#include<iostream>
using namespace std;
//  Minimum changes from one string to another
int minDistance(string word1, string word2)
{
    int n1 = word1.size(), n2 = word2.size();
    int edit[n1 + 2][n2 + 2];
    for (int i = 0; i <= word1.size(); i++)
    {
        edit[i][0] = i;
    }
    for (int i = 0; i <= word2.size(); i++)
    {
        edit[0][i] = i;
    }
    for (int i = 1; i <= word1.size(); i++)
    {
        for (int j = 1; j <= word2.size(); j++)
        {
            if (word2.at(j - 1) == word1.at(i - 1))
            {
                edit[i][j] = edit[i - 1][j - 1];
            }
            else
            {
                edit[i][j] = min(edit[i][j - 1] + 1, min(edit[i - 1][j - 1] + 1, edit[i - 1][j] + 1));
            }
        }
    }

    return edit[n1][n2];
}
int main()
{
    string s1,s2;
    s1="code";
    s2="library"
    cout<<minDistance(s1,s2);
}