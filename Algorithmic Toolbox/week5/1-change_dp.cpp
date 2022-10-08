#include <bits/stdc++.h>
using namespace std;

int CountMinWays(int Coins[] ,int Money) {
	vector<int> Ways(Money + 1, INT_MAX);
	Ways[0] = 0;
	for (int i = 1; i <= Money; i++) {
		for (int c = 0; c < 3; c++) {
			if (i >= Coins[c]) {
				int sub_res = Ways[i - Coins[c]];
				if (sub_res != INT_MAX and sub_res + 1 < Ways[i])
					Ways[i] = sub_res + 1;
			}
		}
	}
	return Ways[Money];
}

int main() {
  int m; 
	cin >> m; 
	int Coins[3] = { 1,3,4 };
	cout << CountMinWays(Coins, m) << '\n';
  return 0;
}
