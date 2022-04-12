
#include <iostream>
using namespace std;


int count(int n)
{
	int table[n + 1], i;


	for(int j = 0; j < n + 1; j++)
			table[j] = 0;


	table[0] = 1;


	for (i = 3; i <= n; i++)
	table[i] += table[i - 3];
	
	for (i = 5; i <= n; i++)
	table[i] += table[i - 5];
	
	for (i = 10; i <= n; i++)
	table[i] += table[i - 10];

	return table[n];
}


int main(void)
{
	int n = 20;
	cout << "Count for " << n
		<< " is " << count(n) << endl;

	n = 13;
	cout <<"Count for "<< n<< " is "
		<< count(n) << endl;
	return 0;
}


