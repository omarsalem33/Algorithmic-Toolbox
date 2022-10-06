#include <bits/stdc++.h>
using namespace std;


bool ContainMajority(vector<int> Arr, int n) {
	map<int, int> Freq; 
	for (size_t i = 0; i < n; i++)
		Freq[Arr[i]]++;

	for (int i = 0; i <n; i++)
		if (Freq[Arr[i]] > (n / 2))
			return true; 
	
	return false;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    cin >> a[i];
  }
  cout << ContainMajority(a, n) << endl;
}
