#include <bits/stdc++.h>
using namespace std;

int main() {
  int n ; cin >> n ;
  vector < int > profit(n) , clicks(n);
  for(auto &i : profit)
    cin >> i ;
  for(auto &i : clicks)
    cin >> i ;

  sort(profit.begin() , profit.end()) , sort(clicks.begin() , clicks.end());
  long long ans = 0;
  for(int i = 0 ; i < n ; i ++)
    ans += ((long long)profit[i]) * clicks[i];

  cout << ans << '\n';  
  return 0;
}