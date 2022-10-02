#include <bits/stdc++.h>
using namespace std;

bool GreaterOrEqual(string& a, string& b) {
	return(b + a < a + b);
}

string MAX(vector<string> Nums, int n)
{
    sort(Nums.begin(),Nums.end(),GreaterOrEqual); 
    stringstream Salary; 
    for (size_t i = 0; i < n; i++) {
      Salary << Nums[i]; 
    }
    return Salary.str(); 
}

int main() {
	int n;
	cin >> n;
	vector<string> Nums(n);
	for (size_t i = 0; i < n; i++) {
		cin >> Nums[i];
	}
	cout << MAX(Nums, n) << '\n';
}