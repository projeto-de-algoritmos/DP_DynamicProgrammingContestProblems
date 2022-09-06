// https://codeforces.com/problemset/problem/1539/B

#include <bits/stdc++.h>
using namespace std;
int dp[100005];
char s[100005];

int main(void)
{
  int n, q, i = 1;
  cin >> n >> q;
  cin >> s;
  dp[0] = 0;
  while (i <= n)
  {
    int num = s[i - 1] - 'a' + 1;
    dp[i] = num + dp[i - 1];
    i++;
  }
  while (q--)
  {
    int l, r;
    cin >> l >> r;
    cout << dp[r] - dp[l - 1] << endl;
  }
}