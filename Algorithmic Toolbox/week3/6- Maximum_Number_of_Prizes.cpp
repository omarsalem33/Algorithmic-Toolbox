#include <bits/stdc++.h>
using namespace std;


int main(){
	int n , cnt = 0;	 cin >>n ;
	vector < int > ans;
	for(int i = 1 ; i <= n ; i ++)
	{
		if(n - i > i){
			ans.emplace_back(i);
			cnt++;
			n -= i;
		}
		else {
			ans.emplace_back(n);
			cnt++;
			break;
		}
	}
	cout << cnt << '\n';
	for(auto &i : ans)
		cout << i << ' ';

	return 0;
}

