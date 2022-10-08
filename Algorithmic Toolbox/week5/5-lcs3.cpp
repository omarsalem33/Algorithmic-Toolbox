#include <bits/stdc++.h>
using namespace std;



int LCS3(vector<int> _One, vector<int> _Second, vector<int> _third, int n, int m, int z) {
	vector<vector<vector<int>>> dp(n + 1,vector<vector<int>>(m + 1,vector<int>(z + 1)));

	for (int i = 0; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			for (int k = 0; k <= z; k++) {
				if (i == 0 || j == 0 || k == 0) {
					dp[i][j][k] = 0;
					continue;
				}
				else if (_One[i - 1] == _Second[j - 1] and _One[i - 1] == _third[k - 1]) {
					dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
					continue;
				}
				else {
					dp[i][j][k] =
						max( max(dp[i - 1][j][k], dp[i][j - 1][k]),dp[i][j][k - 1]);
				}
			}

		}
	}
	return dp[n][m][z];
}

int main() {

	int a, b, c;
	cin >> a;
	vector<int> One(a);
	for (int i = 0; i < a; i++)
		cin >> One[i];

	cin >> b;
	vector<int> Second(b);
	for (int i = 0; i < b; i++) 
		cin >> Second[i];

	cin >> c;
	vector<int> Third(c);
	for (int i = 0; i < c; i++)
		cin >> Third[i];

	cout << LCS3(One, Second, Third, a, b, c) << '\n';
} 