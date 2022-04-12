int majorityElement(vector<int> &nums)
{

    map<int, int> m;
    for (int i = 0; i < nums.size(); i++)
    {
        if (m.find(nums.at(i)) != m.end())
        {
            m[nums.at(i)]++;
        }

        else
        {
            m.insert(make_pair(nums.at(i), 0));
        }
    }

    for (int i = 0; i < nums.size(); i++)
    {
        if (m[nums.at(i)] >= (nums.size() / 2))
        {
            return nums.at(i);
        }
    }
    return 0;
}