#include <bits/stdc++.h>
using namespace std;

int main() {
  int n ; cin >> n ;
  vector < pair < int ,int >  > periods(n);
  vector < int > ans ;
  for(auto &i : periods)
      cin >> i.first >> i.second;
  sort(periods.begin(), periods.end());
  int current_visit = 0, last_visit = 1, res = 0;

  while (current_visit < periods.size())
  {
    while (last_visit < periods.size() and periods[current_visit].second >= periods[last_visit].first and periods[current_visit].second >=periods[last_visit].second)  // the interval is fully enclosed by the segment
          current_visit = last_visit++;
    while (current_visit < periods.size() and last_visit < periods.size() and periods[current_visit].second - periods[last_visit].first >= 0)
           last_visit++;
    
    res++;
    ans.push_back(periods[current_visit].second);
    current_visit = last_visit;
  }
  cout << res << '\n'; 
  for(auto &i : ans)
      cout << i << ' ';
  return 0;
}