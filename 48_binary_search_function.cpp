int binarySearch(vector<int> &nums, int target)
{

    int l = 0, h = nums.size();
    if (target > nums.at(nums.size() - 1))
    {
        return -1;
    }
    while (l <= h)
    {
        int m = (l + h) / 2;
        if (nums.at(m) > target)
        {
            h = m - 1;
        }
        else if (nums.at(m) < target)
        {
            l = m + 1;
        }
        else
        {
            return m;
        }
    }
    return -1;
}