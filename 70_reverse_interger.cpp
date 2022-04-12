int reverse(int x)
{

    stack<int> s;
    int flag = 0, num = abs(x), a, i;
    long int m = 0;
    while (num != 0)
    {
        a = num % 10;
        s.push(a);
        num /= 10;
    }
    i = 0;
    while (s.size() != 0)
    {
        m += s.top() * pow(10, i);
        i++;
        s.pop();

        if (m < -2147483648 || m > 2147483647)
        {
            return 0;
        }
    }
    if (x < 0)
    {
        return -1 * m;
    }
    return m;
}
