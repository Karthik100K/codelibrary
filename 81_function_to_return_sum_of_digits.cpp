int addDigits(int num)
{
    if (num / 10 == 0)
    {
        return num;
    }
    while (num / 10 > 0)
    {
        int x = num;
        num = 0;
        while (x > 0)
        {
            num += x % 10;
            x /= 10;
        }
    }
    return num;
}
