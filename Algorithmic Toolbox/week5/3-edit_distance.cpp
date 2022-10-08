#include <bits/stdc++.h>
using namespace std;


int edit_distance(string str1,  string str2 , int n , int m) {
  vector < vector < int > > dp(n + 1 , vector < int > (m + 1));
  for (int  i = 0; i <= n; i++)
  {
    for (int j = 0; j <= m; j++)
    {
      if(i == 0)
        dp[i][j] = j;
      else if(j == 0)
        dp[i][j] = i;
      else if (str1[i - 1 ] == str2[j - 1])
        dp[i][j] = dp[i - 1][j - 1];
      else
        dp[i][j] = 1 + min(min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1])  ;
    }
      
  }
  return dp[n][m];
  
}

int main() {
  string str1;
  string str2;
  cin >> str1 >> str2;
  cout << edit_distance(str1, str2 , str1.size() , str2.size()) << '\n';
  return 0;
}
