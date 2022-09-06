// https://codeforces.com/problemset/problem/1472/C

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> a(n), dp(n);
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      a[i] = x;
    }
    for (int i = n - 1; i >= 0; i--)
    {
      dp[i] = a[i];
      int j = i + a[i];
      if (j < n)
      {
        dp[i] += dp[j];
      }
    }
    int ans = *max_element(dp.begin(), dp.end());
    cout << ans << endl;
  }
}
