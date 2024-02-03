#include <bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	int k;
	cin >> k;
	int h[n];
	for (int i = 0; i < n; i++) {
		cin >> h[i];
	}
	vector<int> dp(n, INT_MAX);
	dp[0] = 0;
	// dp[1] = abs(h[1] - h[0]);
	for (int i = 1; i < n ; i++) {
		for (int j = 1; j <= k; ++j)
		{
			if (i - j >= 0)
				dp[i] = min(dp[i], dp[i - j] + abs(h[i] - h[i - j]));
		}
		// dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
	}

	cout << dp[n - 1] << endl;
	return 0;
}
