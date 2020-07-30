#include <bits/stdc++.h>

using namespace std;
typedef long long LL;
const int MAXN = 200 + 10;
int a[MAXN][MAXN];
int dp[MAXN][MAXN][2];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    int res1 = 0, res2 = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 0) {
                dp[i][j][0] = min(dp[i - 1][j - 1][0], min(dp[i - 1][j][0], dp[i][j - 1][0])) + 1;
                res1 = max(dp[i][j][0], res1);
            }
        }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++) {
            if (a[i][j] == 1) {
                dp[i][j][1] = min(dp[i - 1][j - 1][1], min(dp[i - 1][j][1], dp[i][j - 1][1])) + 1;
                res2 = max(dp[i][j][1], res2);
            }
        }
    if (res1 < res2)
        res1 = res2;
    cout << res1 * res1 << endl;
    return 0;
}