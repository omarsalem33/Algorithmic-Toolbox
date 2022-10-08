#include <bits/stdc++.h>
using namespace std;



int lcs2(vector<int> &a, vector<int> &b , int n , int m) {
    vector < vector < int > > dp(n+1 , vector < int > (m+1));
    for (int i = 0; i <= n; i++)
    {
      for (int j = 0; j <= m; j++)
      {
        if(i == 0 or j == 0)
            dp[i][j] = 0;
        else if(a[i-1] == b[j-1])
            dp[i][j] = dp[i - 1][j - 1] + 1;
        else
          dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
      }
      
    }
    return dp[n][m];
}

int main() {
  int n , m ; cin >> n ;
  vector< int > a(n);
  for(auto &i : a)
    cin >> i ;
  cin >> m;
  vector< int > b(m);
  for(auto &i : b)
    cin >> i ;
  cout << lcs2(a,b,n,m)<< '\n';
}
