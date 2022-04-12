
#include <iostream>
using namespace std;
class countbit {

public:
	unsigned int countSetBits(int n)
	{
		unsigned int count = 0;
		while (n) {
			n &= (n - 1);
			count++;
		}
		return count;
	}
};

int main()
{
	count bit g;
	int i = 9;
	cout << g.countSetBits(i);
	return 0;
}
