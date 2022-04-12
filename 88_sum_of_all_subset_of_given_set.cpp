

#include <bits/stdc++.h>
using namespace std;


void subsetSums(int arr[], int n)
{
	
	long long total = 1 << n;

	
	for (long long i = 0; i < total; i++) {
		long long sum = 0;

		
		
		
		for (int j = 0; j < n; j++)
			if (i & (1 << j))
				sum += arr[j];

		
		cout << sum << " ";
	}
}


int main()
{
	int arr[] = { 5, 4, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);

	subsetSums(arr, n);
	return 0;
}
