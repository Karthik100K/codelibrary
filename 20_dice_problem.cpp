
#include <bits/stdc++.h>
using namespace std;


void findWays(int N)
{
	
	int dp[N + 1];

	dp[0] = 1;

	for (int i = 1; i <= N; i++) {

		dp[i] = 0;

		for (int j = 1; j <= 6; j++) {

			if (i - j >= 0) {
				dp[i] = dp[i] + dp[i - j];
			}
		}
	}

	cout << dp[N];
}

int main()
{

	int N = 4;

	findWays(N);

	return 0;
}
